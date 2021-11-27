#include "Factory.h"

Shoes *Factory::CreateProduct(SHOES_TYPE shoes_type)
{
    switch (shoes_type)
    {
    case NIKE_SHOES:
        return new NikeShoes();
        break;
    case ADIDAS_SHOES:
        return new AdidasShoes();
        break;
    default:
        return nullptr;
        break;
    }
}