#include "Airplane.h"

Airplane::Airplane(const std::string &airlineName, double ticketPrice) : airlineName(airlineName),
                                                                         ticketPrice(ticketPrice) {}

Airplane::Airplane(const Airplane &other) : airlineName(other.airlineName), ticketPrice(other.ticketPrice) {}

Airplane::~Airplane() {}

Airplane *Airplane::clone() const {
    return new Airplane(*this);
}

void Airplane::print() const {
    std::cout << "Airline Name: " << airlineName << ", Ticket Price: $" << ticketPrice << "\n";
}

double Airplane::calculateCost() const {
    return ticketPrice;
}

void Airplane::read(std::istream &in) {
    in >> airlineName >> ticketPrice;
}

std::string Airplane::getType() const {
    return "Airplane";
}

std::string Airplane::getAirlineName() const {
    return airlineName;
}
