#include "pch.h"
#include <string>
#include <iostream>
using namespace std;


Helikopter::Helikopter()
{
	model = "";
	panstwo = "";
	producent = "";
	rozmiarzalogi = 0;
	masa = 0;
}


Helikopter::~Helikopter()
{
}

void Helikopter::WypiszInformacje()
{
	cout << "=========================================" << endl;
	cout << "Model helikoptera: " << model << endl;
	cout << "Panstwo produkujace: " << panstwo << endl;
	cout << "Producent: " << producent << endl;
	cout << "Max ilosc pasazerow: " << rozmiarzalogi << endl;
	cout << "Masa[kg]: " << masa << endl;
	cout << "=========================================" << endl;
}
