#include "Trip.h"

Trip::Trip(Transport *transport, const std::string &destination) : transport(transport), destination(destination) {}

Trip::~Trip() {}

Transport *Trip::getTransport() const {
    return transport;
}
