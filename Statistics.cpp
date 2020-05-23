#include "Statistics.h"

void Statistics::setRental(Rental newRental)
{
	this->rental = newRental;
}

Rental Statistics::getRental()
{
	return this->rental;
}

Auto Statistics::mostPopularAuto()
{
	int max = 0;
	Auto popularAuto;
	for (int i = 0; i < this->rental.getList().size(); i++)
	{
		Auto currentAuto = this->rental.getList()[i].getAuto();
		int number = 0;
		for (int j = 0; j < this->rental.getList().size(); j++)
		{
			if (this->rental.getList()[j].getAuto() == currentAuto) number++;
		}
		if (max < number)
		{
			popularAuto = currentAuto;
			max = number;
		}
	}
	return popularAuto;
}

int Statistics::averageRentDays(Auto myAuto)
{
	int tage = 0;
	int number = 0;
	for (int i = 0; i < this->rental.getList().size(); i++)
	{
		if (this->rental.getList()[i].getAuto() == myAuto)
		{
			tage += this->rental.getList()[i].getTage();
			number++;
		}
	}
	return tage / number;
}
