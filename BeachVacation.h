#ifndef BEACHVACATION_H
#define BEACHVACATION_H

#include "Trip.h"

class BeachVacation : public Trip {
private:
    int numberOfMembers;

public:
    BeachVacation(Transport *transport, const std::string &destination, int numberOfMembers);

    ~BeachVacation();

    double calculateTripCost() const override;

    void printTripInfo() const override;

    int getNumberOfMembers() const;
};

#endif
