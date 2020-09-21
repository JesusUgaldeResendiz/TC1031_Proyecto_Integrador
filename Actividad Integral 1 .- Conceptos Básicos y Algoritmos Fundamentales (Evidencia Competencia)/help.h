#ifndef HELP_H_INCLUDED
#define HELP_H_INCLUDED

#include <string>
using namespace std;

class Registros
{
private:
	int matricula;
	string nombre, carrera, status;
public:
	Registros();
	Registros(int,string,string,string);
	int getMatricula();
	string getNombre();
	string getCarrera();
	string getStatus();
};

Registros::Registros()
{
	matricula = 0;
	nombre = " ";
	carrera = " ";
	status = " ";
}

Registros::Registros(int m, string n, string c, string s)
{
	matricula = m;
	nombre = n;
	carrera = c;
	status = s;
}

int Registros::getMatricula()
{
	return matricula;
}

string Registros::getNombre()
{
	return nombre;
}

string Registros::getCarrera()
{
	return carrera;
}

string Registros::getStatus()
{
	return status;
}


#endif //HELP_H_INCLUDED
