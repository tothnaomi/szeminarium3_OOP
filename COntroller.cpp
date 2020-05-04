#include "COntroller.h"

AutoController* AutoController::instanta = nullptr;

AutoController* AutoController::get_instanta()
{
	// ez problemas lenne, mert mindig uj instantat hoz letre
	//instanta = new AutoController();
	if (instanta == nullptr)
	{
		// instanta nu a fost inca creata
		instanta = new AutoController();
	}
	return instanta;
}

void AutoController::sortAutos()
{
	// Bubble Sort
	bool sorted = false;
	while (not sorted)
	{
		sorted = true;
		for (int i = 1; i < this->repo.get_autos().size(); i++)
		{
			if (this->repo.get_autos[i - 1] > this->repo.get_autos[i])
			{
				std::swap(this->repo.get_autos[i - 1], this->repo.get_autos[i]);
				sorted = false;
			}
		}
	}
}

Auto* AutoController::findAutoId(int id)
{
	for (int i = 0; i < this->repo.get_autos().size(); i++)
	{
		if (this->repo.get_autos()[i]->get_id() == id)
			return this->repo.get_autos()[i];
	}
	return nullptr;
}

std::vector<Auto> AutoController::findAll()
{
	std::vector<Auto> alleAutos;
	for (auto element : this->repo.get_autos())
	{
		alleAutos.push_back(*element);
	}
	return alleAutos;
}

Kunde AutoController::saveAuto(Auto a)
{
	// TODO
	return Kunde();
}

Kunde AutoController::updateAuto(Auto a)
{
	// TODO
	return Kunde();
}

Kunde AutoController::deleteAuto(int id)
{
	// TODO
	return Kunde();
}
