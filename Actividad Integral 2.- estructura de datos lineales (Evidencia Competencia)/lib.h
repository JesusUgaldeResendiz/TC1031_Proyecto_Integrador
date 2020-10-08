/*
 * Archivo: lib.h
 *  Creado el: 07/10/2020
 *  Autor: Jesùs Ugalde Reséndiz
 *  Matería: TC1031
 */

#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Persona
{
private:
  int matricula;
  string nombre;
  string carrera;
  string semestre;

public:
  Persona();
  Persona(int,string,string,string);
  ~Persona();
  int getMatricula();
  string getNombre();
  string getCarrera();
  string getSemestre();
  void mostrarPersona();

};

Persona::Persona(){
  matricula = 0;
  nombre = "No asignado";
  carrera = "No asignado";
  semestre = "No asignado";
}

Persona::Persona(int matricula, string nombre, string carrera, string semestre){
  this->matricula = matricula;
  this->nombre = nombre;
  this->carrera = carrera;
  this->semestre = semestre;
}

Persona::~Persona(){

}

int Persona::getMatricula(){
  return matricula;
}

string Persona::getNombre(){
  return nombre;
}

string Persona::getCarrera(){
  return carrera;
}

string Persona::getSemestre(){
  return semestre;
}

void Persona::mostrarPersona(){
  cout<<"Matricula: "<<matricula<<endl;
  cout<<"Nombre: "<<nombre<<endl;
  cout<<"Carrera: "<<carrera<<endl;
  cout<<"Semestre: "<<semestre<<endl;
}













#endif //LIB_H_INCLUDED
