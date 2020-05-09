#include <iostream>
#include "ui.h"

ui::ui()
{
	this->cont = AutoController::get_instanta();
}

void ui::printMenu()
{
	std::cout << "What would you like to do?\n";
	std::cout << "1: Sort Autos\n 2: Find ID\n 3: Find All\n 4: save auto\n 5: update auto\n 6: delete auto\n 7:break\n";
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
				this->cont->sortAutos();
			}
			case 2:
			{
				// find Id
				int id;
				std::cout << "Give me an ID:";
				std::cin >> id;
				this->cont->findAutoId(id);
			}
			case 3:
			{
				// find All
				this->cont->findAll();
			}
			case 4:
			{
				// add
				int id;
				std::string marke, modell;
				std::cout << "Give me an ID:";
				std::cin >> id;
				std::cout << endl << "Give me the marke:";
				std::cin >> marke;
				std::cout << endl << "Give me the model:";
				std::cin >> modell;
				Auto newAuto = Auto(id, marke, modell);
				this->cont->saveAuto(newAuto);
			}
			case 5:
			{
				// update
				int id;
				std::string marke, modell;
				std::cout << "Give me an ID:";
				std::cin >> id;
				std::cout << endl << "Give me the marke:";
				std::cin >> marke;
				std::cout << endl << "Give me the model:";
				std::cin >> modell;
				Auto newAuto = Auto(id, marke, modell);
				this->cont->updateAuto(newAuto);
			}
			case 6:
			{
				// delete 
				int id;
				std::cout << "Give me the id the vehicle:";
				std::cin >> id;
				this->cont->deleteAuto(id);
			}
			case 7:
				break;
		}
	}
}
