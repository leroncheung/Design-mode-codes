/**
 * @file main.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "ProductRegistrar.h"
#include "../Shoes/Shoes.h"
#include "../Shoes/NikeShoes.h"

int main() {
    // 该模式为模板工厂类的升级版
    // 不再需要时刻管理其中的工厂对象或对象指针，只需要在一开始使用ProductRegistrar注册，之后如果需要再生产该类型产品
    // 只需要调用工厂类的GetProduct方法即可
    ProductRegistrar<Shoes, NikeShoes> productRegistrar("nike");
    Shoes *pNikeShoes = ProductFactory<Shoes>::Instance().GetProduct("nike");
    pNikeShoes->Show();
    delete pNikeShoes;
    pNikeShoes = nullptr;

    return 0;
}