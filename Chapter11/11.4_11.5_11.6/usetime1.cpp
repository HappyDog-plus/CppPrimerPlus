/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 15:31:23
 * @LastEditTime: 2023-08-08 15:47:26
 * @FilePath: \Chapter11\11.4_11.5_11.6\usetime1.cpp
 * @Description: Use the second draft of Time class.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#include <iostream>
#include "mytime1.h"

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;
    
    /**
     * @description: equal to coding.operator+(fixing);
     * @return {Time}
     */    
    total = coding + fixing;
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;
    
    /**
     * Here is a bug, when initializing a Time, we don't check if the minutes or hours is valid.
     */    
    Time morefixing(3, 68);
    cout << "morefixing time = ";
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);
    // function notation
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;
    
    return 0;
}
