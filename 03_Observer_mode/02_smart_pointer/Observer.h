/**
 * @file Oberser.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <string>

class Observer {
public:
    Observer() = default;
    Observer(std::string name) : name(name) {}
    virtual ~Observer() = default;
    virtual void Update(std::string) = 0;

protected:
    std::string name;
};

#endif