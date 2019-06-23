#pragma once
#include <string>
using namespace std;
class Odrzutowiec
{
public:
	Odrzutowiec(string, string, string, int, int, int, int, int);
	~Odrzutowiec();
	string model;
	string panstwo;
	string typ;
	int dlugosc{};
	int wysokosc{};
	int szerokosc{};
	int masa{};
	int zasieg{};
	void WypiszInformacje();
};

