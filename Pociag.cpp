#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

Pociag::Pociag(string, string, int, int, int, int)
{
}


Pociag::~Pociag()
{
}

void Pociag::WypiszInformacje()
{
	cout << "=========================================" << endl;
	cout << "Model pociagu: " << model << endl;
	cout << "Producent: " << producent << endl;
	cout << "Szerokosc[m]: " << szerokosc << endl;
	cout << "Wysokosc[m]: " << wysokosc << endl;
	cout << "Masa[kg]: " << masa << endl;
	cout << "Max predkosc[km/h]: " << predkosc << endl;
	cout << "=========================================" << endl;
}
