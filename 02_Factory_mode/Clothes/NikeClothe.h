/**
 * @file NikeClothe.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _NIKE_CLOTHE_H_
#define _NIKE_CLOTHE_H_

#include "Clothe.h"

class NikeClothe : public Clothe {
public:
    NikeClothe() = default;
    ~NikeClothe() = default;
    void Show() const;
};

#endif