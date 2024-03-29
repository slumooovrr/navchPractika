#include "Car.h"

Car::Car(const std::string &brand, double fuelConsumption) : brand(brand), fuelConsumption(fuelConsumption) {}

Car::Car(const Car &other) : brand(other.brand), fuelConsumption(other.fuelConsumption) {}

Car::~Car() {}

Car *Car::clone() const {
    return new Car(*this);
}

void Car::print() const {
    std::cout << "Car Brand: " << brand << ", Fuel Consumption: " << fuelConsumption << " liters per 100 km\n";
}

double Car::calculateCost() const {
    double fixedFuelPrice = 1.5;
    return fuelConsumption * fixedFuelPrice;
}

void Car::read(std::istream &in) {
    in >> brand >> fuelConsumption;
}

std::string Car::getType() const {
    return "Car";
}

std::string Car::getBrand() const {
    return brand;
}
