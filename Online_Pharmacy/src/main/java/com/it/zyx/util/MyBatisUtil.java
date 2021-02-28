package com.it.zyx.util;

import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;

import java.io.IOException;
import java.io.InputStream;


public class MyBatisUtil {
    /**
     *
     * @return SqlSessionFactory对象
     */
    public static SqlSessionFactory getSqlSessionFactory() {
        try {
            String resource="SqlMapConfig.xml";
            InputStream is=Resources.getResourceAsStream(resource);
            return new SqlSessionFactoryBuilder().build(is);
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        return null;
    }

    public static SqlSession getSqlSession() {
        //mybatis 默认事物自动提交关闭的，设置为true之后，自动提交生效（如果insert update  delete事物不提交，数据库中记录更新失败）
        return getSqlSessionFactory().openSession(true);
    }
}
