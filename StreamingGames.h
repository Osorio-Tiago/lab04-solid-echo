//
// Created by Angelo on 22/8/2020.
//

#ifndef LAB04_SOLID_STREAMINGGAMES_H
#define LAB04_SOLID_STREAMINGGAMES_H

#include "Game.h"
#include "IReplaceable.h"

class StreamingGames: public Game, public IReplaceable {
public:

    StreamingGames();

    StreamingGames(const std::string &name, double price, double tax);

    std::string replace() override;

    std::string toString() override;



};


#endif //LAB04_SOLID_STREAMINGGAMES_H
