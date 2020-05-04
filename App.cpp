#include <iostream>
#include "App.h"

int main()
{
	return 0;
}

ui::ui()
{
	this->cont = AutoController::get_instanta();
}

void ui::printMenu()
{
	std::cout << "What would you like to do?\n";
	std::cout << "1: Find ID\n 2: Find All\n 3: save auto\n 4: update auto\n 5: delete auto\n";
}

void ui::run()
{
	int option;
	while (true)
	{
		this->printMenu();
		std::cin >> option;
		switch (option)
		{
			case 1:
			{
				// sort Autos
				// TODO
			}
			case 2:
			{
				// find Id
				// TODO
			}
			case 3:
			{
				// find All
				// TODO
			}
			case 4:
			{
				// add
				// TODO
			}
			case 5:
			{
				// update
				// TODO
			}
			case 6:
			{
				// delete 
				// TODO
			}
		}
	}
}
