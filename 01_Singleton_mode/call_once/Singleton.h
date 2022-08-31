/**
 * @file Singleton.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2022-08-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>
#include <memory>
#include <mutex>

class Singleton {
public:
    static Singleton *getInstance();

    static void deleteInstance();

    void func();

private:
    Singleton() = default;
    ~Singleton() = default;
    Singleton(const Singleton &singleton) = delete;
    Singleton &operator=(const Singleton &singleton) = delete;

    static Singleton *m_instance_ptr;
};

#endif // _SINGLETON_H_