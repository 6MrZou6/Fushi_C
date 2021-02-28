<%--
  Created by IntelliJ IDEA.
  User: 17578
  Date: 2020/7/21
  Time: 08:25
  To change this template use File | Settings | File Templates.
--%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
         pageEncoding="UTF-8" isELIgnored="false"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core"  prefix="c"%>
<html>
<head>
    <title>药品详情</title>
    <style>
        .top{
            width: 70%;
            margin-left: 15%;
            height: 40%;
            margin-top: 10%;
            /*background: thistle;*/
        }
        .pic{
            width: 40%;
            height: 100%;
            margin-left: 10%;
            /*background: red;*/
            float: left;
        }
        img{
            width: 100%;
            height: 100%;
        }
        .right{
            width: 40%;
            height: 100%;
            /*background: lightskyblue;*/
            float: right;
            margin-right: 10%;
        }
        h2{
            margin-top: 10%;
            margin-left: 10%;
        }
        span{
            color: red;
            margin-left: 50px;
        }
        .bottom{
            width: 56%;
            margin-left: 22%;
            height: 45%;
            margin-top: 5%;
            /*background: mediumpurple;*/
        }
        .btns{
            width: 70%;
            margin-left: 15%;

            /*background: white;*/
        }
        input{
            background: red;
            color: white;
            outline: none;
            border: 1px red solid;
            margin-left: 30px;
            text-align: center;
            height: 50px;
            line-height: 50px;

        }
    </style>
</head>
<body>
<div class="top">
    <div class="pic">
        <img src="${currMedicine.picture}">
    </div>
    <div class="right">
        <h2>${currMedicine.name}</h2>
        <h2>价格：<span>${currMedicine.price}</span></h2>
    </div>
</div>
<div class="bottom">
    <p>${currMedicine.remark}</p>
    <%--<div class="btns">
        <input value="加入购物车">
        <input value="立即购买">
    </div>--%>
</div>
</body>
</html>