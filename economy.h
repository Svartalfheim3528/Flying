/*Header file for economy*/

//#pragma once
#ifndef ECONOMY_H
#define ECONOMY_H
#include "base_seat.h"
//#include <iostream>

using namespace std;

namespace seat
{
	class economy :
		public base_seat
{
public:
	
	economy(const int& earlydays, const double& price);
	
	//Calculates the price based on how early the seat is booked.
	void book(const int earlydays);
	
private:

	double earlybird;
	//economy();
	//~economy();
};
}
#endif
