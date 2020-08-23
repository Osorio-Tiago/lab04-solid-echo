//
// Created by Angelo on 22/8/2020.
//

#ifndef LAB04_SOLID_STREAMINGGAMES_H
#define LAB04_SOLID_STREAMINGGAMES_H

#include "Game.h"

class StreamingGames: public Game {
public:
    StreamingGames(const std::string &name, double price, double tax);

    std::string toString() override;



};


#endif //LAB04_SOLID_STREAMINGGAMES_H
