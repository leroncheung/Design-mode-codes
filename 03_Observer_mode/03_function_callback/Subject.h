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

#include <map>
#include <mutex>
#include <string>
#include <functional>

class Subject
{
public:
    using CallbackFunction = std::function<void(std::string)>;

    Subject() : id(0) {}
    ~Subject() = default;
    uint64_t RegisterCbFunc(const CallbackFunction &);
    void UnregisterCbFunc(uint64_t);
    void Notify(std::string);

private:
    uint64_t id;
    std::mutex mMutex;
    std::map<uint64_t, CallbackFunction> callbackFunctions;
};

#endif