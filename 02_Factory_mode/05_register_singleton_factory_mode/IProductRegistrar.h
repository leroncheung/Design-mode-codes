/**
 * @file IProductRegistrar.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _IPRODUCT_REGISTRAR_H_
#define _IPRODUCT_REGISTRAR_H_

template<class AbstractProduct>
class IProductRegistrar {
public:
    virtual AbstractProduct *CreateProduct() = 0;

protected:
    IProductRegistrar() = default;
    ~IProductRegistrar() = default;

private:
    IProductRegistrar(const IProductRegistrar &) = delete;
    IProductRegistrar &operator=(const IProductRegistrar &) = delete;
};

#endif