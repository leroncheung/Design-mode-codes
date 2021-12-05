/**
 * @file main.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "NBAObserver.h"
#include "StockObserver.h"
#include "Subject.h"

int main() {
    Subject sub;
    std::shared_ptr<Observer> nbaObserver = std::make_shared<NBAObserver>("Tom");
    std::shared_ptr<Observer> stockObserver = std::make_shared<StockObserver>("Jerry");
    sub.RegisterObservers(nbaObserver);
    sub.RegisterObservers(stockObserver);
    sub.Notify("boss");
    sub.Notify("Manager");

    return 0;
}