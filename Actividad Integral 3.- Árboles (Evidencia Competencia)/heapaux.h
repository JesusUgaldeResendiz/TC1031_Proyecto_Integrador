/*
 * Archivo: heapaux.h
 * Creado: 24/11/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: En este archivo creamos la clase Heap encargada de formar el arbol/array que se encargara de
 * el ordenamiento así como el almacenamiento de grupos de personas.
*/

#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED

#include <iostream>
#include <string>
#include <sstream>
#include "persona.h"

/*"Modificación" en la declaración de las variables de tipo unsigned int para agilizar la creación del script*/
unsigned int typedef uint;

/*Declaración de la clase tipo arbol Heap-min que contendra punteros de tipo Persona*/
class Heap{
	private:
		Persona *persona[50];
		uint size;
		uint parent(uint) const;
		uint left(uint) const;
		uint right(uint) const;
		void swap(uint,uint);
		void heapifyMatricula(uint);
		void heapifyPromedio(uint);
	public:
		Heap();
		~Heap();
		uint SIZE();
		void pushMatricula(Persona*);
		void popMatricula();
		void pushPromedio(Persona*);
		void popPromedio();
		bool heapSearch(long int);
		std::string toString() const;
};

/*Implementación de constructor y destructor*/
Heap::Heap(){
	size = 0;
}

Heap::~Heap(){}

/*Metodo publico size que nos regresa el tamaño del arbol Heap*/
uint Heap::SIZE(){
	return size;
}

/*Implementación de metodos auxilires en la construcción del arbol*/
uint Heap::parent(uint position) const {
	return ((position - 1)/2);
}

uint Heap::right(uint position) const {
	return ((2 * position) + 2);
}

uint Heap::left(uint position) const {
	return ((2 * position) +1);
}

void Heap::swap(uint i, uint j){
	Persona *aux = persona[i];
	persona[i] = persona[j];
	persona[j] = aux;
}

/*Metodo que nos servira para corregir anomalias en el arbol Heap min
 * siempre que se agregue por medio de matricula.*/
void Heap::heapifyMatricula(uint position){
	uint le = left(position);
	uint ri = right(position);
	uint min = position;

	if(le <= size && persona[le]->getMatricula() < persona[min]->getMatricula()){
		min = le;
	}
	if(ri <= size && persona[ri]->getMatricula() < persona[min]->getMatricula()){
		min = ri;
	}
	if(min != position){
		swap(position,min);
		heapifyMatricula(min);
	}
}

/*Metodo que nos servira para corregir anomalias en el arbol Heap min
 * siempre que se agregue por medio de promedio.*/
void Heap::heapifyPromedio(uint position){
	uint le = left(position);
	uint ri = right(position);
	uint min = position;

	if(le <= size && persona[le]->getPromedio() < persona[min]->getPromedio()){
		min = le;
	}
	if(ri <= size && persona[ri]->getPromedio() < persona[min]->getPromedio()){
		min = ri;
	}
	if(min != position){
		swap(position,min);
		heapifyPromedio(min);
	}
}

/*Add de nuestro arbol Heap min, que toma como llave la matricula de la persona.*/
void Heap::pushMatricula(Persona *p){
	uint position;
	position  = size;
	while(position > 0 && p->getMatricula() < persona[parent(position)]->getMatricula()){
		persona[position] = persona[parent(position)];
		position = parent(position);
	}
	persona[position] = p;
	size ++;
}

/*Remove de nuestro arbol Heap min el cual elimina el elemento superior o mejor dicho el padre, lo muestra y despues arregla el arbol*/
void Heap::popMatricula(){
	persona[0]->mostrarPersona();
	persona[0] = persona[--size];
	heapifyMatricula(0);
}

/*Add de nuestro arbol Heap min, que toma como llave el promedio de la persona.*/
void Heap::pushPromedio(Persona *p){
	uint position;
	position  = size;
	while(position > 0 && p->getPromedio() < persona[parent(position)]->getPromedio()){
		persona[position] = persona[parent(position)];
		position = parent(position);
	}
	persona[position] = p;
	size ++;
}

/*Remove de nuestro arbol Heap min el cual elimina el elemento superior o mejor dicho el padre, lo muestra y despues arregla el arbol*/
void Heap::popPromedio(){
	persona[0]->mostrarPersona();
	persona[0] = persona[--size];
	heapifyMatricula(0);
}

/*Implementación del metodo toString() el cual se encarga de convertir nuestro arbol a una cadena de caracteres con el fin de mostrar la información de cada registro*/
std::string Heap::toString() const {
	stringstream aux;
	aux<<"[";
	for(int i = 0; i < size; i++){
		aux<<" "<<persona[i]->getMatricula()<<" "<<persona[i]->getNombre()<<" "<<persona[i]->getApellidoP()<<" "<<persona[i]->getApellidoM()<<" "<<persona[i]->getCarrera()<<" "<<persona[i]->getSemestre()<<" "<<persona[i]->getPromedio()<<std::endl;
		if(i < size -1){
			aux<<",";
		}
	}
	aux<<"]";
	return aux.str();
}

/*Algoritmo de busqueda en nuestro arbol, que toma como modelo la busqueda secuencial*/
bool Heap::heapSearch(long int value){
	if(value < 1214630 || value > 1765532){
		std::cout<<"Valor fuera de rango, no hay ninguna persona acorde"<<std::endl<<std::endl;
		return false;
	}
	for(int i = 0; i < size; i++){
		if(value == persona[i]->getMatricula()){
			std::cout<<"La persona a sido encontrada, sus datos son los siguientes: "<<std::endl<<std::endl;
			persona[i]->mostrarPersona();
			std::cout<<"¡Busqueda realizada con exito!"<<std::endl<<std::endl;
			return true;
		}
	}
	std::cout<<"No hay ninguna persona con esa matricula en la base de datos"<<std::endl<<std::endl;
	return false;
}
#endif /*HEAP_H_INCLUDED*/
