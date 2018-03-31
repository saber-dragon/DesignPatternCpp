//

#ifndef DESIGNPATETERNS_BIGUFOENEMYSHIP_HPP
#define DESIGNPATETERNS_BIGUFOENEMYSHIP_HPP

#include "enempyShip.hpp"

class BigUFOEnemyShip : public EnemyShip {
public:
    BigUFOEnemyShip() {
        setName("Big UFO Enemy Ship");
        setDamage(40.0);
    }
};
#endif //DESIGNPATETERNS_BIGUFOENEMYSHIP_HPP
