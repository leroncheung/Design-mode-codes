#include <iostream>

class Singleton
{
public:
    static Singleton &GetInstance(); // 引用返回

    void func();

private:
    Singleton() = default;
    ~Singleton() = default;
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;
};