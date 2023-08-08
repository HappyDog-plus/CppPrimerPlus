/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 13:26:40
 * @LastEditTime: 2023-08-08 13:32:33
 * @FilePath: \CppPrimerPlus\Chapter10\10.4\stock10.h
 * @Description: An improved Class Stock, Add constructors function and destructors function
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#ifndef STOCK10_H_
#define STOCK10_H_
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
     * @description: Two constructors.
     */
    Stock(); // default constructor
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();      
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
}; 

#endif
