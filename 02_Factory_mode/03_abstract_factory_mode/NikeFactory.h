#include "Factory.h"

#ifndef _NIKE_FACTORY_H_
#define _NIKE_FACTORY_H_

class NikeFactory : public Factory {
public:
    NikeFactory() = default;
    ~NikeFactory() = default;
    Clothe *CreateClothe();
    Shoes *CreateShoes();
};

#endif