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

Singleton *Singleton::m_instance = nullptr;
std::mutex Singleton::m_mutex;

Singleton *Singleton::getInstance()
{
    if (m_instance == nullptr)  // 双重判断，非最优解
    {
        std::unique_lock<std::mutex> lock(m_mutex); // 加锁
        if (m_instance == nullptr)
        {
            m_instance = new (std::nothrow) Singleton;
        }
    }
    return m_instance;
}

void Singleton::deleteInstance()
{
    std::unique_lock<std::mutex> lock(m_mutex); // 加锁
    if (m_instance != nullptr)
    {
        delete m_instance;
        m_instance = nullptr;
        std::cout << "Delete m_instance" << std::endl;
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