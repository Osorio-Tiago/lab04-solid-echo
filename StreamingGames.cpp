//
// Created by Angelo on 22/8/2020.
//

#include "StreamingGames.h"

StreamingGames::StreamingGames(const std::string &name, double price, double tax) : Game(name, price, tax)
{

}


std::string StreamingGames::toString()
{
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nGame type: Streaming"
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax and Discount: $" << calculatePriceWithTax();

    return output.str();
}