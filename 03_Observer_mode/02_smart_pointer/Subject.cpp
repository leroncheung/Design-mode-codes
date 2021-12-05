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
    for (auto it = begin(observers); it != end(observers); it++) {
        if (tempPtr = it->lock()) {
            tempPtr->Update(leader);
        }
    }
}