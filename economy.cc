/* File ecomony.cc
 * Implementation for the economy seats
 * Interface located in economy.h
 * Created by Patrick Connolly
 */

#include "economy.h"
#include "base_seat.h"

namespace seat
{
	economy::economy(const int& earlydays, const double& price): base_seat(price)
	{
		//Deliberately empty.
	}
		
	//Calculates the price based on how early the seat is booked.
	void economy::book(int earlydays)
	{
		base_seat::setPrice(base_seat::returnBase() * earlybird);
	}
}

/*
economy::~economy()
{
}*/
