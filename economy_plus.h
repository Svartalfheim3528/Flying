/*Header file for economy_plus*/

//#pragma once
#ifndef ECONOMY_PLUS_H
#define ECONOMY_PLUS_H
#include "base_seat.h"
//#include <iostream>

using namespace std;

namespace seat
{
	class economy_plus :
		public base_seat
{
public:
	
	economy_plus(const int& earlydays, const double& price, const int& upcharge);
	
	//Calculates the price based on how early the seat is booked.
	void book(const int earlydays, const int upcharge);
	
private:

	double earlybird;
	
	//economy_plus();
	//~economy_plus();
};
}
#endif
