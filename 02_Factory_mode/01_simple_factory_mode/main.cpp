#include "Factory.h"

int main()
{
    Factory factory;
    Shoes *p_nike_shoes = factory.CreateProduct(NIKE_SHOES);
    if (p_nike_shoes != nullptr)
    {
        p_nike_shoes->Show();
        delete p_nike_shoes;
        p_nike_shoes = nullptr;
    }

    return 0;
}