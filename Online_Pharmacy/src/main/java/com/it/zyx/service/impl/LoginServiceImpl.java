package com.it.zyx.service.impl;


import com.it.zyx.dao.UserDao;
import com.it.zyx.entity.User;
import com.it.zyx.service.LoginService;
import com.it.zyx.util.MyBatisUtil;

public class LoginServiceImpl implements LoginService {
    private UserDao userDao= MyBatisUtil.getSqlSession().getMapper(UserDao.class);
    @Override
    public User login(String username, String password) {
        return userDao.SelectUser(username,password);
    }
}
