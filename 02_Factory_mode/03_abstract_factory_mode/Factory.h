#include "../Clothes/Clothe.h"
#include "../Shoes/Shoes.h"

#ifndef _FACTORY_H_
#define _FACTORY_H_

class Factory
{
public:
    Factory() = default;
    virtual ~Factory() = default;
    virtual Clothe *CreateClothe() = 0;
    virtual Shoes *CreateShoes() = 0;
};

#endif