package com.it.zyx.controller;

import com.it.zyx.entity.Medicine;
import com.it.zyx.entity.MedicineType;
import com.it.zyx.entity.Order;
import com.it.zyx.entity.User;
import com.it.zyx.service.MedicineService;
import com.it.zyx.service.OrdersService;
import com.it.zyx.service.impl.MedicineServiceImpl;
import com.it.zyx.service.impl.OrdersServiceImpl;
import com.it.zyx.util.TimeUtil;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;
import java.io.PrintWriter;
import java.math.BigDecimal;
import java.util.*;

@WebServlet(name = "MedicineServlet", urlPatterns = "/medicine/*")
public class MedicineServlet extends HttpServlet {
    List<Medicine> car = new ArrayList<>();
    private MedicineService medicineService = new MedicineServiceImpl();
    private Map<Long, Integer> medicine_num = new HashMap<>();
    private OrdersService ordersService=new OrdersServiceImpl();

    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        doGet(request, response);
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        String pathInfo = request.getPathInfo();
        HttpSession session = request.getSession();
        if ("/index".equals(pathInfo)) {
            List<MedicineType> medicineTypes = medicineService.findMedicineTypes();
            session.setAttribute("medicineTypes", medicineTypes);
            //将第一个药物类别里面的药物默认展示在首页
            int typeId = medicineTypes.get(0).getId();
            List<Medicine> medicines = medicineService.findMedicineByTypes(typeId);
            session.setAttribute("CurrMedicines", medicines);
            response.sendRedirect(request.getContextPath() + "/index.jsp");
        }
        if ("/findByTid".equals(pathInfo)) {
            int tid = Integer.parseInt(request.getParameter("typeId"));
            List<Medicine> medicines = medicineService.findMedicineByTypes(tid);
            session.setAttribute("CurrMedicines", medicines);
            response.sendRedirect(request.getContextPath() + "/medicines.jsp");
        }
        if ("/findByMname".equals(pathInfo)) {
            String keyword = request.getParameter("word");
            List<Medicine> medicines = medicineService.findMedicineByMname(keyword);
            session.setAttribute("CurrMedicines", medicines);
            response.sendRedirect(request.getContextPath() + "/index.jsp");
        }
        if ("/addCar".equals(pathInfo)) {

            int medicineId = Integer.parseInt(request.getParameter("mid"));
            int num = Integer.parseInt(request.getParameter("num"));
            Medicine medicine = medicineService.findByMid(medicineId);
            long idLong = new BigDecimal(medicine.getId()).longValue();
            if (car.size() == 0) {
                car.add(medicine);
                medicine_num.put(idLong, num);
            } else {
                int sign = 0;/*标记car中是否有一致的*/
                for (Medicine medicine1 : car) {
                    if (medicine1.getId() == medicineId) {
                        int tempNum = medicine_num.get(idLong);
                        medicine_num.put(idLong, num + tempNum);
                        break;
                    }
                    sign++;
                }
                if (sign >= car.size()) {
                    car.add(medicine);
                    medicine_num.put(idLong, num);
                }
            }
            //car.add(medicine);
            /*map<long,Integer>便于在前端取值*/
            session.setAttribute("cars", car);
            session.setAttribute("medicine_num", medicine_num);
            PrintWriter out = response.getWriter();

            out.print("<script>alert('添加成功!');window.history.back();</script>");
//         response.sendRedirect(request.getContextPath() + "/medicines.jsp");


        }
        if ("/deleteCar".equals(pathInfo)){
            int medicineId = Integer.parseInt(request.getParameter("mid"));
          Medicine medicine=  medicineService.findByMid(medicineId);
//        session.getAttribute("cars");
        car.remove(medicine);
        response.sendRedirect(request.getContextPath()+"/car.jsp");
        }
        if("/pay".equals(pathInfo)) {//结算请求
            String[] mids=request.getParameterValues("mid");
            List<Integer> ids=new ArrayList<>();
            for(String str:mids){
                int mid=Integer.parseInt(str);
                ids.add(mid);
                for(Medicine medicine:car){
                    if(medicine.getId()==mid){
                        car.remove(medicine);
                        break;
                    }
                }
            }
            double totalPrice=Double.parseDouble(request.getParameter("totalPriceSubmit"));
            String[] num=request.getParameter("medicines_num").split(",");
            Map<Integer,Integer> medicines_num=new HashMap<>();
            for(String str:num){
                int key=Integer.parseInt(str.split("/")[0]);
                int value=Integer.parseInt(str.split("/")[1]);
                medicines_num.put(key,value);
            }
            User user=(User) session.getAttribute("CurrUser");
            Date now=new Date();
            String otime= TimeUtil.dateToString(now,"yyyy-MM-dd hh:mm:ss");
            String oid=TimeUtil.dateToString(now,"yyyyMMddHHmmSS");
            Random random=new Random();
            for(int i=0;i<3;i++)
                oid+=random.nextInt(10);
            Order orders=new Order(0,oid,user.getId(),totalPrice,otime);
            ordersService.addOrder(orders,ids,medicines_num);

            List<Order> currOrders=ordersService.findAll();
            session.setAttribute("currOrders",currOrders);

//            response.sendRedirect(request.getContextPath()+"/orders.jsp");
            response.sendRedirect(request.getContextPath()+"/send.jsp");
        }
        if ("/medicineDetail".equals(pathInfo)){
            int mid=Integer.parseInt(request.getParameter("mid"));
            Medicine medicine=medicineService.findByMid(mid);
            session.setAttribute("currMedicine",medicine);
            response.sendRedirect(request.getContextPath()+"/medicineDetail.jsp");
        }

    }
}