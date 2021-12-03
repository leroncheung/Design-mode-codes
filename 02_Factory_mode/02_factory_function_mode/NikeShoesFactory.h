/**
 * @file NikeShoesFactory.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _NIKE_SHOES_FACTORY_H_
#define _NIKE_SHOES_FACTORY_H_

#include "ShoesFactory.h"

class NikeShoesFactory : public ShoesFactory {
public:
    NikeShoesFactory() = default;
    ~NikeShoesFactory() = default;
    Shoes *CreateShoes() override;
};

#endif