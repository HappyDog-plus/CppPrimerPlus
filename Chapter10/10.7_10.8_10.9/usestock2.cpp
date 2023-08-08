/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 14:12:34
 * @LastEditTime: 2023-08-08 14:23:06
 * @FilePath: \CppPrimerPlus\Chapter10\10.7\usestock2.cpp
 * @Description: Use class Stock20, introduce objects array.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#include <iostream>
#include "stock20.h"

const int STKS = 4;

int main()
{
    //create an array of initialized objects.
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };

    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
        stocks[st].show();
    // set pointer to the first element.
    const Stock * top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &(top->topval(stocks[st]));// Note: the difference between address and reference.
    std::cout << "\nMost valuable holding:\n";
    top->show();
    return 0;
}
