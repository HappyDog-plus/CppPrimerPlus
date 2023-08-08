/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 15:11:06
 * @LastEditTime: 2023-08-08 15:21:13
 * @FilePath: \CppPrimerPlus\chapter11\11.1_11.2_11.3\mytime0.cpp
 * @Description: Implement Time methods.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#include <iostream>
#include "mytime0.h"

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

/**
 * @description: use sum as return, get a copied sum, which can be used by caller function.
 * @param {Time &} t
 * @return {Time}
 */
Time Time::Sum(const Time & t) const
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