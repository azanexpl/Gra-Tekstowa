#pragma once
#include <string>
using namespace std;
class Helikopter
{
public:
	Helikopter();
	~Helikopter();
	string model;
	string panstwo;
	string producent;
	int rozmiarzalogi;
	int masa;
	void WypiszInformacje();
};

