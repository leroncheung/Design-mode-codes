#include <iostream>

// 单例类：内部包含静态实例化对象，对外提供获取和删除该对象的静态函数
class Singleton
{
public:
    static Singleton *GetInstance();
    static void DeleteInstance();

    void func();

private:
    Singleton() = default;
    ~Singleton() = default;
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;

    static Singleton *instance;
};