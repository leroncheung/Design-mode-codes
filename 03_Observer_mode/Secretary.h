/**
 * @file Secretary.h
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _SECRETARY_H_
#define _SECRETARY_H_

#include "Subject.h"

class Secretary : public Subject {
public:
    void attach(Observer *obs);
    void detach(Observer *obs);
    void Notify();
};

#endif