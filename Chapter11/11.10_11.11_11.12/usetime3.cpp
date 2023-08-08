/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 16:09:38
 * @LastEditTime: 2023-08-08 16:25:52
 * @FilePath: \Chapter11\11.10_11.11_11.12\usetime3.cpp
 * @Description: Use the fourth draft of Time class.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#include <iostream>
#include "mytime3.h"

int main()
{
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and Tosca: \n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
    return 0;
}
