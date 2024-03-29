#ifndef TRIP_H
#define TRIP_H

#include <iostream>
#include "Transport.h"

class Trip {
protected:
    Transport* transport;
    std::string destination;

public:
    Trip(Transport* transport, const std::string& destination);
    virtual ~Trip();

    virtual double calculateTripCost() const = 0;
    virtual void printTripInfo() const = 0;
    Transport* getTransport() const;

    friend std::istream& operator>>(std::istream& in, Trip& trip);
};

#endif
