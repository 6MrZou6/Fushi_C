package com.it.zyx.dao;

import com.it.zyx.entity.User;
import org.apache.ibatis.annotations.Param;

public interface UserDao {
//登录
    User SelectUser(@Param("user")String username, @Param("pwd")String password);
}
