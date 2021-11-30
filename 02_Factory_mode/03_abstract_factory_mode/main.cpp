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

#include "NikeFactory.h"

int main() {
    // Nike Factory for both create shoes and clothes
    Factory *pNikeFactory = new NikeFactory();
    // Create nike clothes
    Clothe *pNikeClothe = pNikeFactory->CreateClothe();
    // Create nike shoes
    Shoes *pNikeShoes = pNikeFactory->CreateShoes();

    pNikeClothe->Show();
    pNikeShoes->Show();

    delete pNikeFactory;
    pNikeFactory = nullptr;
    delete pNikeClothe;
    pNikeClothe = nullptr;
    delete pNikeShoes;
    pNikeShoes = nullptr;

    return 0;
}