<%@ page import="java.math.BigDecimal" %>
<%@ page import="com.it.zyx.entity.Medicine" %><%--
  Created by IntelliJ IDEA.
  User: 17578
  Date: 2020/7/17
  Time: 21:13
  To change this template use File | Settings | File Templates.
--%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
         pageEncoding="UTF-8" isELIgnored="false" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>

<%@ taglib uri="http://java.sun.com/jsp/jstl/fmt" prefix="fmt" %>
<html>
<head>
    <title>购物车</title>
    <style>
        table {
            border-collapse: collapse;
            width: 80%;
            margin-left: 10%;
            margin-top: 10px;
            text-align: center;

        }
        /*mytable{*/
        /*    width:80%;*/
        /*    border :0;*/
        /*    cellspacing :0;*/
        /*    cellpadding :0;*/
        /*    table-layout: fixed;*/

        /*}*/

        table, tr, th, td {
                border:1px #1CBAB4 solid;
            }

        /*th,td{*/
        /*    width: 20%;*/
        /*}*/
        .btn {
            width: 100px;
            height: 30px;
            background-color: red;
            border: 1px red solid;
            outline: none;
            color: white;
        }

        .gw_num {
            border: 1px solid #dbdbdb;
            width: 110px;
            line-height: 35px;
            overflow: hidden;
            align-items: center;
            float: left;
            margin-left: 30px;
        }

        .gw_num em {
            display: block;
            height: 35px;
            width: 31px;
            float: left;
            color: #7A7979;
            border-right: 1px solid #dbdbdb;
            text-align: center;
            cursor: pointer;
            font-style: normal;
        }

        .gw_num .num {
            display: block;
            float: left;
            text-align: center;
            width: 42px;
            font-style: normal;
            font-size: 14px;
            line-height: 35px;
            border: 0;
        }

        .gw_num em.add {
            float: right;
            /*border-right: 0;*/
            /*border-left: 1px solid #dbdbdb;*/
            display:inline-block;
            background-color: #F0F0F0;
            color: #000;
            font-size: 15px;
            font-weight:bold;
            outline: none;
            width: 33px;
            height: 36px;
            line-height:30px;
            text-decoration: none;
        }
        .gw_num em.jian {
            float: left;
            /*border-right: 0;*/
            /*border-left: 1px solid #dbdbdb;*/
            display:inline-block;
            background-color: #F0F0F0;
            color: #000;
            font-size: 15px;
            font-weight:bold;
            outline: none;
            width: 33px;
            height: 36px;
            line-height:30px;
            text-decoration: none;
        }
        .gw_num em.jian:hover{
            background-color:red;
            color: #1CBAB4;
        }
        .gw_num em.add:hover{
            background-color:red;
            color: #1CBAB4;
        }
        .mytable tr td {
            /* for IE */
            text-overflow: ellipsis;
            /* for Firefox,mozilla */
            -moz-text-overflow: ellipsis;
            overflow: hidden;
            white-space: nowrap;
            text-align: center;
        }
         .delete{
            display:inline-block;
            background-color: #F0F0F0;
            color: #000;
            font-size: 12px;
            font-weight:bold;
            outline: none;
            width: 70px;
            height: 30px;
            line-height:30px;
            text-decoration: none;
        }
        .delete:hover {
            background-color:#1CBAB4;
            color: white;
        }

    </style>

    <script src="https://apps.bdimg.com/libs/jquery/2.1.4/jquery.min.js"></script>
    <script>
        $(function () {

            $("input[name='mid']").click(function () {
                if ($(this).prop("checked")) {
                    var price = $(this).parent().next().next().next().children().text();

                    var totalPrice = parseFloat($("#totalPrice").text()) + parseFloat(price);

                    $("#totalPrice").text(totalPrice);
                } else {/*取消选中*/
                    var price = $(this).parent().next().next().next().children().text();
                    var totalPrice = parseFloat($("#totalPrice").text()) - parseFloat(price);
                    if (totalPrice<0){
                        $("#totalPrice").text(0);
                    } else {
                        $("#totalPrice").text(totalPrice);
                    }
                }
                if ($("input[name='mid']:checked").length == $("input[name='mid']").length) {
                    $("#checkedAll").prop("checked", true);
                } else {
                    $("#checkedAll").prop("checked", false);
                }
                if ($("input[name='mid']:checked").length === 0){
                    var totalPrice=0;
                    $("#totalPrice").text(totalPrice);
                }
            });

            $("#checkedAll").click(function () {
                $("input[name='mid']").prop("checked", $(this).prop("checked"));
                if ($(this).prop("checked")) {
                    var price = 0;
                    $(".price").each(function () {
                        price = price + (parseFloat($(this).text()));
                    });
                    $("#totalPrice").text(price);
                } else {

                    $("#totalPrice").text(0);
                }
            });


            $(".jian").click(function () {
                /*修改数量*/
                var num = parseInt($(this).next().next().val());
                var singlePrice = $(this).parent().parent().prev().val();
                //更新总价
                if  ($(this).parent().parent().parent().children().children().prop("checked")&&num>1) {
                    var totalPrice = parseFloat($("#totalPrice").text()) - parseFloat(singlePrice);
                    if (totalPrice<0){
                        $("#totalPrice").text(0);
                    } else {
                        $("#totalPrice").text(totalPrice);
                    }



                }
                if (num > 1) {
                    num = num - 1;
                }
                $(this).next().next().val(num);
                /*alert("num:"+num+"pri"+singlePrice);*/
                /*修改价格*/

                var price = num * parseFloat(singlePrice);
                $(this).parent().parent().prev().prev().children().text(price);

            });

            $(".add").click(function () {
                var num = parseInt($(this).prev().val());
                var singlePrice = $(this).parent().parent().prev().val();
                //更新总价
                if  ($(this).parent().parent().parent().children().children().prop("checked")) {
                    var totalPrice = parseFloat($("#totalPrice").text()) + parseFloat(singlePrice);
                    $("#totalPrice").text(totalPrice);
                }
                num = num + 1;
                $(this).prev().val(num);


                var price =num * parseFloat(singlePrice);
                $(this).parent().parent().prev().prev().children().text(price);


            });

            $(".price").text(function () {
                var singlePrice = parseFloat($(this).parent().next().val());
                var num = parseInt($(this).parent().next().next().children().children().next().next().val());
                /*alert("singlePrice"+singlePrice+";num"+num);*/
                $(this).text(singlePrice * num);
            });

            //



        });

        function checkForm() {
            var totalPrice = $("#totalPrice").text();
            if (totalPrice == 0) {
                alert("你还没有选择哦！")
                return false;
            } else {
                $("#hiddenToPrice").val(totalPrice);
                var medicines_num = "";
                $("input[name='mid']:checked").each(function () {
                    var num = $(this).parent().next().next().next().next().next().children().children().next().next().val();
                    var temp = $(this).val() + "/" + num;
                    medicines_num = medicines_num + temp + ",";
                });
                //alert("结算成功:"+medicines_num);
                $("#medicines_num").val(medicines_num);
                // alert("结算成功");
                return true;
            }

        }
    </script>
</head>
<body>
<form action="medicine/pay" method="post" onsubmit="return checkForm()">
    <table width='100%' border='0' cellspacing='0' cellpadding='0' class='mytable' style='table-layout: fixed'>

        <tr>
            <th style="background-color: #1CBAB4"><input type="checkbox" id="checkedAll" style="width: 22%">全选</th>
            <th style="width:20%;background-color: #1CBAB4">商品名</th>
            <th style="width: 30%;background-color: #1CBAB4">商品详情</th>
            <th style="width: 10%;background-color: #1CBAB4">价格</th>
            <th style="width: 18%;background-color: #1CBAB4">数量</th>
            <th style="width: 10%;background-color: #1CBAB4">操作</th>


        </tr>

        <c:forEach items="${cars}" var="medicine">
            <tr>
                <td><input type="checkbox" name="mid" value="${medicine.id}"></td>
                <td>${medicine.name}</td>
                <td><div  title="${medicine.remark}" style="font-size: 12px">${medicine.remark}</div></td>
                <td><span class="price"></span></td>
                <input type="hidden" value="${medicine.price}" class="singlePrice">
                <td>
                    <div class="gw_num">
                        <em class="jian">-</em>
                        <input type="hidden" value="${medicine.id}" id="temp_mid">

                        <c:forEach items="${medicine_num}" var="item">
                            <c:if test="${item.key==medicine.id}">
                                <input type="text" value="${item.value}" class="num"/>
                            </c:if>
                        </c:forEach>
                        <em class="add">+</em>
                    </div>
                </td>
                <td><a href="medicine/deleteCar?mid=${medicine.id}" class="delete">删除</a></td>
            </tr>
        </c:forEach>
        <tr>
            <td>总价:<span id="totalPrice">0</span></td>
            <td colspan="5">
                <input type="hidden" id="hiddenToPrice" name="totalPriceSubmit">
                <input type="hidden" id="medicines_num" name="medicines_num">
                <input type="submit" class="btn" value="结算">
            </td>
        </tr>
    </table>
</form>
</body>
</html>
