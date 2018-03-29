#include "dog.hpp"
#include "bird.hpp"


int main(){
    std::unique_ptr<Dog> sparky(new Dog());
    std::unique_ptr<Bird> tweety(new Bird());

    std::cout << "Dog: "
                 << sparky->tryToFly()
                 << std::endl;
    std::cout << "Bird: "
                 << tweety->tryToFly()
                 << std::endl;

    sparky->setFlyingAbility(std::make_shared<ItFlys>());
    std::cout << "Dog: "
              << sparky->tryToFly()
              << std::endl;

    return 0;
}
