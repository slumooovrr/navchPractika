#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>
#include <string>

class Transport {
public:
    virtual ~Transport() {}

    virtual Transport *clone() const = 0;

    virtual void print() const = 0;

    virtual double calculateCost() const = 0;

    virtual void read(std::istream &in) = 0;

    virtual std::string getType() const = 0;
};

#endif
