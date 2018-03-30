//

#ifndef DESIGNPATETERNS_SUBJECT_HPP
#define DESIGNPATETERNS_SUBJECT_HPP

#include <memory>

class Observer;

class Subject {
public:
    virtual void Register(Observer* o) = 0;
    virtual void Unregister(Observer* o) = 0;
    virtual void NotifyAll() = 0;

};
#endif //DESIGNPATETERNS_SUBJECT_HPP
