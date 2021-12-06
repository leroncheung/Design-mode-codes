/**
 * @file NBAObserver.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _NBA_OBSERVER_H_
#define _NBA_OBSERVER_H_

#include "Observer.h"

class NBAObserver : public Observer {
public:
    NBAObserver() = default;
    NBAObserver(std::string name) : Observer(name) {}
    ~NBAObserver() = default;
    void Update(std::string) override;
};

#endif