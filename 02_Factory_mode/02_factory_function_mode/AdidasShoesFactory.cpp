#include "AdidasShoesFactory.h"
#include "../Shoes/AdidasShoes.h"

Shoes* AdidasShoesFactory::CreateShoes() {
    return new AdidasShoes();
}