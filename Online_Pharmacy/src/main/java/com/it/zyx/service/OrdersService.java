package com.it.zyx.service;

import com.it.zyx.entity.Medicine;
import com.it.zyx.entity.Order;
import com.it.zyx.entity.OrderDetail;

import java.util.List;
import java.util.Map;

public interface OrdersService {
    /*Map<Integer,Integer> medicines_num是以medicine的id为key，数量为value的map*/
    void addOrder(Order order, List<Integer> mids, Map<Integer,Integer> medicines_num);
    List<Order> findAll();
    List<OrderDetail> findOrderDetailByOid(int oid);
    Order findOrderById(int id);
}

