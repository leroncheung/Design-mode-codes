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

// 静态成员变量要在类内声明，类外定义
// Singleton *Singleton::m_instance = new (std::nothrow) Singleton();
Singleton *Singleton::m_instance = new Singleton();

Singleton* Singleton::getInstance() {
    return m_instance;
}

void Singleton::deleteInstance() {
    if (m_instance != nullptr) {
        delete m_instance;
        m_instance = nullptr;
    }
}

inline void Singleton::func() const {
    std::cout << "hello func()" << std::endl;
}

int main() {
    // Singleton::getInstance()->func();
    auto instance_ptr = Singleton::getInstance();
    if (instance_ptr == nullptr) {
        std::cout << "NULL" << std::endl;
    }
    
    Singleton::deleteInstance();

    return 0;
}