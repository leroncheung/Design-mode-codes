#include "AdidasShoesFactory.h"
#include "../Shoes/AdidasShoes.h"

inline Shoes* AdidasShoesFactory::CreateShoes() {
    return new AdidasShoes();
}