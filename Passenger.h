#ifndef PASSENGER_H
#define PASSENGER_H

#include Itinerary.cc

namespace Pass
{
  class Passenger
  {
    public:
      setSeat(int m, int n, int FlightID);
      addToItin(int FlightID);
      removeFromItin(int FlightID);
    private:
      Itinerary itinerary;
      string* seats;
      Passenger* related;
  };
}
