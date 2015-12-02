//Flight Class, Parent class to each passenger seat types

#ifndef PLANE_H
#define PLANE_H

namespace Plane
{
	class PlaneClass
	{
		public:
			string DepartCity, ArrivalCity;
			int DepartTime, ArrivalTime;
			void fillSeats(int rows, int columns);  //In the future may need to add parameters for imported files
			void setSeat(int m, int n, Passenger P);
			void setDepartCity(string City);
			void setDepartTime(int Time);
			void setArrivalCity(string City);
			void setArrivalTime(int Time);
			
		private:
			Flight **seats;  //Array of type Flight because seat classes are all of type Flight
			//We won't need to do anything special for this, each flight class(Economy, economy plus etc)
			//will be of type Flight, and therefore won't need to seperate them.
	};
}


#endif //PLANE_H
