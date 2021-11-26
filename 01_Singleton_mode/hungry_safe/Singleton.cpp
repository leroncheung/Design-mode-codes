#include "Singleton.h"

Singleton *Singleton::instance = new (std::nothrow) Singleton;

Singleton* Singleton::GetInstance() {
    return instance;
}

void Singleton::DeleteInstance() {
    if (instance != nullptr) {
        delete instance;
        instance = nullptr;
    }
}

void Singleton::func() {
    std::cout << "hello func()" << std::endl;
}

int main() {
    Singleton::GetInstance()->func();
    Singleton::DeleteInstance();

    return 0;
}