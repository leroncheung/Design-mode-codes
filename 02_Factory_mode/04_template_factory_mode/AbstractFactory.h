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