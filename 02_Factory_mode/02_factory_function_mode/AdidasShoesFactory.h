/**
 * @file AdidasShoesFactory.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ADIDAS_SHOES_FACTORY_H_
#define _ADIDAS_SHOES_FACTORY_H_

#include "ShoesFactory.h"

class AdidasShoesFactory : public ShoesFactory {
public:
    AdidasShoesFactory() = default;
    ~AdidasShoesFactory() = default;
    Shoes *CreateShoes();
};

#endif