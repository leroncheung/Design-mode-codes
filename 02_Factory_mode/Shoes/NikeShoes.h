#include "Shoes.h"

#ifndef _NIKESHOES_H_
#define _NIKESHOES_H_

class NikeShoes : public Shoes {
public:
    NikeShoes() = default;
    ~NikeShoes() = default;

    void Show() const;
};

#endif