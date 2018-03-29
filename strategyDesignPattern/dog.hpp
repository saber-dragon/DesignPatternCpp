//

#ifndef DESIGNPATETERNS_DOG_HPP
#define DESIGNPATETERNS_DOG_HPP

#include "animal.hpp"

class Dog : public Animal {
public:
    Dog() : Animal() {
        setSound("Bark");

        _flyingType = std::make_shared<CantFly>();
    }
    void digHole() {
        std::cout << "Dug a hole\n";
    }

};
#endif //DESIGNPATETERNS_DOG_HPP
