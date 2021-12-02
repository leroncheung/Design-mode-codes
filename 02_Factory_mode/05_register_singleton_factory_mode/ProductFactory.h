/**
 * @file ProductFactory.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _PRODUCT_FACTORY_H_
#define _PRODUCT_FACTORY_H_

#include <map>
#include <string>
#include <iostream>
#include "IProductRegistrar.h"

template<class AbstractProduct>
class ProductFactory {
public:
    static ProductFactory &Instance();
    void ProductRegist(std::string, IProductRegistrar<AbstractProduct> *);
    AbstractProduct *GetProduct(std::string);

protected:
    ProductFactory() = default;
    ~ProductFactory() = default;

private:
    std::map<std::string, IProductRegistrar<AbstractProduct> *> mProducts;

    ProductFactory(const ProductFactory &) = delete;
    ProductFactory &operator=(const ProductFactory &) = delete;
};

#endif  // _PRODUCT_FACTORY_H_

template<class AbstractProduct>
inline ProductFactory<AbstractProduct>& ProductFactory<AbstractProduct>::Instance() {
    static ProductFactory instance;
    return instance;
}

template<class AbstractProduct>
void ProductFactory<AbstractProduct>::ProductRegist(std::string name, IProductRegistrar<AbstractProduct>* pRegist) {
    mProducts[name] = pRegist;
}

template<class AbstractProduct>
AbstractProduct* ProductFactory<AbstractProduct>::GetProduct(std::string name) {
    if (mProducts.find(name) == end(mProducts)) {
        std::cout << name << " NOT found!" << std::endl;
        return nullptr;
    }
    return mProducts[name]->CreateProduct();
}