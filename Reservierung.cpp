#include "Reservierung.h"

Reservierung::Reservierung(Kunde kunde, Auto Auto, int tage)
{
	this->auto1 = Auto;
	this->kunde = kunde;
	this->tage = tage;
}

Auto Reservierung::getAuto() const
{
	return this->auto1;
}

Kunde Reservierung::getKunde() const
{
	return this->kunde;
}

int Reservierung::getTage() const
{
	return this->tage;
}

void Reservierung::setAuto(Auto auto2)
{
	this->auto1 = auto2;
}

void Reservierung::setKunde(Kunde kunde2)
{
	this->kunde = kunde2;
}

void Reservierung::setTage(int tag)
{
	this->tage = tag;
}
