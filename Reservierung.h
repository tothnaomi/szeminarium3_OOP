#pragma once
#include "Auto.h"
#include "Kunde.h"
#include <vector>
using namespace std;

class Reservierung
{
private:
	Auto auto1;
	Kunde kunde;
	int tage;
public:
	Reservierung(Kunde, Auto, int);
};