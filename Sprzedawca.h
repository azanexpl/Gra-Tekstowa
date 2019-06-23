#pragma once
#include <string>
using namespace std;
class Sprzedawca
{
public:
	Sprzedawca(string, string, int);
	~Sprzedawca();
	string imie;
	string nazwisko;
	int wybor;
	void przedstaw();
};

