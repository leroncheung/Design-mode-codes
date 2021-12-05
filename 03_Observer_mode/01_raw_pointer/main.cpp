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
    Secretary *secretary = new Secretary();
    NBAObserver *nbaObs = new NBAObserver("Jim", secretary);
    StockObserver *stkObs = new StockObserver("Tom", secretary);
    secretary->attach(nbaObs);
    secretary->attach(stkObs);
    secretary->action = "Boss Come";
    secretary->Notify();
    secretary->action = "Go for lauch";
    secretary->Notify();
    secretary->detach(nbaObs);
    secretary->detach(stkObs);
    delete nbaObs;
    nbaObs = nullptr;
    delete stkObs;
    stkObs = nullptr;
    delete secretary;
    secretary = nullptr;

    return 0;
}