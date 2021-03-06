#include "COntroller.h"
#include "utils.h"

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

void AutoController::setSorter(Sorter* newSorter)
{
	this->MySorter = newSorter;
}

void AutoController::sortAutos()
{
	vector<Auto*> myVector = this->repo.get_autos();
	this->MySorter->sort(myVector);
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

Auto* AutoController::saveAuto(Auto a)
{
	if (this->repo.findOne(a.get_id()) == nullptr)
		return nullptr;
	else
	{
		this->repo.save(&a);
	}
}

Auto* AutoController::updateAuto(Auto a)
{
	if (this->repo.findOne(a.get_id()) == nullptr)
	{
		return nullptr;
	}
	else
	{
		this->repo.update(&a);
	}
}

Auto* AutoController::deleteAuto(int id)
{
	if (this->repo.findOne(id) == nullptr)
		return nullptr;
	else
		this->repo.del(id);
}
