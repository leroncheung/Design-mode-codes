/**
 * @file Shoes.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _SHOES_H_
#define _SHOES_H_

class Shoes
{
public:
    Shoes() = default;
    virtual ~Shoes() = default;
    virtual void Show() const = 0;
};

#endif