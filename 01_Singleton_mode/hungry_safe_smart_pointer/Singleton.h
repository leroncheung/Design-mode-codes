/**
 * @file Singleton.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>

class Singleton {
public:
    static std::shared_ptr<Singleton> getInstance();
    void func();
    Singleton() = default;
    ~Singleton() = default;

private:
    Singleton(const Singleton &singleton) = delete;
    Singleton &operator=(const Singleton &singleton) = delete;
    Singleton(Singleton &&singleton) = delete;
    Singleton &operator=(Singleton &&singleton) = delete;

    static std::shared_ptr<Singleton> m_instance;
};

#endif // _SINGLETON_H_