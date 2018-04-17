//
// Created by Admin on 4/17/2018.
//

#ifndef CLASS_V1_1_SINHVIEN_H
#define CLASS_V1_1_SINHVIEN_H

#include <iostream>

class sinhvien {
private:
    int score;
public:
    char name[20];
    int masv;
    sinhvien(char x[],int y);
    sinhvien(char x[]);
    sinhvien(int y);
    int diem(sinhvien a);
    friend int diem(void);
    std::ostream& operator<<(std::ostream& cout,sinhvien a)
    friend std::ostream& operator<<(std::ostream& cout,sinhvien a);
};


#endif //CLASS_V1_1_SINHVIEN_H
