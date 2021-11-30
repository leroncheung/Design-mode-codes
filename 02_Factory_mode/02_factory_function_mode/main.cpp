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

#include "NikeShoesFactory.h"
#include "../Shoes/NikeShoes.h"
#include "AdidasShoesFactory.h"
#include "../Shoes/AdidasShoes.h"

int main() {
    // procedures of Nike Shoes produced
    ShoesFactory *pNikeShoesFactory = new NikeShoesFactory();
    Shoes *pNikeShoes = pNikeShoesFactory->CreateShoes();
    pNikeShoes->Show();
    delete pNikeShoesFactory;
    pNikeShoesFactory = nullptr;
    delete pNikeShoes;
    pNikeShoes = nullptr;

    // procedures of Adidas Shoes produced
    ShoesFactory *pAdidasShoesFactory = new AdidasShoesFactory();
    Shoes *pAdidasShoes = pAdidasShoesFactory->CreateShoes();
    pAdidasShoes->Show();
    delete pAdidasShoesFactory;
    pAdidasShoesFactory = nullptr;
    delete pAdidasShoes;
    pAdidasShoes = nullptr;

    return 0;
}