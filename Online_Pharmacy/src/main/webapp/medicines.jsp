<%--
  Created by IntelliJ IDEA.
  User: 17578
  Date: 2020/7/17
  Time: 17:27
  To change this template use File | Settings | File Templates.
--%>

<%@ page language="java" contentType="text/html; charset=UTF-8"
         pageEncoding="UTF-8" isELIgnored="false"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core"  prefix="c"%>
<html>
<head>
    <title>medicines</title>
    <style>
        .medicine{
            width: 100%;
            height: 200px;
            margin-top: 10px;
        }
        .medicine img{
            width: 30%;
            height: 100%;
            float: left;
        }
        .medicine .content{
            width: 70%;
            height: 100%;
            margin-left: 30%;
            background-color: #8EE9E9;
        }
        h2{
            margin-left: 10%;
            padding-top: 5%;
        }
        .price{
            margin-left: 10%;
            color: red;
        }
        .medicine h2 a{
            text-decoration: none;
            color: black;
        }
        .medicine h2 a:hover{
            color: red;
        }
        .btn{
            display: inline-block;
            width: 100px;
            height: 35px;
            background-color: red;
            line-height: 35px;
            text-align: center;
        }
        .content a{
            text-decoration: none;
            color: white;
        }

        .gw_num{
            border: 1px solid #dbdbdb;
            width: 110px;
            line-height: 35px;
            overflow: hidden;
            align-items: center;
            float: left;
            margin-left: 100px;
        }
        .gw_num em{
            display: block;
            height: 35px;
            width: 31px;
            float: left;
            color: #7A7979;
            border-right: 1px solid #dbdbdb;
            text-align: center;
            cursor: pointer;
            font-style:normal;
        }
        .gw_num .num{
            display: block;
            float: left;
            text-align: center;
            width: 42px;
            font-style: normal;
            font-size: 14px;
            line-height: 35px;
            border: 0;
        }
        .gw_num em.add{
            float: right;
            border-right: 0;
            border-left: 1px solid #dbdbdb;
        }
        .right{
            margin-left: 320px;
        }
    </style>
    <script src="https://apps.bdimg.com/libs/jquery/2.1.4/jquery.min.js"></script>
    <script>
        $(function () {
            $(".jian").click(function () {
                var num=parseInt($(this).next().val());
                if(num>1){
                    num=num-1;
                }
                $(this).next().val(num);
            });

            $(".add").click(function () {
                var num=parseInt($(this).prev().val());
                num=num+1;
                $(this).prev().val(num);
            });

            $(".btn").click(function () {
                var id=$(this).prev().val();
                var num=$(this).parent().prev().children().next().val();

                $(this).attr("href","medicine/addCar?mid="+id+"&num="+num);

            });
        });
    </script>
</head>
<body>
<div>
    <c:forEach items="${CurrMedicines}" var="medicines">
        <div class="medicine">
         <a href="medicine/medicineDetail?mid=${medicines.id}" target="medicines">
             <img src="<c:url value="${medicines.picture}"></c:url> " alt="">
         </a>
            <div class="content">
                <h2><a href="medicine/medicineDetail?mid=${medicines.id}" target="medicines"><span>${medicines.name}</span></a></h2>
                <h2><span class="price">${medicines.price}</span>元/盒</h2>
                    <%--加减数量--%>
                <div class="gw_num">
                    <em class="jian">-</em>
                    <input type="text" value="1" class="num" />
                    <em class="add">+</em>
                </div>
                <div class="right">
                    <input type="hidden" value="${medicines.id}" id="temp_mid">
                    <a class="btn" >加入购物车</a>
                </div>
            </div>
        </div>
    </c:forEach>


</div>

</body>
</html>
