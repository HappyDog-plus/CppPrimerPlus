/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 15:06:58
 * @LastEditTime: 2023-08-08 15:26:54
 * @FilePath: \Chapter11\11.1_11.2_11.3\mytime0.h
 * @Description: Time class before operator overloading.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#ifndef MYTIME0_H_
#define MYTIME0_H_

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
    Time Sum(const Time & t) const;
    void Show() const;
};

#endif
