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

Singleton &Singleton::getInstance()
{
    static Singleton instance; // 静态局部变量，不用指针的原因是避免被用户提前delete，C++11标准确保线程安全
    return instance;
}

inline void Singleton::func() const
{
    std::cout << "hello func()" << std::endl;
}

int main()
{
    Singleton::getInstance().func();

    return 0;
}