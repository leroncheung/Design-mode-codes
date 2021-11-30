/**
 * @file main.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

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