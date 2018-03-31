//

#ifndef DESIGNPATETERNS_ROCKETENEMYSHIP_HPP
#define DESIGNPATETERNS_ROCKETENEMYSHIP_HPP

#include "enempyShip.hpp"

class RocketEnemyShip : public EnemyShip {
public:
    RocketEnemyShip() {
        setName("Rocket Enemy Ship");
        setDamage(10.0);
    }
};
#endif //DESIGNPATETERNS_ROCKETENEMYSHIP_HPP
