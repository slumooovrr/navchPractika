#include <iostream>
#include <fstream>
#include "RoadTrip.h"
#include "BeachVacation.h"
#include "Airplane.h"
#include "Car.h"
using namespace std;
int readTripsFromFile(const string& filename, Trip**& trips) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Problem with file\n" ;
        return 0;
    }
    int numTrips;
    file >> numTrips;
    trips = new Trip*[numTrips];
    int count = 0;
    string transportType;
    while (file >> transportType && count < numTrips) {
        if (transportType == "Car") {
            string brand;
            double fuelConsumption;
            string destination;
            double distance;
            file >> brand >> fuelConsumption >> destination >> distance;
            Car* car = new Car(brand, fuelConsumption);
            trips[count++] = new RoadTrip(car, destination, distance);
        } else if (transportType == "Airplane") {
            string airline;
            double ticketPrice;
            string destination;
            int numberOfMembers;
            file >> airline >> ticketPrice >> destination >> numberOfMembers;
            Airplane* airplane = new Airplane(airline, ticketPrice);
            trips[count++] = new BeachVacation(airplane, destination, numberOfMembers);
        }
    }
    file.close();
    return numTrips;
}

int main() {
    Trip** trips;
    int numTrips = readTripsFromFile(R"(C:\Users\Mariika\CLionProjects\task1\trips.txt)", trips);
    cout << "All trips:\n";
    for (int i = 0; i < numTrips; ++i) {
        trips[i]->printTripInfo();
    }
    RoadTrip** roadTrips = new RoadTrip*[numTrips];
    BeachVacation** beachVacations = new BeachVacation*[numTrips];
    int numRoadTrips = 0, numBeachVacations = 0;
    for (int i = 0; i < numTrips; ++i) {
        if (dynamic_cast<RoadTrip*>(trips[i])) {
            roadTrips[numRoadTrips++] = dynamic_cast<RoadTrip*>(trips[i]);
        } else if (dynamic_cast<BeachVacation*>(trips[i])) {
            beachVacations[numBeachVacations++] = dynamic_cast<BeachVacation*>(trips[i]);
        }
    }
    cout << "\nRoad trips:\n";
    for (int i = 0; i < numRoadTrips; ++i) {
        roadTrips[i]->printTripInfo();
    }
    cout << "\nFamily Beach vacations:\n";
    for (int i = 0; i < numBeachVacations; ++i) {
        beachVacations[i]->printTripInfo();
    }
    for (int i = 0; i < numTrips; ++i) {
        delete trips[i];
    }

    return 0;
}
