#ifndef DESIGNPATETERNS_ANIMAL_HPP
#define DESIGNPATETERNS_ANIMAL_HPP

#include <iostream>
#include <string>
#include <memory>
#include <utility>
#include "fly.hpp"

class Flys;

class Animal {
public:
    std::shared_ptr<Flys> _flyingType;

    void setName(const std::string& name) {
        _name = name;
    }
    std::string getName() const {
        return _name;
    }

    void setHeight(double height) {
        _height = height;
    }
    double getHeight() const {
        return _height;
    }

    void setWeight(int weight) {
        if (weight > 0){
            _weight = weight;
        } else {
            std::cerr << "Weight mush be a positive integer.\n";
        }
    }
    int getWeight() const {
        return _weight;
    }

    void setFavFood(const std::string& food) {
        _favFood = food;
    }
    std::string getFavFood() const {
        return _favFood;
    }

    void setSpeed(double speed) {
        _speed = speed;
    }
    double getSpeed() const {
        return _speed;
    }

    void setSound(const std::string& sound) {
        _sound = sound;
    }
    std::string getSound() const {
        return _sound;
    }

    std::string tryToFly() const {
        return _flyingType->fly();
    }

    void setFlyingAbility(std::shared_ptr<Flys> flyingType){
        _flyingType = std::move(flyingType);
    }

private:
    std::string _name;
    double _height;
    int _weight;
    std::string _favFood;
    double _speed;
    std::string _sound;
};
#endif //DESIGNPATETERNS_ANIMAL_HPP
