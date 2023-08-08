/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 15:25:50
 * @LastEditTime: 2023-08-08 15:27:13
 * @FilePath: \Chapter11\11.4_11.5_11.6\mytime1.h
 * @Description: Time class use operator overloading.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#ifndef MYTIME1_H_
#define MYTIME1_H_

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
    void Show() const;
};

#endif

