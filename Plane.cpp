#include "Plane.h"
#include "Flight.cpp"

namespace Plane
{
Plane::Plane(){
    DepartCity = "";
    ArrivalCity = "";
    DepartTime = 0;
    ArrivalTime = 0;
    seats = Flight **seats;
    }
 
Plane::fillSeats(int rows, int columns){
  //Need a format for the seats file so this can be fully implemented
  }
  
Plane::setSeat(int m, int n, Passenger P){
	seats[m][n] = P;
}

Plane::setDepartCity(string City){
	DepartCity = City;
}

Plane::setDepartTime(int Time){
	DepartTime = Time;
}

Plane::setArrivalCity(string City){
	ArrivalCity = City;
}

Plane::setArrivalTime(int Time){
	ArrivalTime = Time;
}
}
