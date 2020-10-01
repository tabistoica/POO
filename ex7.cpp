#include<iostream>
#include<conio.h>
using namespace std;

/*  După exemplele prezentate să se creeze o clasa Profesor care are ca şi variabile : nume,
departament, grad didactic, vechime.Programul va permite adăugarea de noi profesori
si afişarea informaţiilor despre aceştia.  */

class Profesor
{
	char nume[20], dep[20];
	int grad, vechime;
public:
	Profesor();//Constructor
	void citire_date();
	void afisare_date();
};
//constructor
Profesor::Profesor()
{
	cout << "Constructor: Informatiile despre Profesor:" << endl;
}
// funcție pentru citirea informațiilor
void Profesor::citire_date()
{
	cout << "Nume:";
	cin >> nume;
	cout << "Departament:";
	cin >> dep;
	cout << "Grad:";
	cin >> grad;
	cout << "Vechime: ";
	cin >> vechime;
}
//funcție pentru afișarea datelor
void Profesor::afisare_date()
{
	cout << "Nume :" << nume << endl;
	cout << "Departament:" << dep << endl;
	cout << "Grad:" << grad << endl;
	cout << "Vechime :" << vechime;
}

void main()
{
	Profesor p;
	//citirea informațiilor
	p.citire_date();
	//afișarea informațiilor
	p.afisare_date();
	_getch();
}