/**
 * @file Singleton.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _SINGLETON_H_
#define _SINGLETON_H_

class Singleton
{
public:
    static Singleton &GetInstance(); // 引用返回

    void func() const;

private:
    Singleton() = default;
    ~Singleton() = default;
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;
};

#endif