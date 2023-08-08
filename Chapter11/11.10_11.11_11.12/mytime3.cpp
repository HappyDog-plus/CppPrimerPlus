/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 16:09:32
 * @LastEditTime: 2023-08-08 16:20:56
 * @FilePath: \Chapter11\11.10_11.11_11.12\mytime3.cpp
 * @Description: Implement Time 3 class.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#include <iostream>
#include "mytime3.h"

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

Time Time::operator-(const Time & t) const
{
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}


Time Time::operator*(double mult) const
{
    Time result;
    long totalminutes = hours * mult * 60 + minutes * mult;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}


/**
 * @description: A friend function is not a member function of class Time, but it should be declared in
 * the class. Use friend function because it can handle the situation that this object in the right of 
 * the operator, like: cin >> this, cout << this...
 * @return {std::ostream} In order to use the returned value as the next << functions input.
 */
std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}