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

	Auto getAuto() const;
	Kunde getKunde() const;
	int getTage() const;

	void setAuto(Auto auto2);
	void setKunde(Kunde kunde2);
	void setTage(int tag);
};