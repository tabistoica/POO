#include <iostream>
#include <conio.h>
using namespace std;

/* 1. Să se realizeze un program care preia de la tastatură următoarele informaţii : nume, prenume,
   vârsta, adresă, telefonul unei persoane.După preluare, aceste informaţii trebuie afişate.  */

int main()
{
	char nume[20], prenume[20], adresa[30], tel[11];
	int varsta;
	
	cout << "numele: ";
	cin >> nume;
	cout << "prenumele: ";
	cin >> prenume;
	cout << "varsta: ";
	cin >> varsta;
	cout << "adresa: ";
	cin >> adresa;
	cout << "nr. de telefon: ";
	cin >> tel;
	cout << "datele sunt: " << nume << " " << prenume << " " << varsta << " " << adresa << " " << tel;
	_getch();
	return 0;
}