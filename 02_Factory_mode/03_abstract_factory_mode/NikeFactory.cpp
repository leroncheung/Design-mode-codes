#include "NikeFactory.h"
#include "../Clothes/NikeClothe.h"
#include "../Shoes/NikeShoes.h"

inline Clothe* NikeFactory::CreateClothe() {
    return new NikeClothe();
}

inline Shoes* NikeFactory::CreateShoes() {
    return new NikeShoes();
}