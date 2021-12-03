/**
 * @file main.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Secretary.h"
#include "NBAObserver.h"
#include "StockObserver.h"

int main() {
    Secretary secretary;
    NBAObserver nbaObs("Jim", &secretary);
    StockObserver stkObs("Tom", &secretary);
    secretary.attach(&nbaObs);
    secretary.attach(&stkObs);
    secretary.action = "Boss Come";
    secretary.Notify();

    return 0;
}