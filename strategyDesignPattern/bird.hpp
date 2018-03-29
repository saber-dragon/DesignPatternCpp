#ifndef DESIGNPATETERNS_BIRD_HPP
#define DESIGNPATETERNS_BIRD_HPP

#include "animal.hpp"

class Bird : public Animal {
public:
    Bird() : Animal() {
        setSound("Tweet");

        _flyingType = std::make_shared<ItFlys>();
    }
};
#endif //DESIGNPATETERNS_BIRD_HPP
