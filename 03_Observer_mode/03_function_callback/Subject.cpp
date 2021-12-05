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

uint64_t Subject::RegisterCbFunc(const CallbackFunction &callbackFunction)
{
    std::lock_guard<std::mutex> lock(mMutex);
    callbackFunctions[id++] = callbackFunction;
    return id;
}

void Subject::UnregisterCbFunc(uint64_t id)
{
    std::lock_guard<std::mutex> lock(mMutex);
    callbackFunctions.erase(id);
}

void Subject::Notify(std::string leader)
{
    std::lock_guard<std::mutex> lock(mMutex);
    for (auto it = cbegin(callbackFunctions); it != cend(callbackFunctions); it++)
    {
        it->second(leader);
    }
}