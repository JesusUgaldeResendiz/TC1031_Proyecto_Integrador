/*
 * Archivo: persona.h
 * Creado: 19/11/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: Clase persona que se encargara de convertir en objetos al flujo de entrada.
*/

#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
  int matricula;
  string nombre;
  string apellidoP;
  string apellidoM;
  string carrera;
  string semestre;
  int promedio;
public:
  Persona();
  Persona(int,string,string,string,string,string,int);
  ~Persona();
  int getMatricula();
  string getNombre();
  string getApellidoP();
  string getApellidoM();
  string getCarrera();
  string getSemestre();
  int getPromedio();
  void mostrarPersona();
};

Persona::Persona(){
  matricula = 0;
  nombre=  " ";
  apellidoP = " ";
  apellidoM = " ";
  carrera = " ";
  semestre = " ";
  promedio = 0.0;
}

Persona::Persona(int enrollment, string name, string aP, string aM, string carrer, string semester, int prom){
  matricula = enrollment;
  nombre = name;
  apellidoP = aP;
  apellidoM = aM;
  carrera = carrer;
  semestre = semester;
  promedio = prom;
}

Persona::~Persona(){}

int Persona::getMatricula(){
  return matricula;
}

string Persona::getNombre(){
  return nombre;
}

string Persona::getApellidoP(){
  return apellidoP;
}

string Persona::getApellidoM(){
  return apellidoM;
}

string Persona::getCarrera(){
  return carrera;
}

string Persona::getSemestre(){
  return semestre;
}

int Persona::getPromedio(){
	return promedio;
}

void Persona::mostrarPersona(){
  cout<<matricula<<" "<<nombre<<" "<<apellidoP<<" "<<apellidoM<<" "<<carrera<<" "<<semestre<<" "<<promedio<<endl;
}

 #endif /*PERSONA_H_INCLUDED*/
