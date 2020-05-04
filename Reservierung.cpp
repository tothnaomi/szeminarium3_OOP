#include "Reservierung.h"

Reservierung::Reservierung(Kunde kunde, Auto Auto, int tage)
{
	this->autos = Auto;
	this->kunde = kunde;
	this->tage = tage;
}
