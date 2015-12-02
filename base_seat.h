/*Header file for base_seat*/


//#pragma once
#ifndef BASE_SEAT_H
#define BASE_SEAT_H
//#include <iostream>
//#include "base_seat.cc"
using namespace std;

namespace seat
{
	class base_seat 
{
public:
	
	base_seat(const double& base_price);
	double getPrice() const;
	void setPrice(const double& price);
	double returnBase() const;

private:
	double seat_price;
	double base_price;

	//base_seat();
	//~base_seat();
};
}
#endif
