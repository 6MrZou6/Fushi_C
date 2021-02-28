<%--
  Created by IntelliJ IDEA.
  User: 17578
  Date: 2020/7/20
  Time: 18:55
  To change this template use File | Settings | File Templates.
--%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
         pageEncoding="UTF-8" isELIgnored="false"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core"  prefix="c"%>
<html>
<head>
    <title>我的订单</title>
    <style>
        table{
            border-collapse: collapse;
            width: 80%;
            margin-left: 10%;
            margin-top: 10px;
            text-align: center;
        }
        table, tr, th, td {
            border:1px #1CBAB4 solid;
        }
        th,td{
            width: 25%;
            height: 50px;
        }
        a{
            text-decoration: none;
            color: black;

        }
        a:hover{
            color: red;
        }
    </style>


</head>
<body>
<form action="" method="post" >
    <table>
        <tr>
            <th style="background-color: #1CBAB4">订单号</th>
            <th style="background-color: #1CBAB4">价格</th>
            <th style="background-color: #1CBAB4">下单时间</th>

        </tr>
        <c:forEach items="${currOrders}" var="order">
            <tr>
                <td><a href="order/orderdetail?currOid=${order.id}" target="main">${order.oid}</a></td>
                <td class="singlePrice">${order.price}</td>
                <td>${order.otime}</td>
            </tr>
        </c:forEach>

    </table>
</form>
</body>
</html>

