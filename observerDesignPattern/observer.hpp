//

#ifndef DESIGNPATETERNS_OBSERVER_HPP
#define DESIGNPATETERNS_OBSERVER_HPP

#include <iostream>
#include <memory>

class Observer {
public:
    Observer(double _ibmPrice, double _aaplPrice, double _googPrice) : _ibmPrice(_ibmPrice),
                                                                                _aaplPrice(_aaplPrice),
                                                                                _googPrice(_googPrice){
        _id = ++ _ObserverIDTracker;
        std::cout << "New observer : "
                     << _id
                     << std::endl;
    }

    Observer() : Observer(0, 0, 0) {}


    virtual void Update(double ibmPrice, double aaplPrice, double googPrice) = 0;
    int GetId() const {
        return _id;
    }

protected:
    double _ibmPrice;
    double _aaplPrice;
    double _googPrice;

private:
    static int _ObserverIDTracker;
    int _id;
};

int Observer::_ObserverIDTracker = 0;
#endif //DESIGNPATETERNS_OBSERVER_HPP
