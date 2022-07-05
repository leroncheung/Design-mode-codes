/**
 * @file Singleton.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Singleton.h"

std::shared_ptr<Singleton> Singleton::m_instance = std::make_shared<Singleton>();

std::shared_ptr<Singleton> Singleton::getInstance() {
    return m_instance;
}

void Singleton::func() {
    std::cout << "func()" << std::endl;
}

int main() {
    Singleton::getInstance()->func();

    return 0;
}