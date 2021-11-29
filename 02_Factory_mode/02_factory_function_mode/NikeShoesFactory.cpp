#include "NikeShoesFactory.h"
#include "../Shoes/NikeShoes.h"

inline Shoes* NikeShoesFactory::CreateShoes() {
    return new NikeShoes();
}