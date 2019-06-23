#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

Samochod::Samochod()
{
	this->model = "";
	this->producent = "";
	this->typ = "";
	this->rozmiarzalogi = 0;
	this->masa = 0;
}


Samochod::~Samochod()
{
}

void Samochod::WypiszInformacje()
{
	cout << "=========================================" << endl;
	cout << "Model samochodu: " << model << endl;
	cout << "Producent: " << producent << endl;
	cout << "Typ samochodu: " << typ << endl;
	cout << "Max ilosc pasazerow: " << rozmiarzalogi << endl;
	cout << "Masa[kg]: " << masa << endl;
	cout << "=========================================" << endl;
}
