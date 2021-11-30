/**
 * @file NikeFactory.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "NikeFactory.h"
#include "../Clothes/NikeClothe.h"
#include "../Shoes/NikeShoes.h"

inline Clothe* NikeFactory::CreateClothe() {
    return new NikeClothe();
}

inline Shoes* NikeFactory::CreateShoes() {
    return new NikeShoes();
}