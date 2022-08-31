/**
 * @file Singleton.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2022-08-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Singleton.h"

Singleton *Singleton::m_instance_ptr = nullptr;

Singleton* Singleton::getInstance() {
    std::once_flag flag;
    std::call_once(flag, [&]()
                   { m_instance_ptr = new (std::nothrow)Singleton(); });
    return m_instance_ptr;
}

void Singleton::deleteInstance() {
    if (m_instance_ptr != nullptr) {
        delete m_instance_ptr;
    }
    m_instance_ptr = nullptr;
}

void Singleton::func() {
    std::cout << "Singleton::func()" << std::endl;
}

int main() {
    Singleton::getInstance()->func();
    Singleton::deleteInstance();

    return 0;
}