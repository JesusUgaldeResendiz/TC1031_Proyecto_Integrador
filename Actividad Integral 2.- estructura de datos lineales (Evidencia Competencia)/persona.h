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

/*Declaración de la clase persona*/
class Persona {
private:
  int numLista;
  int matricula;
  string nombre;
  string apellidoP;
  string apellidoM;
  string carrera;
  string semestre;
public:
  Persona();
  Persona(int,int,string,string,string,string,string);
  ~Persona();
  int getNumLista();
  int getMatricula();
  string getNombre();
  string getApellidoP();
  string getApellidoM();
  string getCarrera();
  string getSemestre();
  void mostrarPersona();
};

Persona::Persona(){
  numLista = 0;
  matricula = 0;
  nombre=  " ";
  apellidoP = " ";
  apellidoM = " ";
  carrera = " ";
  semestre = " ";
}

/*Implementación de el constructor y destructor de los objetos Persona*/
Persona::Persona(int numL, int enrollment, string name, string aP, string aM, string carrer, string semester){
  numLista = numL;
  matricula = enrollment;
  nombre = name;
  apellidoP = aP;
  apellidoM = aM;
  carrera = carrer;
  semestre = semester;
}

Persona::~Persona(){}

/*Implementación de los metodos getters de la clase Persona*/
int Persona::getNumLista(){
  return numLista;
}

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

/*Metodo que hace un muestreo de los atributos de la persona*/
void Persona::mostrarPersona(){
  cout<<numLista<<" "<<matricula<<" "<<nombre<<" "<<apellidoP<<" "<<apellidoM<<" "<<carrera<<" "<<semestre<<endl;
}

 #endif /*PERSONA_H_INCLUDED*/
