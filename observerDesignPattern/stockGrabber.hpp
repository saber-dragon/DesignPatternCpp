//

#ifndef DESIGNPATETERNS_STOCKGRABBER_HPP
#define DESIGNPATETERNS_STOCKGRABBER_HPP

#include <vector>
#include <algorithm>
#include <iostream>

#include "observer.hpp"
#include "subject.hpp"

class StockGrabber : public Subject {
public:
    StockGrabber() {
        _ibmPrice = -1;
        _aaplPrice = -1;
        _googPrice = -1;
    }

    void Register(Observer *o) override {
        _observers.push_back(o);

    }

    void Unregister(Observer* o) override {
        auto it = std::find(_observers.begin(), _observers.end(), o);
        if (it != _observers.end())
        {
            std::cout << "Observer: "
                         << ((*it)->GetId())
                         << " deleted\n";
            _observers.erase(it);
        }
    }

    void NotifyAll() override {

        for (auto& observer: _observers){
            observer->Update(_ibmPrice, _aaplPrice, _googPrice);
        }
    }

    void SetIBMPrice(double ibmPrice) {
        _ibmPrice = ibmPrice;
        NotifyAll();
    }

    void SetAAPLPrice(double aaplPrice){
        _aaplPrice = aaplPrice;
        NotifyAll();
    }

    void SetGOOGPrice(double googPrice){
        _googPrice = googPrice;
        NotifyAll();
    }


private:
    std::vector<Observer *> _observers;
    double _ibmPrice;
    double _aaplPrice;
    double _googPrice;
};

#endif //DESIGNPATETERNS_STOCKGRABBER_HPP
