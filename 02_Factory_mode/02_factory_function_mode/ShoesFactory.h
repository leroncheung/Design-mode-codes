#include "../Shoes/Shoes.h"

#ifndef _SHOES_FACTORY_H_
#define _SHOES_FACTORY_H_

class ShoesFactory {
public:
    ShoesFactory() = default;
    virtual ~ShoesFactory() = default;
    virtual Shoes* CreateShoes() = 0;
};

#endif