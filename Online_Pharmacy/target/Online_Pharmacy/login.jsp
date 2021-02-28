<%@ page language="java" contentType="text/html; charset=UTF-8"
         pageEncoding="UTF-8" isELIgnored="false"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core"  prefix="c"%>
<%--
  Created by IntelliJ IDEA.
  User: 17578
  Date: 2020/7/16
  Time: 19:18
  To change this template use File | Settings | File Templates.
--%>

<html>
<head>
    <title>Title</title>
    <style>
        *{
            margin:0;
            padding:0;
        }
        div{
            width: 50%;
            margin-left: 25%;
            height: 200px;
            padding-top: 100px;
            /*border:1px #ccc solid;*/
            margin-top: 150px;
            text-align: center;
        }
        input{
            width: 200px;
            height: 30px;
            margin-top: 10px;
        }
        .btn{
            background-color: #1CBAB4;
            color: white;
            font-size: 16px;
            outline: none;
            border: 1px  #1CBAB4 solid;
        }
        body{
          background-image: url(images/bg.png);
background-size: 100% 100%;
        }
        .hover{
            width: 50px;
            height: 10px;
            margin-left: 10px;
       margin-top: 1%;
        }
/*.hover img{*/
/*    width: 100%;*/
/*    height: 100%;*/
/*}*/


    </style>
</head>
<body>
<div class="hover">
    <img src="images/bgloginhover.png">
</div>
<div>
    <c:if test="${param.info==1}">
        <span style="color:red;font-size:14px">账号密码错误</span>
    </c:if>
    <c:if test="${param.info==2}">
        <span style="color:red;font-size:14px">请先登录</span>
    </c:if>
    <form action="login/login" method="post">
        <!-- alt +/  默认代码提示快捷键   -->
        <input type="text" name="username" placeholder="账号"/><br/>

        <input type="password" name="password" placeholder="密码"/><br/>
        <input type="submit" value="登录" class="btn"/>
    </form>
    <a href="medicine/index">游客登录</a>
</div>
</body>
</html>
