#pragma once
#include <string>
using namespace std;
class Rower
{
public:
	Rower();
	~Rower();
	string model;
	string typ;
	string producent;
	int masa;
	void WypiszInformacje();
};

