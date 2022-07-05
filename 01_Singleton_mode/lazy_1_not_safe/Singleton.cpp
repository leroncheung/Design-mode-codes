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
Singleton *Singleton::m_instance = nullptr;

Singleton *Singleton::getInstance()
{
    if (m_instance == nullptr)
    {
        // 正常new失败时会抛出bad_alloc类型异常，使用nothrow后，如果分配内存失败，返回nullptr指针
        m_instance = new (std::nothrow) Singleton; // 线程不安全，可能多个线程同时进入
    }
    return m_instance;
}

void Singleton::deleteInstance()
{
    if (m_instance != nullptr)
    {
        delete m_instance;
        m_instance = nullptr;
        std::cout << "delete m_instance" << std::endl;
    }
}

inline void Singleton::func() const
{
    std::cout << "hello func()" << std::endl;
}

int main()
{
    Singleton::getInstance()->func();
    Singleton::deleteInstance();

    return 0;
}