/**
 * @file Singleton.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Singleton.h"
#include <iostream>

// 初始化静态成员变量
Singleton *Singleton::instance = nullptr;

Singleton *Singleton::GetInstance()
{
    if (instance == nullptr)
    {
        // 正常new失败时会抛出bad_alloc类型异常，使用nothrow后，如果分配内存失败，返回nullptr指针
        instance = new (std::nothrow) Singleton; // 线程不安全，可能多个线程同时进入
    }
    return instance;
}

void Singleton::DeleteInstance()
{
    if (instance != nullptr)
    {
        delete instance;
        instance = nullptr;
        std::cout << "delete instance" << std::endl;
    }
}

inline void Singleton::func() const
{
    std::cout << "hello func()" << std::endl;
}

int main()
{
    Singleton::GetInstance()->func();
    Singleton::DeleteInstance();

    return 0;
}