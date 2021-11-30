/**
 * @file AbstractFactory.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _ABSTRACT_FACTORY_H_
#define _ABSTRACT_FACTORY_H_

template <class AbstractProduct>
class AbstractFactory
{
public:
    AbstractFactory() = default;
    virtual ~AbstractFactory() = default;
    virtual AbstractProduct *CreateProduct() = 0;
};

#endif