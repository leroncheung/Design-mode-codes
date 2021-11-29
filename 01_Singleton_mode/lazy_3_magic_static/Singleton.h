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