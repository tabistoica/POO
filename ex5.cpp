#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

/*  După exemplele prezentate să se modifice programul astfel încât iniţierea atributelor
unui obiect de tip Student(nume, rol, adresa, cod postal) să se facă în constructor.Să
se creeze şi un destructor care se va apela explicit.Constructorul va primi ca parametri
cele patru valori.  */

class Student
{
public:
	Student(string n,string r,string a, int c);
	void afisare()
	{
		cout << "Nume: " << nume << endl;
		cout << "Rol: " << rol << endl;
		cout << "Adresa: " << adresa << endl;
		cout << "Cod postal " << cod_postal << endl;
	}
	~Student();

private:
	string nume, rol, adresa;
	int cod_postal;
};

Student::Student(string n, string r, string a, int c)
{
	nume = n;
	rol = r;
	adresa = a;
	cod_postal = c;
}

Student::~Student()
{
	cout << "Destructor:Eliberare memorie!" << endl;
}

int main()
{
	Student s("Daniel","asistent","Titus 12",123456);
	s.afisare();
	s.~Student();

	_getch();
	return 0;
}