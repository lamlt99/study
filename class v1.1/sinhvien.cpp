//
// Created by Admin on 4/17/2018.
//

#include "sinhvien.h"
sinhvien::sinhvien(char x[],int y){name=x;masv=y;}
sinhvien::sinhvien(char x[]){name=x;}
sinhvien::sinhvien(int y){masv=y;}
int diem(sinhvien a){ return a.score;}
std::ostream& operator<<(std::ostream& cout,sinhvien a)
{
    cout<<"Tên sinh viên: "<<name<< "\nĐiểm sinh viên: " <<a.score;
    return cout;
}

