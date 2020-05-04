#pragma once
#include "Repository.h"
#include "PKW.h"
#include "Kunde.h"

class AutoController
{
private:
	AutoController();
	static AutoController *instanta; // global
public:
	AutoInMemory repo;
	static AutoController* get_instanta();
	void sortAutos();
};