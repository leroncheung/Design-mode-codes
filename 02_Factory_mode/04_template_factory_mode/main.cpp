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

#include "ConcreteFactory.h"
#include "../Shoes/Shoes.h"
#include "../Shoes/NikeShoes.h"

int main() {
    ConcreteFactory<Shoes, NikeShoes> nikeShoesFactory;
    Shoes *pNikeShoes = nikeShoesFactory.CreateProduct();
    pNikeShoes->Show();
    delete pNikeShoes;
    pNikeShoes = nullptr;

    return 0;
}