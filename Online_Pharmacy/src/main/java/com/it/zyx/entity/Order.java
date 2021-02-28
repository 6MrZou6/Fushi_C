package com.it.zyx.entity;

public class Order {
    private int id;
    private String oid;
    private int uid;
    private double price;
    private String otime;

    public Order() {
    }

    public Order(int id, String oid, int uid, double price, String otime) {
        this.id = id;
        this.oid = oid;
        this.uid = uid;
        this.price = price;
        this.otime = otime;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getOid() {
        return oid;
    }

    public void setOid(String oid) {
        this.oid = oid;
    }

    public int getUid() {
        return uid;
    }

    public void setUid(int uid) {
        this.uid = uid;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public String getOtime() {
        return otime;
    }

    public void setOtime(String otime) {
        this.otime = otime;
    }

    @Override
    public String toString() {
        return "Order{" +
                "id=" + id +
                ", oid='" + oid + '\'' +
                ", uid=" + uid +
                ", price=" + price +
                ", otime='" + otime + '\'' +
                '}';
    }
}
