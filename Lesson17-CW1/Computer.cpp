#include "Computer.h"

Computer::Computer(string name, float frequency, int OZU, bool DVD, float cost)
{
	this->name = name;
	this->frequency = frequency;
	this->OZU = OZU;
	this->DVD = DVD;
	this->cost = cost;	
}

int Computer::getOZU() const
{
	return OZU;
}

void Computer::show() const
{
	cout << "Name: " << name << endl;
	cout << "Frequency: " << frequency << "GHz" << endl;
	cout << "OZU: " << OZU << "Gb" << endl;
	cout << "DVD: " << DVD << endl;
	cout << "Cost: " << cost << "UAH" << endl;
}
