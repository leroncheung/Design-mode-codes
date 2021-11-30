/**
 * @file Factory.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "../Shoes/Shoes.h"

enum SHOES_TYPE
{
    NIKE_SHOES,
    ADIDAS_SHOES
};

class Factory
{
public:
    Factory() = default;
    ~Factory() = default;
    Shoes *CreateProduct(SHOES_TYPE);
};

#endif