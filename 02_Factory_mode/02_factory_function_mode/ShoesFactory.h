/**
 * @file ShoesFactory.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _SHOES_FACTORY_H_
#define _SHOES_FACTORY_H_

#include "../Shoes/Shoes.h"

class ShoesFactory {
public:
    ShoesFactory() = default;
    virtual ~ShoesFactory() = default;
    virtual Shoes* CreateShoes() = 0;
};

#endif