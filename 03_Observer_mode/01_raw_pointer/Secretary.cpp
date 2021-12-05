/**
 * @file Secretary.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <algorithm>
#include "Secretary.h"
#include "Observer.h"

void Secretary::attach(Observer* obs) {
    members.push_back(obs);
}

void Secretary::detach(Observer* obs) {
    auto it = find(begin(members), end(members), obs);
    if (it != end(members)) {
        members.erase(it);
    }
}

void Secretary::Notify() {
    for (auto obs : members) {
        obs->Update();
    }
}