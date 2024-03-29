#ifndef CAR_H
#define CAR_H

#include "Transport.h"

class Car : public Transport {
private:
    std::string brand;
    double fuelConsumption;

public:
    Car(const std::string &brand, double fuelConsumption);

    Car(const Car &other);

    ~Car();

    Car *clone() const override;

    void print() const override;

    double calculateCost() const override;

    void read(std::istream &in) override;

    std::string getType() const override;

    std::string getBrand() const;
};

#endif
