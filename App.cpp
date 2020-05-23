#include "ui.h"
#include <iostream>
#include "COntroller.h"
#include "sorter.h"

int main()
{
	/*ui menu = ui();
	menu.run();*/
	Sorter* bubbleSorter = new BubbleSorter();
	Sorter* standardSorter = new SimpleSorter();

	AutoController* ctrl = AutoController::get_instanta();
	ctrl->setSorter(bubbleSorter);
	ctrl->sortAutos();
	
	ctrl->setSorter(standardSorter);
	ctrl->sortAutos();

	return 0;
}