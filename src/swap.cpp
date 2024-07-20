//
// Created by ztyer on 2024/6/14.
//
#include <iostream>
#include "swap.h"
using namespace std;
// 这是一个交换函数

void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
    cout<<"交换完成"<<endl;
}