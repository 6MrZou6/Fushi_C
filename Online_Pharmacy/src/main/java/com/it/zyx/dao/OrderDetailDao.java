package com.it.zyx.dao;

import com.it.zyx.entity.OrderDetail;

import java.util.List;

public interface OrderDetailDao {
    int insertDetails(OrderDetail orderdetail);/*返回被影响的行数*/
    List<OrderDetail> findOrderDetailByOid(int oid);
}
