#include "Singleton.h"

Singleton *Singleton::instance = nullptr;
std::mutex Singleton::mMutex;

Singleton *Singleton::GetInstance()
{
    if (instance == nullptr)
    {
        std::unique_lock<std::mutex> lock(mMutex); // 加锁
        if (instance == nullptr)
        {
            instance = new (std::nothrow) Singleton;
        }
    }
    return instance;
}

void Singleton::DeleteInstance()
{
    std::unique_lock<std::mutex> lock(mMutex); // 加锁
    if (instance != nullptr)
    {
        delete instance;
        instance = nullptr;
        std::cout << "Delete instance" << std::endl;
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