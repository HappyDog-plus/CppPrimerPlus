/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 10:36:42
 * @LastEditTime: 2023-08-08 13:28:25
 * @FilePath: \CppPrimerPlus\Chapter10\10.1_10.2_10.3\stock00.h
 * @Description: Stock class head file. (statements of member variables and member functions)
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#ifndef STOCK00_H_
#define STOCK00_H_

#include<string>


class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    /**
     * @description: 
     * @param {string &} co company name
     * @param {long} n share amount
     * @param {double} pr price
     * @return {*} 
     */    
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
}; 

#endif