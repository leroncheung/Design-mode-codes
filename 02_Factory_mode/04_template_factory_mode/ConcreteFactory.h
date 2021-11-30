/**
 * @file ConcreteFactory.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _CONCRETE_FACTORY_H_
#define _CONCRETE_FACTORY_H_

#include "AbstractFactory.h"

template <class AbstractProduct, class ConcreteProduct>
class ConcreteFactory : public AbstractFactory<AbstractProduct>
{
public:
    ConcreteFactory() = default;
    ~ConcreteFactory() = default;
    AbstractProduct *CreateProduct();
};

#endif

// 建议模板的声明和实现都写在头文件中
template <class AbstractProduct, class ConcreteProduct>
AbstractProduct *ConcreteFactory<AbstractProduct, ConcreteProduct>::CreateProduct()
{
    return new ConcreteProduct();
}