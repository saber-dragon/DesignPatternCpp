//

#ifndef DESIGNPATETERNS_UFOENEMYSHIP_HPP
#define DESIGNPATETERNS_UFOENEMYSHIP_HPP

#include "enempyShip.hpp"

class UFOEnemyShip : public EnemyShip {
public:
    UFOEnemyShip() {
        setName("UFO Enemy Ship");
        setDamage(20.0);
    }
};
#endif //DESIGNPATETERNS_UFOENEMYSHIP_HPP
