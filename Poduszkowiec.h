#pragma once
#include <string>
using namespace std;
class Poduszkowiec
{
public:
	Poduszkowiec(string, int, int, int);
	~Poduszkowiec();
	string model;
	int rozmiarzalogi;
	int masa;
	int predkosc;
	void WypiszInformacje();
};

