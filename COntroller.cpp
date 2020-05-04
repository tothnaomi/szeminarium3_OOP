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
