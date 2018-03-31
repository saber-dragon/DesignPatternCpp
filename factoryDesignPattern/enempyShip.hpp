//

#ifndef DESIGNPATETERNS_ENEMPYSHIP_HPP
#define DESIGNPATETERNS_ENEMPYSHIP_HPP


class EnemyShip {
protected:
    std::string _name;
    double _speed;
    double _directionX;
    double _directionY;
    double _amtDamage;


public:
    std::string getName() const {return _name; }
    void setName(const std::string& name) {_name = name; }
    
    double getDamage() const {return _amtDamage; }
    void setDamage(double damage){ _amtDamage = damage; }
    
    virtual void followHeroShip() {
        std::cout << getName()
                  << " is following the hero" 
                     << std::endl;
    }
    
    virtual void displayEnemyShip() {
        std::cout << getName()
                  << " is on the screen"
                     << std::endl;
    }
    
    virtual void enemyShipShoots() {
        std::cout << getName()
                  << " attacks and does "
                     << getDamage()
                     << " damage to hero"
                        << std::endl;
    }
};
#endif //DESIGNPATETERNS_ENEMPYSHIP_HPP
