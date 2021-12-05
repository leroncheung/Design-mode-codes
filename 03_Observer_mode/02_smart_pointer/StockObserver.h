/**
 * @file StockObserver.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _STOCK_OBSERVER_H_
#define _STOCK_OBSERVER_H_

#include "Observer.h"

class StockObserver : public Observer {
public:
    StockObserver() = default;
    StockObserver(std::string name) : Observer(name) {}
    ~StockObserver() = default;
    void Update(std::string);
};

#endif