/* File first_class.cc
 * Implementation for the first class seats
 * Interface located in first_class.h
 * Created by Patrick Connolly
 */

#include "first_class.h"
#include "base_seat.h"

namespace seat
{
	first_class::first_class(const int& earlydays, const double& price): base_seat(price)
	{
		//Deliberately empty.
	}
		
	//Calculates the price based on how early the seat is booked.
	void first_class::book(int earlydays)
	{
		base_seat::setPrice(base_seat::returnBase() * earlybird);
	}
}

/*
first_class::~first_class()
{
}*/
