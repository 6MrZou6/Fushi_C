package com.it.zyx.controller;

import com.it.zyx.entity.User;
import com.it.zyx.service.LoginService;
import com.it.zyx.service.impl.LoginServiceImpl;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;

@WebServlet(name = "LoginServlet", urlPatterns = "/login/*")
public class LoginServlet extends HttpServlet {
    private LoginService loginService = new LoginServiceImpl();


    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        doGet(request, response);
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        String pathInfo=request.getPathInfo();
       HttpSession session = request.getSession();
       if ("/login".equals(pathInfo)){
           String user = request.getParameter("username");
           String pwd = request.getParameter("password");
           User CurrUser = loginService.login(user, pwd);
           //登录成功,查询所有药品
           if (CurrUser!=null){
               session.setAttribute("CurrUser", CurrUser);
               response.sendRedirect(request.getContextPath()+"/medicine/index");
           }else{
               response.sendRedirect(request.getContextPath()+"/login.jsp?info=1");
           }
       }
       if ("/logout".equals(pathInfo)){
           session.invalidate();
           response.sendRedirect(request.getContextPath()+"/login.jsp");
       }

    }
}
