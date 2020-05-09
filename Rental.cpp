#include "Rental.h"

void Rental::deleteReservation(Kunde k, Auto a)
{
	// TODO
	if (this->searchReservierung(k, a) == false)
	{
		exception theAutoAndThePersonDoesNotExist;
		throw theAutoAndThePersonDoesNotExist;
	}
	else
	{
		bool found = false;
		for (int i = 0; i < this->reservierungen.size(); i++)
		{
			if (this->reservierungen[i].getAuto().get_id() == a.get_id() && this->reservierungen[i].getKunde().get_id() == k.get_id())
			{
				this->reservierungen.erase(this->reservierungen.begin() + i);
				found == true;
			}
			if (found == true)
				break;
		}
	}
}

void Rental::addReservation(Kunde k, Auto a, int tag)
{
	if (this->searchReservierung(k, a) == true)
		return;
	else
	{
		Reservierung newRes = Reservierung(k, a, tag);
		this->reservierungen.push_back(newRes);
	}
}

bool Rental::searchReservierung(Kunde k, Auto a)
{
	for (int i = 0; i < this->reservierungen.size(); i++)
	{
		if (this->reservierungen[i].getAuto() == a && this->reservierungen[i].getKunde() == k)
			return true;
	}
	return false;
}
