#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

Poduszkowiec::Poduszkowiec(string, int, int, int)
{
}


Poduszkowiec::~Poduszkowiec()
{
}

void Poduszkowiec::WypiszInformacje()
{
	cout << "=========================================" << endl;
	cout << "Model poduszkowca: " << model << endl;
	cout << "Max ilosc pasazerow: " << rozmiarzalogi << endl;
	cout << "Masa[kg]: " << masa << endl;
	cout << "Max predkosc[km/h]: " << predkosc << endl;
	cout << "=========================================" << endl;
}
