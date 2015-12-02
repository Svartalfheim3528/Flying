/* File base_seat.cc
 * Implementation for the basic seat
 * Interface located in base_seat.h
 * Created by Patrick Connolly
 */

#include "base_seat.h"


namespace seat
{
	base_seat::base_seat(const double& base_price)
	{
		//Deliberately left empty.
	}
	
	double base_seat::getPrice() const
	{
		return seat_price;
	}

	void base_seat::setPrice(const double& price)
	{
		seat_price = price;
	}

	double base_seat::returnBase() const
	{
		return base_price;
	}
}
/*
base_seat::~base_seat()
{
}*/

