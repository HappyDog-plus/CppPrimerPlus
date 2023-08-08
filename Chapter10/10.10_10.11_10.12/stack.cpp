/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 14:47:15
 * @LastEditTime: 2023-08-08 14:50:37
 * @FilePath: \CppPrimerPlus\Chapter10\10.10\stack.cpp
 * @Description: Function definition of class stack.
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#include "stack.h"

Stack::Stack()
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == Max;
}

bool Stack::push(const Item & item)
{
    if (top < Max)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}