/**
 * @file NikeShoes.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _NIKESHOES_H_
#define _NIKESHOES_H_

#include "Shoes.h"

class NikeShoes : public Shoes {
public:
    NikeShoes() = default;
    ~NikeShoes() = default;

    void Show() const;
};

#endif