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
    // 使用weak_ptr，不占用所有权
    using ObserverPtr = std::weak_ptr<Observer>;
    // 默认的 operator< 不为弱指针定义，并且可能错误地认为同一对象的二个共享指针不等价
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