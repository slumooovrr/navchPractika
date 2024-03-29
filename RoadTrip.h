#ifndef ROADTRIP_H
#define ROADTRIP_H

#include "Trip.h"

class RoadTrip : public Trip {
private:
    double distance;

public:
    RoadTrip(Transport *transport, const std::string &destination, double distance);

    ~RoadTrip();

    double calculateTripCost() const override;

    void printTripInfo() const override;

    double getDistance() const;
};

#endif
