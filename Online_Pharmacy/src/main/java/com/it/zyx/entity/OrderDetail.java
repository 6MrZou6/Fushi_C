package com.it.zyx.entity;

public class OrderDetail {
    private int id;
    private int oid;
    private int mid;
    private int number;

    public OrderDetail() {
    }

    public OrderDetail(int id, int oid, int mid, int number) {
        this.id = id;
        this.oid = oid;
        this.mid = mid;
        this.number = number;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public int getOid() {
        return oid;
    }

    public void setOid(int oid) {
        this.oid = oid;
    }

    public int getMid() {
        return mid;
    }

    public void setMid(int mid) {
        this.mid = mid;
    }

    public int getNumber() {
        return number;
    }

    public void setNumber(int number) {
        this.number = number;
    }

    @Override
    public String toString() {
        return "OrderDetail{" +
                "id=" + id +
                ", oid=" + oid +
                ", mid=" + mid +
                ", number=" + number +
                '}';
    }
}
