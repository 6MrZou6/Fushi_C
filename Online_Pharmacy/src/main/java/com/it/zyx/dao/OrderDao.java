package com.it.zyx.dao;

import com.it.zyx.entity.Order;

import java.util.List;

public interface OrderDao {
    int insertOrder(Order order);

    List<Order> selectOrdersByUser(int uid);

    List<Order> findAllOrders();

    Order findOrderById(int id);

    Order findOrderByOid(String oid);
}
