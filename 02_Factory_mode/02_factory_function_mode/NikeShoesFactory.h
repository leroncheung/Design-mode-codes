#include "ShoesFactory.h"

#ifndef _NIKE_SHOES_FACTORY_H_
#define _NIKE_SHOES_FACTORY_H_

class NikeShoesFactory : public ShoesFactory {
public:
    NikeShoesFactory() = default;
    ~NikeShoesFactory() = default;
    Shoes *CreateShoes();
};

#endif