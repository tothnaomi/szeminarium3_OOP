#include "sorter.h"

void BubbleSorter::sort(vector<Auto*> &autos)
{
	// Bubble Sort
	bool sorted = false;
	while (not sorted)
	{
		sorted = true;
		for (int i = 1; i < autos.size(); i++)
		{
			if (autos[i - 1] > autos[i])
			{
				std::swap(autos[i - 1], autos[i]);
				sorted = false;
			}
		}
	}
}

void SimpleSorter::sort(vector<Auto*>& autos)
{
	std::sort(autos.begin(), autos.end(), sortByMarke());
}
