#pragma once
#include "Auto.h"
#include "Rental.h"

class Statistics
{
private:
	Rental rental;
public:
	void setRental(Rental newRental);
	Rental getRental();
	Auto mostPopularAuto();
	int averageRentDays(Auto myAuto);
};