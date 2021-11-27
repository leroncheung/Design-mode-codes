#include "../Shoes/NikeShoes.h"
#include "../Shoes/AdidasShoes.h"

#ifndef _FACTORY_H_
#define _FACTORY_H_

enum SHOES_TYPE
{
    NIKE_SHOES,
    ADIDAS_SHOES
};

class Factory
{
public:
    Factory() = default;
    ~Factory() = default;
    Shoes *CreateProduct(SHOES_TYPE);
};

#endif