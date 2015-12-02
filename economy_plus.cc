/* File economy_plus.cc
 * Implementation for the economy plus seats
 * Interface located in economy_plus.h
 * Created by Patrick Connolly
 */

#include "economy_plus.h"


namespace seat
{
	economy_plus::economy_plus(const int& earlydays, const double& price, const int& upcharge): base_seat(price)
	{
		//Deliberately empty.
	}
		
	//Calculates the price based on how early the seat is booked.
	void economy_plus::book(int earlydays, int upcharge)
	{
		base_seat::setPrice(base_seat::returnBase() * earlydays + upcharge);
	}
}
/*
economy_plus::~economy_plus()
{
}*/
