/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 14:00:38
 * @LastEditTime: 2023-08-08 14:14:11
 * @FilePath: \CppPrimerPlus\Chapter10\10.7\stock20.h
 * @Description: Add a member function to compare two objects.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

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
    void show() const; // const means this function will not modify any member variables of this pointer.
    /**
     * @description: this function use const reference as input parameter, and implicitly use this pointer
     * as an input parameter, the return value be set as a const reference.
     * @param {Stock &} s the same class object used to compare
     * @return {*}
     */    
    const Stock & topval(const Stock & s) const;
}; 

#endif
