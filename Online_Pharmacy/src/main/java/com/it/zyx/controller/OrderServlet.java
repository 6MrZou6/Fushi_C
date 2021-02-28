package com.it.zyx.controller;

import com.it.zyx.entity.Medicine;
import com.it.zyx.entity.MedicineTemp;
import com.it.zyx.entity.Order;
import com.it.zyx.entity.OrderDetail;
import com.it.zyx.service.MedicineService;
import com.it.zyx.service.OrdersService;
import com.it.zyx.service.impl.MedicineServiceImpl;
import com.it.zyx.service.impl.OrdersServiceImpl;
import com.it.zyx.util.MyBatisUtil;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

@WebServlet(name = "OrderServlet",urlPatterns = "/order/*")
public class OrderServlet extends HttpServlet {
    private OrdersService ordersService = new OrdersServiceImpl();
    private MedicineService medicineService=new MedicineServiceImpl();

    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        doGet(request, response);
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        HttpSession session=request.getSession();
        String pathInfo = request.getPathInfo();
        if ("/orderdetail".equals(pathInfo)) {
            int CurrOid = Integer.parseInt(request.getParameter("currOid"));
            List<OrderDetail> orderDetails = ordersService.findOrderDetailByOid(CurrOid);
            /*商品名，数量，价格，下单时间*/
            Order orders = ordersService.findOrderById(CurrOid);
            List<MedicineTemp> currOrderMedicines = new ArrayList<>();
            for (OrderDetail orderdetail : orderDetails) {
                Medicine medicine = medicineService.findByMid(orderdetail.getMid());
                MedicineTemp medicineTemp = new MedicineTemp(medicine.getName(), orderdetail.getNumber(),
                        orderdetail.getNumber() * medicine.getPrice(), orders.getOtime());
                currOrderMedicines.add(medicineTemp);
            }
            session.setAttribute("currOrderMedicines", currOrderMedicines);
            response.sendRedirect(request.getContextPath() + "/orderDetail.jsp");
        }
    }
}