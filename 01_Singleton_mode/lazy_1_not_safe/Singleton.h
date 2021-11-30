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

// 单例类：内部包含静态实例化对象，对外提供获取和删除该对象的静态函数
class Singleton
{
public:
    static Singleton *GetInstance();
    static void DeleteInstance();

    void func() const;

private:
    Singleton() = default;
    ~Singleton() = default;
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;

    static Singleton *instance;
};

#endif