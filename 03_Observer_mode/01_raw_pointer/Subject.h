/**
 * @file Subject.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <string>
#include <list>

class Observer;

class Subject {
public:
    std::string action;

    Subject() = default;
    virtual ~Subject() = default;
    virtual void attach(Observer *obs) = 0;
    virtual void detach(Observer *obs) = 0;
    virtual void Notify() = 0;

protected:
    std::list<Observer *> members;
};

#endif