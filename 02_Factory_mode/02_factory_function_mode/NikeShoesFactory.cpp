#include "NikeShoesFactory.h"
#include "../Shoes/NikeShoes.h"

Shoes* NikeShoesFactory::CreateShoes() {
    return new NikeShoes();
}