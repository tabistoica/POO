#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

/*  După exemplul prezentat anterior să se realizeze un program care conţine o clasă
denumită Carte cu următoarele variabile : titlu, nume autori, editură, an publicare.
Programul va trebui să permită adăugarea unor înregistrări şi afişarea acestora.
Iniţializarea variabilelor se va face prin intermediul constructorului.  */

class carte
{
public:
	//definire constructor
	carte(string t, string n, string e, int a);
	void afisare_date()
	{
		cout << "Titlu: " << titlu << endl;
		cout << "Nume autor: " << nume_aut << endl;
		cout << "Editura: " << editura << endl;
		cout << "An publicare: " << an_pub << endl;
	}

private:
	string titlu, nume_aut, editura;
	int an_pub;
};

//constructor
carte::carte(string t, string n, string e, int a)
{
	titlu = t;
	nume_aut = n;
	editura = e;
	an_pub = a;
}

int main()
{
	string tit, num, ed;
	int an;

	//crearea unui obiect cu var citite de la tastatura
	cout << "Titlu: ";
	getline(cin, tit);
	cout << "Nume autor: ";
	getline(cin, num);
	cout << "Editura: ";
	getline(cin, ed);
	cout << "An publicare: ";
	cin >> an;

	carte c(tit, num, ed, an);
	c.afisare_date();

	_getch();
	return 0;
}