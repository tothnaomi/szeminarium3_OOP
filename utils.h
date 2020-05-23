#pragma once
#include "Auto.h"

struct sortByMarke
{
	bool operator()(Auto* auto1, Auto* auto2)
	{
		return auto1->get_marke() < auto2->get_marke();
	}
};