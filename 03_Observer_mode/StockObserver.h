/**
 * @file StockObserver.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _STOCK_OBSERVER_H_
#define _STOCK_OBSERVER_H_

#include "Observer.h"

class StockObserver : public Observer {
public:
    StockObserver(std::string name, Subject* sub) : Observer(name, sub) {}
    void Update() override;
};

#endif