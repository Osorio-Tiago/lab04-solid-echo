//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Game.h"
#include "PhysicalGames.h"
#include "DigitalGames.h"
#include "StreamingGames.h"

int main() {
    PhysicalGames game1("Call of Duty: Black Ops 4 (PS4)",24.66,0.13,0.564,"3.94 x 0.59 x 5.91 inches; 0.56 Ounces");

    std::cout<<game1.toString()<<std::endl;
    std::cout<<std::endl;
    std::cout<<game1.ship()<<std::endl;

    DigitalGames game2("Call of Duty: Black Ops 3 (PS4)", 24.66, 0.13, 20.5);

    std::cout<<game2.toString()<<std::endl;
    std::cout<<std::endl;
    std::cout<<game2.replace()<<std::endl;

    StreamingGames game3("Call of Duty: Black Ops 2 (PS3)",14.99,0.13);

    std::cout<<game3.toString()<<std::endl;
    std::cout<<std::endl;
    std::cout<<game3.replace()<<std::endl;




    game1.save("game.txt");
    game2.save("game.txt");
    game3.save("game.txt");

    return 0;
}