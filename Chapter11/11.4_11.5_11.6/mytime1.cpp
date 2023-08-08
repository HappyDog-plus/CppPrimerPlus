/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 15:28:22
 * @LastEditTime: 2023-08-08 15:31:04
 * @FilePath: \Chapter11\11.4_11.5_11.6\mytime1.cpp
 * @Description: Implement the operator overloading member function of mytime0.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */


#include <iostream>
#include "mytime1.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}