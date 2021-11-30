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

#include "../Clothes/Clothe.h"
#include "../Shoes/Shoes.h"

class Factory
{
public:
    Factory() = default;
    virtual ~Factory() = default;
    virtual Clothe *CreateClothe() = 0;
    virtual Shoes *CreateShoes() = 0;
};

#endif