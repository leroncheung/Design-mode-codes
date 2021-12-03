/**
 * @file StockObserver.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "StockObserver.h"
#include "Subject.h"

void StockObserver::Update() {
    std::cout << name << " has recived MSG: " << sub->action << std::endl;
    if (sub->action == "Boss Come") {
        std::cout << name << " closed stock web pages!" << std::endl;
    }
}