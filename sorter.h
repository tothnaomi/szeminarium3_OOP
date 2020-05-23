#pragma once
#include <vector>
#include "Auto.h"
#include "utils.h"
#include <algorithm>
using namespace std;

class Sorter
{
public:
	virtual void sort(vector<Auto*> &autos) = 0;
};

class BubbleSorter : public Sorter
{
public :
	void sort(vector<Auto*> &autos) override;
};

class SimpleSorter: public Sorter
{
	void sort(vector<Auto*> &autos) override;
};