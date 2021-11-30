/**
 * @file NikeShoesFactory.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "NikeShoesFactory.h"
#include "../Shoes/NikeShoes.h"

inline Shoes* NikeShoesFactory::CreateShoes() {
    return new NikeShoes();
}