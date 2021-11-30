/**
 * @file NikeFactory.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _NIKE_FACTORY_H_
#define _NIKE_FACTORY_H_

#include "Factory.h"

class NikeFactory : public Factory {
public:
    NikeFactory() = default;
    ~NikeFactory() = default;
    Clothe *CreateClothe();
    Shoes *CreateShoes();
};

#endif