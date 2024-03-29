#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "Transport.h"

class Airplane : public Transport {
private:
    std::string airlineName;
    double ticketPrice;

public:
    Airplane(const std::string &airlineName, double ticketPrice);

    Airplane(const Airplane &other);

    ~Airplane();

    Airplane *clone() const override;

    void print() const override;

    double calculateCost() const override;

    void read(std::istream &in) override;

    std::string getType() const override;

    std::string getAirlineName() const;
};

#endif
