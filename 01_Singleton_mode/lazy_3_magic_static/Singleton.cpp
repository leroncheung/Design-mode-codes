#include "Singleton.h"

Singleton &Singleton::GetInstance()
{
    static Singleton instance; // 静态局部变量，不用指针的原因是避免被用户提前delete
    return instance;
}

void Singleton::func()
{
    std::cout << "hello func()" << std::endl;
}

int main()
{
    Singleton::GetInstance().func();

    return 0;
}