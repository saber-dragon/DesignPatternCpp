//
#include <iostream>

#include "stockGrabber.hpp"
#include "stockObserver.hpp"
int main(){


    std::shared_ptr<StockGrabber> stockGrabber = std::make_shared<StockGrabber>();
    std::shared_ptr<StockObserver> observer1(new StockObserver(stockGrabber));

    stockGrabber->SetIBMPrice(197.0);
    stockGrabber->SetAAPLPrice(677.60);
    stockGrabber->SetGOOGPrice(676.40);

    std::shared_ptr<StockObserver> observer2(new StockObserver(stockGrabber));

    stockGrabber->SetIBMPrice(197.0);
    stockGrabber->SetAAPLPrice(677.60);
    stockGrabber->SetGOOGPrice(676.40);

    stockGrabber->Unregister(&(*observer1));

    stockGrabber->SetIBMPrice(197.0);
    stockGrabber->SetAAPLPrice(677.60);
    stockGrabber->SetGOOGPrice(676.40);

    return 0;
}
