#ifndef _SINGLETON_H_
#define _SINGLETON_H_

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

#endif