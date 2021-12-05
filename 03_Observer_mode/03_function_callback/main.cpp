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

#include <memory>
#include "Subject.h"
#include "NBAObserver.h"
#include "StockObserver.h"

int main()
{
    using CallbackFunction = std::function<void(std::string)>;
    Subject subject;
    std::shared_ptr<NBAObserver> nbaObserverPtr = std::make_shared<NBAObserver>();
    std::shared_ptr<StockObserver> stockObserverPtr = std::make_shared<StockObserver>();
    CallbackFunction nbaFunction = std::bind(&NBAObserver::TurnOffNbaGames, nbaObserverPtr, std::placeholders::_1);
    subject.RegisterCbFunc(nbaFunction);
    CallbackFunction stockFunction = std::bind(&StockObserver::CloseStockPages, stockObserverPtr, std::placeholders::_1);
    subject.RegisterCbFunc(stockFunction);
    subject.Notify("boss");

    return 0;
}