#pragma once
#include "ui.h"
#include <iostream>
#include "COntroller.h"

int main()
{
	ui menu = ui();
	while (true)
	{
		int option;
		menu.printMenu();
		std::cin >> option;

	}

	return 0;
}