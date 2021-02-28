package com.it.zyx.dao;

import com.it.zyx.entity.Medicine;
import com.it.zyx.entity.MedicineType;

import java.util.List;

public interface MedicineDao {
    List<MedicineType> findAllTypes();

    List<Medicine> findAllMedicine();

    List<Medicine> findMedicineByTypes(int typeId);

    List<Medicine> findMedicineByMname(String word);

    Medicine findMedicineByMid(int medicineId);
}
