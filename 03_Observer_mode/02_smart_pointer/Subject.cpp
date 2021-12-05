/**
 * @file Subject.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Subject.h"

void Subject::RegisterObservers(const ObserverPtr& obsPtr) {
    std::lock_guard<std::mutex> lock(mMutex);
    if (observers.find(obsPtr) == end(observers)) {
        observers.insert(obsPtr);
    }
}

void Subject::UnregisterObservers(const ObserverPtr& obsPtr) {
    std::lock_guard<std::mutex> lock(mMutex);
    if (observers.find(obsPtr) != end(observers))
    {
        observers.erase(obsPtr);
    }
}

void Subject::Notify(std::string leader) {
    std::lock_guard<std::mutex> lock(mMutex);
    std::shared_ptr<Observer> tempPtr;
    for (auto& observerPtr : observers) {
        if (tempPtr = observerPtr.lock()) {         // weak_ptr必须转换成shared_ptr，才可以访问指向的对象
            tempPtr->Update(leader);
        }
    }
}