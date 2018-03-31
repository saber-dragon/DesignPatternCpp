//

#ifndef DESIGNPATETERNS_ENEMYSHIPFACTORY_HPP
#define DESIGNPATETERNS_ENEMYSHIPFACTORY_HPP

#include "enempyShip.hpp"
#include "UFOEnemyShip.hpp"
#include "bigUFOEnemyShip.hpp"
#include "rocketEnemyShip.hpp"

class EnemyShipFactory {
public:
    EnemyShip* makeEnemyShip(char shipType) {
        switch (shipType){
            case 'U':
                return new UFOEnemyShip();
            case 'R':
                return new RocketEnemyShip();
            case 'B':
                return new BigUFOEnemyShip();
            default:
            {
                std::cerr << "Unknown ship type: "
                           << shipType
                           << std::endl;
            }
        }
        return nullptr;
    }
};
#endif //DESIGNPATETERNS_ENEMYSHIPFACTORY_HPP
