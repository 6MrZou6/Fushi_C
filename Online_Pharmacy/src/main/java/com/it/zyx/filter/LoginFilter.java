package com.it.zyx.filter;

import javax.servlet.*;
import javax.servlet.annotation.WebFilter;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;
import java.io.PrintWriter;

/**
 * Servlet Filter implementation class LoginFilter
 * 拦截所有的/medicine/*请求
 */
@WebFilter(filterName="loginFilter",urlPatterns= {"/medicine/addCar"})
public class LoginFilter implements Filter {

    /**
     * Default constructor. 
     */
    public LoginFilter() {
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see Filter#destroy()
	 */
	public void destroy() {
		// TODO Auto-generated method stub
	}

	/**
	 * @see Filter#doFilter(ServletRequest, ServletResponse, FilterChain)
	 */
	public void doFilter(ServletRequest request, ServletResponse response, FilterChain chain) throws IOException, ServletException {
		// TODO Auto-generated method stub
		// place your code here
		HttpServletRequest req=(HttpServletRequest)request;
		HttpServletResponse resp=(HttpServletResponse)response;
		HttpSession session=req.getSession();
		Object user=session.getAttribute("CurrUser");
		if(user!=null) {
			// 已登录  放行
			chain.doFilter(request, response);


		}else {
			//未登录  跳转到登录页
//			resp.sendRedirect(req.getContextPath()+"/login.jsp");
			PrintWriter out= response.getWriter();
			out.print("<script>alert('请先登录！');top.location='../login.jsp?info=2'</script>");
		}
		
	}

	/**
	 * @see Filter#init(FilterConfig)
	 */
	public void init(FilterConfig fConfig) throws ServletException {
		// TODO Auto-generated method stub
	}

}
