#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

Odrzutowiec::Odrzutowiec(string, string, string, int, int, int, int, int)
{
}

Odrzutowiec::~Odrzutowiec()
{
}

void Odrzutowiec::WypiszInformacje()
{
	cout << "=========================================" << endl;
	cout << "Model odrzutowca: " << model << endl;
	cout << "Panstwo produkujace: " << panstwo << endl;
	cout << "Typ odrzutowca: " << typ << endl;
	cout << "Dlugosc[m]: " << dlugosc << endl;
	cout << "Wysokosc[m]: " << wysokosc << endl;
	cout << "Szerokosc[m]: " << szerokosc << endl;
	cout << "Masa[kg]: " << masa << endl;
	cout << "Zasieg lotu[km]" << zasieg << endl;
	cout << "=========================================" << endl;
}
