package com.it.zyx.entity;

public class MedicineTemp {
    private String name;
    private int number;
    private double price;
    private String otime;

    public MedicineTemp() {
    }

    public MedicineTemp(String name, int number, double price, String otime) {
        this.name = name;
        this.number = number;
        this.price = price;
        this.otime = otime;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getNumber() {
        return number;
    }

    public void setNumber(int number) {
        this.number = number;
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
        return "MedicineTemp{" +
                "name='" + name + '\'' +
                ", number=" + number +
                ", price=" + price +
                ", otime='" + otime + '\'' +
                '}';
    }
}
