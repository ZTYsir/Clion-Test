//
// Created by ztyer on 2024/6/14.
//
#include<iostream>
#include "swap.h"
#include "add.h"

using namespace std;
int main(){
    int a=10;
    int b=20;
    swap(a,b);
    cout<<"a is:"<<a<<endl;
    cout<<"b is:"<<b<<endl;
    cout<<add(a,b)<<endl;
    return 0;
}