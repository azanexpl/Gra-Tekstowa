#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

Rower::Rower()
{
	this->model = "";
	this->typ = "";
	this->producent = "";
	this->masa = 0;
}


Rower::~Rower()
{
}

void Rower::WypiszInformacje()
{
	cout << "=========================================" << endl;
	cout << "Model roweru: " << model << endl;
	cout << "Typ roweru: " << typ << endl;
	cout << "Producent: " << producent << endl;
	cout << "Masa[kg]: " << masa << endl;
	cout << "=========================================" << endl;
}
