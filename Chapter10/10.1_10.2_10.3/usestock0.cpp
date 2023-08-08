/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 13:12:09
 * @LastEditTime: 2023-08-08 13:15:45
 * @FilePath: \CppPrimerPlus\Chapter10\usestock0.cpp
 * @Description: Test the Stock class.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#include <iostream>
#include "stock00.h"

int main()
{
    Stock fluffy_the_cat;
    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000, 40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(300000, 0.125);
    fluffy_the_cat.show();
    return 0;
}
