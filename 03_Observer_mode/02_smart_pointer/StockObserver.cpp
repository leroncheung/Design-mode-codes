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

inline void StockObserver::Update(std::string leader) {
    std::cout << name << " has recieved msg!" << std::endl;
    if (leader == "boss")
    {
        std::cout << name << " closed stock pages!" << std::endl;
    }
    else
    {
        std::cout << name << " did nothing!" << std::endl;
    }
}