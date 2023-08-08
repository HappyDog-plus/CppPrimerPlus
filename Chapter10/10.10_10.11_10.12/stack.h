/*
 * @Author: JialeYang jialyang98@outlook.com
 * @Date: 2023-08-08 14:41:09
 * @LastEditTime: 2023-08-08 14:47:04
 * @FilePath: \CppPrimerPlus\Chapter10\10.10\stack.h
 * @Description: class stack head file. Abstract Data Type(ADT)
 * Copyright (c) 2023 by JialeYang, All Rights Reserved. 
 */

#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
    enum {Max = 10}; // constant specific to class
    Item items[Max]; // holds stack items
    int top;         // index for top stack item
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    /**
     * @description: Add item to stack
     * @param {Item &} item
     * @return {bool} success or fail
     */    
    bool push(const Item & item); 
    /**
     * @description: pop top into item.
     * @param {Item &} item
     * @return {bool}
     */    
    bool pop(Item & item);
};

#endif
