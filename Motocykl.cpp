#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

Motocykl::Motocykl()
{
	model = "";
	producent = "";
	pojemnosc = 0;
	rozmiarzalogi = 0;
	masa = 0;
	predkosc = 0;
}


Motocykl::~Motocykl()
{
}

void Motocykl::WypiszInformacje()
{
	cout << "=========================================" << endl;
	cout << "Model motocykla: " << model << endl;
	cout << "Producent: " << producent << endl;
	cout << "Pojemnosc silnika[cm^3]: " << pojemnosc << endl;
	cout << "Max ilosc pasazerow: " << rozmiarzalogi << endl;
	cout << "Max predkosc[km/h]: " << predkosc << endl;
	cout << "Masa[kg]: " << masa << endl;
	cout << "=========================================" << endl;
}
