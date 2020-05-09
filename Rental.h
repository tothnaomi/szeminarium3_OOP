#pragma once
#include "Auto.h"
#include "Kunde.h"
#include "LKW.h"
#include "PKW.h"
#include "Rental.h"
#include <vector>
#include "Reservierung.h"

class Rental 
{
	// nu avem nevoie de bucata asta de cod, pentru ca trebuie sa facem refactorizarea 
	//std::vector<Auto> autos;
	//std::vector<Kunde> clients;
	std::vector <Reservierung> reservierungen;

public:

	//void update_client(Kunde& k, std::string name); // ahol ki kell cserelje oda kell &

	//void update_auto(Auto updateAuto);

	void deleteReservation(Kunde k, Auto a);

	void addReservation(Kunde k, Auto a, int);

	bool searchReservierung(Kunde k, Auto a);
};