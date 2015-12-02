/*Header file for first_class*/

//#pragma once
#ifndef FIRST_CLASS_H
#define FIRST_CLASS_H
#include "base_seat.h"

using namespace std;

namespace seat
{
	class first_class :
		public base_seat
{
public:
	
	first_class(const int& earlydays, const double& price);
	
	//Calculates the price based on how early the seat is booked.
	void book(const int earlydays);
	
private:

	double earlybird;

	//first_class();
	//~first_class();
};
}
#endif
