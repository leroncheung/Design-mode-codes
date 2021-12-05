/**
 * @file Subject.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <mutex>
#include <memory>
#include <set>
#include "Observer.h"

class Subject {
public:
    using ObserverPtr = std::weak_ptr<Observer>;
    using ObserverList = std::set<ObserverPtr, std::owner_less<ObserverPtr>>;

    Subject() = default;
    ~Subject() = default;

    void RegisterObservers(const ObserverPtr&);
    void UnregisterObservers(const ObserverPtr&);
    void Notify(std::string);

private:
    ObserverList observers;
    std::mutex mMutex;
};

#endif