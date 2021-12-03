/**
 * @file ProductRegistrar.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _PRODUCT_REGISTRAR_H_
#define _PRODUCT_REGISTRAR_H_

#include "ProductFactory.h"

template<class AbstractProduct, class ConcretProduct>
class ProductRegistrar : public IProductRegistrar<AbstractProduct>
{
public:
    ~ProductRegistrar() = default;
    explicit ProductRegistrar(std::string name);
    AbstractProduct *CreateProduct() override;
};

#endif // _PRODUCT_REGISTRAR_H_

template <class AbstractProduct, class ConcretProduct>
ProductRegistrar<AbstractProduct, ConcretProduct>::ProductRegistrar(std::string name) {
    ProductFactory<AbstractProduct>::Instance().ProductRegist(name, this);
}

template <class AbstractProduct, class ConcretProduct>
AbstractProduct* ProductRegistrar<AbstractProduct, ConcretProduct>::CreateProduct() {
    return new ConcretProduct();
}