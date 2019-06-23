#pragma once
#include <string>
using namespace std;
class Samochod
{
public:
	Samochod();
	~Samochod();
	string model;
	string producent;
	string typ;
	int rozmiarzalogi;
	int masa;
	void WypiszInformacje();
};

