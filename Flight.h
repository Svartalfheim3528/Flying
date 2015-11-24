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
			fillSeats(int rows, int columns)
		private:
			bool **seats;
	}
}


#endif //PLANE_H
