/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 16:09:27
 * @LastEditTime: 2023-08-08 16:15:59
 * @FilePath: \Chapter11\11.10_11.11_11.12\mytime3.h
 * @Description: Time class with friends.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#ifndef MYTIME3_H_
#define MYTIME3_H_

#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0, int m=0);
    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(double n) const;
    friend Time operator*(double m, const Time & t) { return t * m; }
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif
