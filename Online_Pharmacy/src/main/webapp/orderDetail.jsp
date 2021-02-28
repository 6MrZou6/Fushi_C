<%--
  Created by IntelliJ IDEA.
  User: 17578
  Date: 2020/7/20
  Time: 20:23
  To change this template use File | Settings | File Templates.
--%>

<%@ page language="java" contentType="text/html; charset=UTF-8"
         pageEncoding="UTF-8" isELIgnored="false"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core"  prefix="c"%>
<html>
<head>
    <title>订单详情</title>
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
    </style>


</head>
<body>
<form action="" method="post" >
    <table>
        <tr>
            <th style="background-color: #1CBAB4">商品名</th>
            <th style="background-color: #1CBAB4">数量</th>
            <th style="background-color: #1CBAB4">价格</th>
            <th style="background-color: #1CBAB4">下单时间</th>

        </tr>
        <c:forEach items="${currOrderMedicines}" var="medicine">
            <tr>
                <td>${medicine.name}</td>
                <td>${medicine.number}</td>
                <td>${medicine.price}</td>
                <td>${medicine.otime}</td>
            </tr>
        </c:forEach>

    </table>
</form>
</body>
</html>
