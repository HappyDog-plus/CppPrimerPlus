/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 14:07:21
 * @LastEditTime: 2023-08-08 14:11:41
 * @FilePath: \CppPrimerPlus\Chapter10\10.7\stock20.cpp
 * @Description: Member function's definition of class stock 20.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */


#include <iostream>
#include "stock20.h"

/**
 * @description: Default constructors
 * @return {*}
 */
Stock::Stock()
{
    std::cout << "Default constructors called\n";
    company = "No name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << "Constructor using " << co << " called\n";
    company = co;

    if (n < 0)
    {
        std::cout << "Numbers of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

/**
 * @description: Destructor function of Class Stock
 * @return {*}
 */
Stock::~Stock()
{
    std::cout << "Bye, " << company << "!\n";
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have!"
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

/**
 * @description: First, save the original cout format, after finish using another format, restore the original format.
 * @return {*}
 */
void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    // set format to *.***
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << " Shares: " << shares << '\n';
    cout << " Share Price: $" << share_val;
    //set format to *.**
    cout.precision(2);
    cout << " Total Worth: $" << total_val << '\n';

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}
