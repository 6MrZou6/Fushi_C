package com.it.zyx.service;

import com.it.zyx.entity.Medicine;
import com.it.zyx.entity.MedicineType;

import java.util.List;

public interface MedicineService {
    //查询所有药品分类
    List<MedicineType> findMedicineTypes();
    //查询所有药品
List<Medicine> findAll();

//根据药品类别查询所有药品
    List<Medicine> findMedicineByTypes(int tid);

    //根据关键字查询药品
    List<Medicine> findMedicineByMname(String word);

    Medicine findByMid(int medicineId);
}
