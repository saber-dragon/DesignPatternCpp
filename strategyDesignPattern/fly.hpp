#ifndef DESIGNPATETERNS_FLY_H
#define DESIGNPATETERNS_FLY_H

#include <string>
class Flys {
public:
    virtual std::string fly() = 0;
};

class ItFlys : public Flys {
public:
    std::string fly() override {
        return "Flying high";
    }
};

class CantFly : public Flys {
public:
    std::string fly() override {
        return "I can't fly";
    }
};
#endif //DESIGNPATETERNS_FLY_H
