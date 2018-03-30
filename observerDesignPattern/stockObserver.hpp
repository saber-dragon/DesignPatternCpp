//

#ifndef DESIGNPATETERNS_STOCKOBSERVER_HPP
#define DESIGNPATETERNS_STOCKOBSERVER_HPP

#include <utility>
#include "observer.hpp"
#include "subject.hpp"
#include "stockGrabber.hpp"

class StockObserver : public Observer {
public:
    explicit StockObserver(std::shared_ptr<Subject> stockGrabber) : Observer(), _stockGrabber(std::move(stockGrabber)) {
        _stockGrabber->Register(this);
    }


    void Update(double ibmPrice, double aaplPrice, double googPrice) override {
        _ibmPrice = ibmPrice;
        _aaplPrice = aaplPrice;
        _googPrice = googPrice;
        PrintPrices();
    }


    void PrintPrices() const {
        std::cout << "observer "
                     << GetId()
                     << "\nIBM: "
                        << _ibmPrice
                        << "\nAAPL: "
                           << _aaplPrice
                           << "\nGOOG: "
                              << _googPrice
                              << std::endl;

    }

private:
    std::shared_ptr<Subject> _stockGrabber;
};
#endif //DESIGNPATETERNS_STOCKOBSERVER_HPP
