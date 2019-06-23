#pragma once
#include <string>
using namespace std;
class Pociag
{
public:
	Pociag(string, string, int, int, int, int);
	~Pociag();
	string model;
	string producent;
	int szerokosc;
	int wysokosc;
	int predkosc;
	int masa;
	void WypiszInformacje();
};

