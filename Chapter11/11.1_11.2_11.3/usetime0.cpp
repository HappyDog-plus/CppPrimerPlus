/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 15:18:45
 * @LastEditTime: 2023-08-08 15:22:42
 * @FilePath: \CppPrimerPlus\chapter11\11.1_11.2_11.3\usetime0.cpp
 * @Description: Use the draft of the Time class.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#include <iostream>
#include "mytime0.h"

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(4, 55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;

    return 0;
}
