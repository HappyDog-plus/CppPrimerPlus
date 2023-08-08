/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 13:48:22
 * @LastEditTime: 2023-08-08 13:59:43
 * @FilePath: \CppPrimerPlus\Chapter10\10.4\usestock2.cpp
 * @Description: Use the refined class Stock.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#include <iostream>
#include "stock10.h"

int main()
{
    {
        using std::cout;
        cout << "Using constructors to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        Stock stock2 = Stock ("Boffo Objects", 2, 2.0);
        stock2.show();

        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout << "Using a constructor to reset an object\n";
        stock1 = Stock("Niffy Foods", 10, 50.0); // create a temp object, after assign its value to stock1, it well be destructed.
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }
    return 0;
}
