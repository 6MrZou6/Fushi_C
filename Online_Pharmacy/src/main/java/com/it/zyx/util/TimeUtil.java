package com.it.zyx.util;


import com.it.zyx.entity.Medicine;

import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;


public class TimeUtil {
    public static String dateToString(Date date,String format){
        SimpleDateFormat simpleDateFormat=new SimpleDateFormat(format);
        return simpleDateFormat.format(date);
    }

    public static void main(String[] args) {
        /*String str=TimeUtil.dateToString(new Date(),"yyyy-MM-dd hh:mm:ss");
        System.out.println(str);*/

        List<Medicine> car=new ArrayList<>();
        Medicine medicine3=new Medicine();
        medicine3.setId(1);
        Medicine medicine1=new Medicine();
        medicine1.setId(2);
        Medicine medicine2=new Medicine();
        medicine2.setId(2);
        car.add(medicine3);
        car.add(medicine1);
        if(car.size()==0){
            car.add(medicine2);
        }
        else {
            int sign=0;/*标记car中是否有一致的*/
            for(Medicine medicine:car) {
                if(medicine.getId() == medicine2.getId()){
                    int tempNum=1;
                    break;
                }
                sign++;
            }
            if(sign>=car.size()){
                int temp=1;
            }
        }
    }
}
