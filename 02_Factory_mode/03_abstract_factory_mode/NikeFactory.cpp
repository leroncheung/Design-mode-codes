#include "NikeFactory.h"
#include "../Clothes/NikeClothe.h"
#include "../Shoes/NikeShoes.h"

Clothe* NikeFactory::CreateClothe() {
    return new NikeClothe();
}

Shoes* NikeFactory::CreateShoes() {
    return new NikeShoes();
}