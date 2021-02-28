package com.it.zyx.entity;

public class Medicine {
private  int id;
private String name;
private float price;
private String picture;
private String remark;
private  int type_id;

    public Medicine() {
    }

    public Medicine(int id, String name, float price, String picture, String remark, int type_id) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.picture = picture;
        this.remark = remark;
        this.type_id = type_id;
    }
    public Medicine(int id, String name, float price, String picture, int type_id) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.picture = picture;
        this.type_id = type_id;
    }
    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public float getPrice() {
        return price;
    }

    public void setPrice(float price) {
        this.price = price;
    }

    public String getPicture() {
        return picture;
    }

    public void setPicture(String picture) {
        this.picture = picture;
    }

    public String getRemark() {
        return remark;
    }

    public void setRemark(String remark) {
        this.remark = remark;
    }

    public int getType_id() {
        return type_id;
    }

    public void setType_id(int type_id) {
        this.type_id = type_id;
    }

    @Override
    public String toString() {
        return "Medicine{" +
                "id=" + id +
                ", name='" + name + '\'' +
                ", price=" + price +
                ", picture='" + picture + '\'' +
                ", remark='" + remark + '\'' +
                ", type_id=" + type_id +
                '}';
    }
}
