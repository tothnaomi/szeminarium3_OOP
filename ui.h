#pragma once
#include "COntroller.h"

class ui
{
private:
	AutoController* cont;
public:
	ui();

	void printMenu();

	void run();
};