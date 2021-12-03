/**
 * @file Observer.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <string>

class Subject;

class Observer {
public:
    Observer(std::string name, Subject* sub) : name(name), sub(sub) {}
    virtual ~Observer() = default;
    virtual void Update() = 0;

protected:
    std::string name;
    Subject *sub;
};

#endif