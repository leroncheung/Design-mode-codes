/**
 * @file NBAObserver.cpp
 * @author leroncheung
 * @brief 
 * @version 0.1
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "NBAObserver.h"

void NBAObserver::TurnOffNbaGames(std::string leader)
{
    if (leader == "boss")
    {
        std::cout << "Boss is coming, turned off NBA games!" << std::endl;
    }
    else
    {
        std::cout << "Continue watch NBA games!" << std::endl;
    }
}