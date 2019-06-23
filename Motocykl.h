#pragma once
#include <string>
using namespace std;
class Motocykl
{
public:
	Motocykl();
	~Motocykl();
	string model;
	string producent;
	int pojemnosc;
	int rozmiarzalogi;
	int predkosc;
	int masa;
	void WypiszInformacje();
};

