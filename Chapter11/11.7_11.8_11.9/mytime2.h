/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 15:53:28
 * @LastEditTime: 2023-08-08 15:55:55
 * @FilePath: \Chapter11\11.7_11.8_11.9\mytime2.h
 * @Description: Time class after operator overloading.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#ifndef MYTIME2_H_
#define MYTIME2_H_

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
    /**
     * @description: add two Time object
     * @param {Time &} t
     * @return {Time} return a new Time object.
     */    
    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(double n) const;
    void Show() const;
};

#endif
