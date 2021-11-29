#include "AbstractFactory.h"

#ifndef _CONCRETE_FACTORY_H_
#define _CONCRETE_FACTORY_H_

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