#include "BeachVacation.h"

BeachVacation::BeachVacation(Transport *transport, const std::string &destination, int numberOfMembers) : Trip(
        transport, destination), numberOfMembers(numberOfMembers) {}

BeachVacation::~BeachVacation() {}

double BeachVacation::calculateTripCost() const {
    double vacationPackagePricePerPerson = 1000;
    return numberOfMembers * vacationPackagePricePerPerson;
}

void BeachVacation::printTripInfo() const {
    std::cout << "Destination: " << destination << ", Total Cost: $" << calculateTripCost() << "\n";
}

int BeachVacation::getNumberOfMembers() const {
    return numberOfMembers;
}
