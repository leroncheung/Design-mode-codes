/**
 * @file AdidasShoes.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ADIDASSHOES_H_
#define _ADIDASSHOES_H_

#include "Shoes.h"

class AdidasShoes : public Shoes
{
public:
    AdidasShoes() = default;
    ~AdidasShoes() = default;
    void Show() const override;
};

#endif