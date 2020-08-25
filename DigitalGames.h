//
// Created by Angelo on 22/8/2020.
//

#ifndef LAB04_SOLID_DIGITALGAMES_H
#define LAB04_SOLID_DIGITALGAMES_H

#include "Game.h"
#include "IReplaceable.h"

class DigitalGames: public Game, public IReplaceable{
public:

    DigitalGames();

    DigitalGames(const std::string &name, double price, double tax, double itemWeight);

    double getItemWeight() const;

    void setItemWeight(double _itemWeight);
    std::string replace() override;

    std::string toString() override;


private:
    double itemWeight; //Pero en Megabytes / Gigabytes
    double discount() override;

};

#endif //LAB04_SOLID_DIGITALGAMES_H
