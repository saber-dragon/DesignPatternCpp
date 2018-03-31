//
#include <iostream>
#include <string>
#include <cassert>
#include "enemyShipFactory.hpp"


void doSomethingWithEnemyShip(EnemyShip* ship){
    ship->displayEnemyShip();
    ship->followHeroShip();
    ship->enemyShipShoots();
}

int main(){
    EnemyShipFactory sf;
    char type;
    EnemyShip *ship = nullptr;
    std::cout << "What type of ship? (U/R/B/#) ";
    std::cin >> type;

    while (type != '#') {
        ship = sf.makeEnemyShip(type);
        doSomethingWithEnemyShip(ship);
        if (ship != nullptr) delete ship;
        std::cin >> type;
    }

    return 0;

}
