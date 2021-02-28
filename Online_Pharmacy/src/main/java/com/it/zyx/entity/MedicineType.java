package com.it.zyx.entity;

public class MedicineType {
    private int id;
    private String name;

    public MedicineType() {
    }

    public MedicineType(int id, String name) {
        this.id = id;
        this.name = name;
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

    @Override
    public String toString() {
        return "MedicineType{" +
                "id=" + id +
                ", name='" + name + '\'' +
                '}';
    }
}
