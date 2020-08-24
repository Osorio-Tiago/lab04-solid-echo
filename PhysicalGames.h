//
// Created by Angelo on 22/8/2020.
//

#ifndef LAB04_SOLID_PHYSICALGAMES_H
#define LAB04_SOLID_PHYSICALGAMES_H

#include "Game.h"
#include "IShippable.h"

class PhysicalGames: public Game, public IShippable{
public:

    PhysicalGames();

    PhysicalGames(const std::string &name, double price, double tax, double itemWeight, const std::string &productDimensions);

    double getItemWeight() const;

    void setItemWeight(double itemWeight);

    const std::string &getProductDimensions() const;

    void setProductDimensions(const std::string &productDimensions);
    std::string ship() override;

    std::string toString() override;

private:
    double itemWeight;
    std::string productDimensions;
    double discount() override;
};


#endif //LAB04_SOLID_PHYSICALGAMES_H
