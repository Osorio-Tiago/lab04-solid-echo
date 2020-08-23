//
// Created by Angelo on 22/8/2020.
//

#include "DigitalGames.h"

DigitalGames::DigitalGames(const std::string &name, double price, double tax, double itemWeight) : Game(name, price, tax)
{
    this->itemWeight = itemWeight;
}

double DigitalGames::getItemWeight() const { return itemWeight; }

void DigitalGames::setItemWeight(double _itemWeight) { DigitalGames::itemWeight = _itemWeight; }

std::string DigitalGames::toString()
{
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nGame type: Digital"
           << "\nItem Weight: " << getItemWeight()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax and Discount: $" << calculatePriceWithTax();

    return output.str();
}

double DigitalGames::discount() { return getPrice() * 0.10; }
