/**
 * @file NBAObserver.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _NBA_OBSERVER_H_
#define _NBA_OBSERVER_H_

#include "Observer.h"

class NBAObserver : public Observer {
public:
    NBAObserver(std::string name, Subject* sub) : Observer(name, sub) {}
    void Update() override;
};

#endif