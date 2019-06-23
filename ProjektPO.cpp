#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int main()
{
	//====================CZOLGI===============
	Czolg czolg1;
	czolg1.model = "T-34";
	czolg1.panstwo = "Rosja";
	czolg1.producent = "Fabryka im. Malyszewa";
	czolg1.typ = "Czolg sredni";
	czolg1.rozmiarzalogi = 4;
	czolg1.masa = 26500;
	czolg1.predkosc = 53;	
	//=========================================
	Czolg czolg2;
	czolg2.model = "7TP";
	czolg2.panstwo = "Polska";
	czolg2.producent = "Panstwowe Zaklady Inzynierii";
	czolg2.typ = "Czolg lekki";
	czolg2.rozmiarzalogi = 3;
	czolg2.masa = 9400;
	czolg2.predkosc = 37;	
	//=========================================
	Czolg czolg3;
	czolg3.model = "M4 Sherman";
	czolg3.panstwo = "Stany Zjednoczone";
	czolg3.producent = "Lima Locomotive Company";
	czolg3.typ = "Czolg sredni";
	czolg3.rozmiarzalogi = 5;
	czolg3.masa = 30200;
	czolg3.predkosc = 39;	
	//=========================================
	
	//====================HELIKOPTERY==========
	Helikopter helikopter1;
	helikopter1.model = "Agusta A109";
	helikopter1.panstwo = "Wlochy";
	helikopter1.producent = "	Agusta";
	helikopter1.rozmiarzalogi = 2;
	helikopter1.masa = 2016;	
	//=========================================
	Helikopter helikopter2;
	helikopter2.model = "Eurocopter EC135";
	helikopter2.panstwo = "Niemcy";
	helikopter2.producent = "Airbus Helicopters";
	helikopter2.rozmiarzalogi = 6;
	helikopter2.masa = 1460;	
	//=========================================
	Helikopter helikopter3;
	helikopter3.model = "CH-47 Chinook";
	helikopter3.panstwo = "Stany Zjednoczone";
	helikopter3.producent = "Boeing Helicopters";
	helikopter3.rozmiarzalogi = 3;
	helikopter3.masa = 10185;	
	//=========================================
	
	//====================MOTOCYKLE============
	Motocykl motocykl1;
	motocykl1.model = "Suzuki GSX 1400";
	motocykl1.producent = "Suzuki";
	motocykl1.pojemnosc = 1402;
	motocykl1.rozmiarzalogi = 2;
	motocykl1.predkosc = 225;
	motocykl1.masa = 228;	
	//=========================================
	Motocykl motocykl2;
	motocykl2.model = "BMW R 51";
	motocykl2.producent = "BMW";
	motocykl2.pojemnosc = 494;
	motocykl2.rozmiarzalogi = 1;
	motocykl2.predkosc = 140;
	motocykl2.masa = 182;	
	//=========================================
	Motocykl motocykl3;
	motocykl3.model = "ZX-10R";
	motocykl3.producent = "Kawasaki";
	motocykl3.pojemnosc = 998;
	motocykl3.rozmiarzalogi = 2;
	motocykl3.predkosc = 213;
	motocykl3.masa = 170;	
	//=========================================
	
	//====================MOTOROWKI============
	Motorowka motorowka1;
	motorowka1.model = "BAJA 322";
	motorowka1.producent = "Mercruiser Racing Magnum";
	motorowka1.dlugosckadluba = 4;
	motorowka1.rozmiarzalogi = 4;
	motorowka1.predkosc = 109;
	motorowka1.masa = 3500;	
	//=========================================
	Motorowka motorowka2;
	motorowka2.model = "DarMar 505";
	motorowka2.producent = "Darmar";
	motorowka2.dlugosckadluba = 5;
	motorowka2.rozmiarzalogi = 6;
	motorowka2.predkosc = 75;
	motorowka2.masa = 550;	
	//=========================================
	Motorowka motorowka3;
	motorowka3.model = "Merry Fisher 725";
	motorowka3.producent = "Suzuki";
	motorowka3.dlugosckadluba = 7;
	motorowka3.rozmiarzalogi = 8;
	motorowka3.predkosc = 87;
	motorowka3.masa = 1988;	
	//=========================================
	
	//====================ODRZUTOWCE===========
	Odrzutowiec odrzutowiec1("", "", "", 0, 0, 0, 0, 0);
	odrzutowiec1.model = "Suchoj Superjet 100";
	odrzutowiec1.panstwo = "Rosja";
	odrzutowiec1.typ = "Samolot pasazerski";
	odrzutowiec1.dlugosc = 30;
	odrzutowiec1.szerokosc = 28;
	odrzutowiec1.wysokosc = 11;
	odrzutowiec1.masa = 42250;
	odrzutowiec1.zasieg = 4578;	
	//=========================================
	Odrzutowiec odrzutowiec2("", "", "", 0, 0, 0, 0, 0);
	odrzutowiec2.model = "F/A-18E/F Super Hornet";
	odrzutowiec2.panstwo = "Stany Zjednoczone";
	odrzutowiec2.typ = "Mysliwiec wielozadaniowy";
	odrzutowiec2.dlugosc = 18;
	odrzutowiec2.szerokosc = 14;
	odrzutowiec2.wysokosc = 5;
	odrzutowiec2.masa = 13864;
	odrzutowiec2.zasieg = 2346;	
	//=========================================
	
	//====================POCIAGI==============
	Pociag pociag1("", "", 0, 0, 0, 0);
	pociag1.model = "Pesa Link";
	pociag1.producent = "Pesa Bydgoszcz";
	pociag1.szerokosc = 3;
	pociag1.wysokosc = 4;
	pociag1.masa = 26500;
	pociag1.predkosc = 160;	
	//=========================================
	Pociag pociag2("", "", 0, 0, 0, 0);
	pociag2.model = "Shinkansen E954";
	pociag2.producent = "Shinkansen";
	pociag2.szerokosc = 4;
	pociag2.wysokosc = 3;
	pociag2.masa = 23500;
	pociag2.predkosc = 405;	
	//=========================================
	
	//====================PODUSZKOWCE==========
	Poduszkowiec poduszkowiec1("", 0, 0, 0);
	poduszkowiec1.model = "Anaconda";
	poduszkowiec1.rozmiarzalogi = 2;
	poduszkowiec1.masa = 300;
	poduszkowiec1.predkosc = 90;	
	//=========================================
	
	//====================ROWERY===============
	Rower rower1;
	rower1.model = "Hyde";
	rower1.producent = "Cube";
	rower1.typ = "Miejski";
	rower1.masa = 13;	
	//=========================================
	Rower rower2;
	rower2.model = "Rockville MTB Hardtail ";
	rower2.producent = "Serious";
	rower2.typ = "Gorski";
	rower2.masa = 15;	
	//=========================================
	Rower rower3;
	rower3.model = "SDURO Cross 4.0";
	rower3.producent = "HAIBIKE";
	rower3.typ = "Rower elektryczny crossowy";
	rower3.masa = 23;	
	//=========================================
	
	//====================SAMOCHODY============
	Samochod samochod1;
	samochod1.model = "Fiat 500 Nuova";
	samochod1.producent = "Fiat";
	samochod1.typ = "Samochod miejski";
	samochod1.rozmiarzalogi = 4;
	samochod1.masa = 865;	
	//=========================================
	Samochod samochod2;
	samochod2.model = "Arrinera Hussarya GT";
	samochod2.producent = "Arrinera Automotive";
	samochod2.typ = "Samochody sportowe";
	samochod2.rozmiarzalogi = 2;
	samochod2.masa = 1300;	
	//=========================================
	Samochod samochod3;
	samochod3.model = "Mercedes-Benz W222";
	samochod3.producent = "Mercedes-Benz";
	samochod3.typ = "Samochod luksusowy";
	samochod3.rozmiarzalogi = 5;
	samochod3.masa = 1945;
	//=========================================
	Sprzedawca sprzedawca1("Janusz", "Nowak", 0);
	//=========================================
	do
	{
		sprzedawca1.przedstaw();
		if (sprzedawca1.wybor == 1)
		{
			system("cls");
			czolg1.WypiszInformacje();
			czolg2.WypiszInformacje();
			czolg3.WypiszInformacje();
		}
		if (sprzedawca1.wybor == 2)
		{
			system("cls");
			helikopter1.WypiszInformacje();
			helikopter2.WypiszInformacje();
			helikopter3.WypiszInformacje();
		}
		if (sprzedawca1.wybor == 3)
		{
			system("cls");
			motocykl1.WypiszInformacje();
			motocykl2.WypiszInformacje();
			motocykl3.WypiszInformacje();
		}
		if (sprzedawca1.wybor == 4)
		{
			system("cls");
			motorowka1.WypiszInformacje();
			motorowka2.WypiszInformacje();
			motorowka3.WypiszInformacje();
		}
		if (sprzedawca1.wybor == 5)
		{
			system("cls");
			odrzutowiec1.WypiszInformacje();
			odrzutowiec1.WypiszInformacje();
		}
		if (sprzedawca1.wybor == 6)
		{
			system("cls");
			pociag1.WypiszInformacje();
			pociag2.WypiszInformacje();
		}
		if (sprzedawca1.wybor == 7)
		{
			system("cls");
			poduszkowiec1.WypiszInformacje();
		}
		if (sprzedawca1.wybor == 8)
		{
			system("cls");
			rower1.WypiszInformacje();
			rower2.WypiszInformacje();
			rower3.WypiszInformacje();
		}
		if (sprzedawca1.wybor == 9)
		{
			system("cls");
			samochod1.WypiszInformacje();
			samochod2.WypiszInformacje();
			samochod3.WypiszInformacje();
		}
	} while (sprzedawca1.wybor != 0);

	cout << "Dziekujemy za skorzystanie z naszych uslug, milego dnia :)" << endl << endl;

	return 0;
}