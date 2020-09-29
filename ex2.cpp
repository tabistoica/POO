#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
/*  2. Să se realizeze două clase : Clasa Sofer, Clasa Masina.
Clasa Sofer va conține următoarele variabile : nume sofer, cnp, varsta, adresa
Clasa Mașina va conține următoarele variabile : producător, model, an fabricație, sofer
Se vor crea pentru cele două clase funcții de citire și de afișare.  */

class sofer
{
public:
	void initializare(string,string,int,string);
	void afisare();

private:
	string nume;
	string cnp;
	int varsta;
	string adresa;
};

inline void sofer::initializare(string n, string c, int v, string a)
{
	nume = n;
	cnp = c;
	varsta = v;
	adresa = a;
}

inline void sofer::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "CNP: " << cnp << endl;
	cout << "varsta: " << varsta << endl;
	cout << "Adresa: " << adresa << endl;
}

class masina
{
public:
	void initializare(string, string, int, sofer);
	void afisare();

private:
	string producator;
	string model;
	int an;
	sofer sof;
};

inline void masina::initializare(string p, string m, int a, sofer s)
{
	producator = p;
	model = m;
	an = a;
	sof = s;
}

inline void masina::afisare()
{
	cout << "Producator: " << producator << endl;
	cout << "Model: " << model << endl;
	cout << "An fabricatie: " << an << endl;
	sof.afisare();
}

int main()
{
	sofer sofer1;
	masina masina1;

	string nume1, cnp1, adresa1;
	int varsta1;
	string producator1, model1;
	int an1;

	cout << "Date despre sofer" << endl;
	cout << "Nume1: ";
	cin >> nume1;
	cout << "cnp1: ";
	cin >> cnp1;
	cout << "Varsta1: ";
	cin >> varsta1;
	cout << "Adresa1: ";
	cin >> adresa1;

	cout << "Date despre masina" << endl;
	cout << "Producator1: ";
	cin >> producator1;
	cout << "Model1: ";
	cin >> model1;
	cout << "An fabricatie: ";
	cin >> an1;

	sofer1.initializare(nume1, cnp1, varsta1, adresa1);
	masina1.initializare(producator1, model1, an1, sofer1);

	cout << "Afisare" << endl;
	masina1.afisare();

	_getch();
	return 0;
}