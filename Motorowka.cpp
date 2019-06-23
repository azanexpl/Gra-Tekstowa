#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

Motorowka::Motorowka()
{
	model = "";
	producent = "";
	rozmiarzalogi = 0;
	dlugosckadluba = 0;
	masa = 0;
	predkosc = 0;
}


Motorowka::~Motorowka()
{
}

void Motorowka::WypiszInformacje()
{
	cout << "=========================================" << endl;
	cout << "Model motorowki: " << model << endl;
	cout << "Producent: " << producent << endl;
	cout << "Max ilosc pasazerow: " << rozmiarzalogi << endl;
	cout << "Dlugosc kadluba[m]: " << dlugosckadluba << endl;
	cout << "Masa[kg]: " << masa << endl;
	cout << "Max predkosc[km/h]: " << predkosc << endl;
	cout << "=========================================" << endl;
}
