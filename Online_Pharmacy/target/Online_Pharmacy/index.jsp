<%@ page language="java" contentType="text/html; charset=UTF-8"
         pageEncoding="UTF-8" isELIgnored="false"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core"  prefix="c"%>
<html>
<head>
   <title>Online_Pharmacy</title>
    <style>
        .top{
            width: 90%;
            margin-left: 5%;
            height: 15%;
        }
        .pic{
            width: 30%;
            height: 100%;
            float: left;
        }
        img{
            width: 100%;
            height: 100%;
        }
        .right{
            width: 70%;
            height: 100%;
            margin-left: 30%;
        }
        .search{
            width: 70%;
            margin-left: 15%;
            height: 50%;
            outline: none;

        }
        .search input{
            margin-top: 2%;
            /*border: 1px red solid;*/
        }
        .search_left{
            width: 300px;
            height: 40px;
        }
        .btn{
            width: 80px;
            height: 40px;
            outline: none;
            background-color: #1CBAB4;
            /*border: 1px red solid;*/
            margin-left: -5px;
        }
        .pages{
            width: 100%;
            height: 50%;
        }
        .pages ul{
            text-decoration: none;
            list-style-type: none;
            float: left;
        }
        .pages li{
            float: right;
            margin-left: 20px;
        }

        .pages li a{
            text-decoration: none;
            color: black;
            display: inline-block;
            text-align: center;
            line-height: 30px;
            width: 100px;
            height: 30px;
        }
        .pages li a:hover{
            background-color: #38B751;
            color: white;
        }
        .main_bottom{
            width: 100%;
            margin-left: 5%;
            height: 80%;
            /*background-color: lightskyblue;*/
        }
        .iframe1{
            width: 100%;
            height: 100%;
            border: none;
        }
        body{
            background-image: url(images/bg1.png);
        }

    </style>

</head>
<body>
<div class="top">
<%--    <div class="pic">--%>
<%--        <img src="images/logo.jpg"  alt="">--%>
<%--    </div>--%>
    <div class="right">
        <form action="medicine/findByMname" method="post">
            <div class="search">
                <input type="text" class="search_left" name="word" placeholder="请输入药品名">
                <input type="submit" class="btn" value="搜索">
            </div>
        </form>
        <div class="pages"><%--首页，订单，购物车等等--%>
            <ul>
                <li><a href="login/logout" >
                    <c:if test="${CurrUser==null}" >去登录</c:if>
                    <c:if test="${CurrUser!=null}" >退出登录</c:if>
                </a></li>
                <li><a target="main" href="orders.jsp">订单</a></li>
                <li><a target="main" href="car.jsp">购物车</a></li>
                <li><a href="medicine/index?CurrUser=#{CurrUser}">首页</a></li>
            </ul>
        </div>
    </div>
</div>
<div class="main_bottom">
    <iframe name="main" src="main.jsp" class="iframe1"></iframe>
</div>
</body>
</html>
