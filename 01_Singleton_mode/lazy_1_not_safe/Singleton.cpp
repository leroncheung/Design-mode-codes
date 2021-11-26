#include "Singleton.h"

// 初始化静态成员变量
Singleton *Singleton::instance = nullptr;

Singleton *Singleton::GetInstance()
{
    if (instance == nullptr)
    {
        instance = new (std::nothrow) Singleton; // 线程不安全，可能多个线程同时进入
    }
    return instance;
}

void Singleton::DeleteInstance()
{
    if (instance != nullptr)
    {
        delete instance;
        instance = nullptr;
        std::cout << "delete instance" << std::endl;
    }
}

void Singleton::func()
{
    std::cout << "hello func()" << std::endl;
}

int main()
{
    Singleton::GetInstance()->func();
    Singleton::DeleteInstance();

    return 0;
}