#include "RoadTrip.h"
#include "Car.h"

RoadTrip::RoadTrip(Transport* transport, const std::string& destination, double distance) : Trip(transport, destination), distance(distance) {}

RoadTrip::~RoadTrip() {}

double RoadTrip::calculateTripCost() const {
    return distance * transport->calculateCost();
}

void RoadTrip::printTripInfo() const {
    std::cout << "Destination: " << destination << ", Car Brand: " << static_cast<Car*>(transport)->getBrand() << ", Total Cost: $" << calculateTripCost() << "\n";
}

double RoadTrip::getDistance() const {
    return distance;
}
