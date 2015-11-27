#include "Plane.h"
#include "Flight.cpp"

namespace Plane
{
	Plane::Plane(string DeptC, string ArriveC, int DeptT, int ArrivalT){
    DepartCity = DeptC;
    ArrivalCity = ArriveC;
    DepartTime = DeptT;
    ArrivalTime = ArrivalT;
    seats = Flight **seats;
    }
  
  Plane::fillSeats(int rows, int columns){
  //Need a format for the seats file so this can be fully implemented
  }
}
