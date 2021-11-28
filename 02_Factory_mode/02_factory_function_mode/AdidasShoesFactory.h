#include "ShoesFactory.h"

#ifndef _ADIDAS_SHOES_FACTORY_H_
#define _ADIDAS_SHOES_FACTORY_H_

class AdidasShoesFactory : public ShoesFactory {
public:
    AdidasShoesFactory() = default;
    ~AdidasShoesFactory() = default;
    Shoes *CreateShoes();
};

#endif