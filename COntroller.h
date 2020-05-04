#pragma once
#include "Repository.h"
#include "PKW.h"
#include "Kunde.h"

class AutoController
{
private:
	AutoController();
	static AutoController *instanta; // global variable 
public:
	AutoInMemory repo;
	static AutoController* get_instanta();

	void sortAutos();

	Auto* findAutoId(int id);
	std::vector<Auto> findAll();

	Kunde saveAuto(Auto a); 

	Kunde updateAuto(Auto a); 

	Kunde deleteAuto(int id);
};