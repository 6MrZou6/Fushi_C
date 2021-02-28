package com.it.zyx.service.impl;

import com.it.zyx.dao.MedicineDao;
import com.it.zyx.entity.Medicine;
import com.it.zyx.entity.MedicineType;
import com.it.zyx.service.MedicineService;
import com.it.zyx.util.MyBatisUtil;

import java.util.List;

public class MedicineServiceImpl implements MedicineService {
    MedicineDao medicineDao= MyBatisUtil.getSqlSession().getMapper(MedicineDao.class);

    @Override
    public List<MedicineType> findMedicineTypes() {
        return medicineDao.findAllTypes();
    }

    @Override
    public List<Medicine> findAll() {
        return medicineDao.findAllMedicine();
    }

    @Override
    public List<Medicine> findMedicineByTypes(int tid) {
        return medicineDao.findMedicineByTypes(tid);
    }

    @Override
    public List<Medicine> findMedicineByMname(String word) {
        return medicineDao.findMedicineByMname(word);
    }

    @Override
    public Medicine findByMid(int medicineId) {
        return medicineDao.findMedicineByMid(medicineId);
    }
}
