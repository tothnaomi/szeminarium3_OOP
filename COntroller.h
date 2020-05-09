#pragma once
#include "Repository.h"
#include "PKW.h"
#include "Kunde.h"

class AutoController
{
private:
	// am facut un constructor privat, ca sa avem doar o instanta a clasei respective !!!
	AutoController();
	static AutoController *instanta; // global variable 
public:
	AutoInMemory repo;
	static AutoController* get_instanta();

	void sortAutos();

	Auto* findAutoId(int id);
	std::vector<Auto> findAll();

	Auto* saveAuto(Auto a); 

	Auto* updateAuto(Auto a); 

	Auto* deleteAuto(int id);
};