#pragma once
#include <string>
using namespace std;
class Motorowka
{
public:
	Motorowka();
	~Motorowka();
	string model;
	string producent;
	int rozmiarzalogi;
	int dlugosckadluba;
	int masa;
	int predkosc;
	void WypiszInformacje();
};

