<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%--
  Created by IntelliJ IDEA.
  User: 17578
  Date: 2020/7/17
  Time: 15:43
  To change this template use File | Settings | File Templates.
--%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
         pageEncoding="UTF-8" isELIgnored="false"%>
<html>
<head>
    <title>主页</title>
    <style>
        .classic{
            width: 20%;
            height: 100%;
            float: left;

        }
        ul{
            text-decoration: none;
            list-style-type: none;
            margin-left: -11%;
        }
        a{
            display: inline-block;
            width: 80%;
            margin-left: 10%;
            height: 50px;
            background-color: white;
            line-height: 50px;
            text-align: center;
            margin-top: 10px;
            color: black;
            text-decoration: none;
        }
        a:hover{
            background-color: #38B751 ;
            color: white;
        }

        .main{
            width: 70%;
            height: 100%;
            margin-left: 20%;
        }
        iframe{
            width: 100%;
            height: 100%;
            border: none;
        }

    </style>
</head>
<body>
<div class="classic">
    <ul>
        <c:forEach items="${medicineTypes}" var="type">
            <li><a href="medicine/findByTid?typeId=${type.id}" target="medicines"><span>${type.name}</span></a></li>
        </c:forEach>
    </ul>
</div>
<div class="main">
    <iframe src="medicines.jsp" name="medicines" ></iframe>

</div>
</body>
</html>
