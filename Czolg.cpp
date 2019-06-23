#include "pch.h"
#include <string>
#include <iostream>
using namespace std;


Czolg::Czolg()
{
	model = "";
	panstwo = "";
	producent = "";
	typ = "";
	rozmiarzalogi = 0;
	masa = 0;
	predkosc = 0;
}


Czolg::~Czolg()
{
}

void Czolg::WypiszInformacje()
{
	cout << "=========================================" << endl;
	cout << "Model czolgu: " << model << endl;
	cout << "Panstwo produkujace: " << panstwo << endl;
	cout << "Producent: " << producent << endl;
	cout << "Typ czolgu: " << typ << endl;
	cout << "Max ilosc pasazerow: " << rozmiarzalogi << endl;
	cout << "Masa[kg]: " << masa << endl;
	cout << "Max predkosc[km/h]: " << predkosc << endl;
	cout << "=========================================" << endl;
}
