#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

Sprzedawca::Sprzedawca(string imie, string nazwisko, int wybor)
{
	cout << "Witam, nazywam sie " << imie << " " << nazwisko << " i jestem wlascicielem sklepu z pojazdami wszelkiej masci, w czym moge pomoc? :)" << endl << endl;
}

Sprzedawca::~Sprzedawca()
{
}

void Sprzedawca::przedstaw()
{
	cout << "[1] Prosze przedstawic mi czolgi." << endl;
	cout << "[2] Prosze przedstawic mi helikoptery." << endl;
	cout << "[3] Prosze przedstawic mi motocykle." << endl;
	cout << "[4] Prosze przedstawic mi motorowki." << endl;
	cout << "[5] Prosze przedstawic mi odrzutowce." << endl;
	cout << "[6] Prosze przedstawic mi pociagi." << endl;
	cout << "[7] Prosze przedstawic mi poduszkowce." << endl;
	cout << "[8] Prosze przedstawic mi rowery." << endl;
	cout << "[9] Prosze przedstawic mi samochody." << endl;
	cout << "[0] Nic mnie nie interesuje, do widzenia." << endl;
	cout << "Wybierz opcje: ";
	cin >> this->wybor;
}