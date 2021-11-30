/**
 * @file AdidasShoesFactory.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "AdidasShoesFactory.h"
#include "../Shoes/AdidasShoes.h"

inline Shoes* AdidasShoesFactory::CreateShoes() {
    return new AdidasShoes();
}