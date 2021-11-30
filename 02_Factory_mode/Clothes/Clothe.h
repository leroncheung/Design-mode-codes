/**
 * @file Clothe.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _CLOTHE_H_
#define _CLOTHE_H_

class Clothe
{
public:
    Clothe() = default;
    virtual ~Clothe() = default;
    virtual void Show() const = 0;
};

#endif