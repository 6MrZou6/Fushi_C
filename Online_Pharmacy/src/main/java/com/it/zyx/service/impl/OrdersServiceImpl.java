package com.it.zyx.service.impl;

import com.it.zyx.dao.OrderDao;
import com.it.zyx.dao.OrderDetailDao;
import com.it.zyx.entity.Order;
import com.it.zyx.entity.OrderDetail;
import com.it.zyx.service.OrdersService;
import com.it.zyx.util.MyBatisUtil;

import java.util.List;
import java.util.Map;

public class OrdersServiceImpl implements OrdersService {
    private OrderDao orderDao= MyBatisUtil.getSqlSession().getMapper(OrderDao.class);
    private OrderDetailDao orderDetailDao= MyBatisUtil.getSqlSession().getMapper(OrderDetailDao.class);

    @Override
    public void addOrder(Order order, List<Integer> mids, Map<Integer, Integer> medicines_num) {
        orderDao.insertOrder(order);
        int oid=orderDao.findOrderByOid(order.getOid()).getId();
        for(int mid:mids){
            OrderDetail orderdetail=new OrderDetail(0,oid,mid,medicines_num.get(mid));
            orderDetailDao.insertDetails(orderdetail);
        }
    }

    @Override
    public List<Order> findAll() {
        return orderDao.findAllOrders();
    }

    @Override
    public List<OrderDetail> findOrderDetailByOid(int oid) {
        return orderDetailDao.findOrderDetailByOid(oid);
    }

    @Override
    public Order findOrderById(int id) {
        return orderDao.findOrderById(id);
    }
}
