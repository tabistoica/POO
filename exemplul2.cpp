#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
class Persoana
{
public:
	Persoana() {}
	Persoana(string n, string p, int v);
	void afisare()
	{
		cout << "Nume: " << nume << endl;
		cout << "Prenume: " << prenume << endl;
		cout << "Varsta: " << varsta;
	};

private:
	string nume;
	string prenume;
	unsigned int varsta;
};

Persoana::Persoana(string n, string p, int v)
{
	nume = n;
	prenume = p;
	varsta = v;
}

int main()
{
	string nume1, prenume1;
	int varsta1;

	cout << "Nume1: "; getline(cin, nume1);
	cout << "Prenum1: "; getline(cin, prenume1);
	cout << "Varsta1: ";
	cin >> varsta1;

	Persoana p(nume1, prenume1, varsta1);
	p.afisare();

	Persoana p1("Ionescu", "Dan", 30);
	p1.afisare();

	_getch();
	return 0;
}