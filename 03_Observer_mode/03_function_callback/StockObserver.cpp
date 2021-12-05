/**
 * @file StockObserver.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "StockObserver.h"

void StockObserver::CloseStockPages(std::string leader)
{
    if (leader == "boss")
    {
        std::cout << "Boss is coming, close stock pages right now!" << std::endl;
    }
    else
    {
        std::cout << "Continue browser stock infomations!" << std::endl;
    }
}