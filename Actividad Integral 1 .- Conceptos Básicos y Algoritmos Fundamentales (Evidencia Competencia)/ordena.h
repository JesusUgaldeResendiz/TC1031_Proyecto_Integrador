/*
 * Archivo: ordena.h
 * Creado: 19/11/2020
 * Autor: JesÃºs Ugalde ResÃ©ndiz
 * DescripciÃ³n: Este archivo posee los algoritmos de busqueda y ordenamiento asÃ­ como el temporizador del proyecto.
*/

#ifndef ORDENA_H_INCLUDED
#define ORDENA_H_INCLUDED

#include <vector>
#include <windows.h>
#include "persona.h"

/*Algoritmo de temporizador para aumentar estilo en el programa, el timer por asï¿½ decirlo es de 1.5 segundos el Sleep funciona en milisegundos */
void clock(){
	 int acum = 0;
     while(acum < 3){
     	Sleep(1500);
        cout<<".";
        acum++;
    }
}

/*Intercambio de dos valores en el contenedor*/
template <class T>
void swap(std::vector<T> &v, int i, int j){
  T aux = v[i];
  v[i] = v[j];
  v[j] = aux;
}

/*Algoritmo de ordenamiento por el metodo burbuja tipo plantilla para funcionar con el atributo de matricula de la clase Persona*/
template <class T>
std::vector<T> bubbleSort(std::vector<T> &v){
  for(int i = v.size() - 1; i>0;i--){
    for(int j = 0; j<i; j++){
      if(v[j].getMatricula() > v[j+1].getMatricula()){
        swap(v,j,j+1);
      }
    }
  }
  return v;
}

/*Algoritmo de busqueda binaria dependiente del atributo de matricula proveniente de la clase Persona*/
template <class T>
bool busqSequential(std::vector<T> &v, int value){
  if(value < 1214630 || value > 1765532){
		std::cout<<"Valor fuera de rango, no hay ninguna persona acorde"<<std::endl<<std::endl;
		return false;
	}
  for(int i = 0; i < v.size(); i++){
  	if(value == v[i].getMatricula()){
  		v[i].mostrarPersona();
  		return true;
	  }
  }
  std::cout<<"La persona no se encuentra en el grupo"<<std::endl;
  return false;
}

#endif /*ORDENA_H_INCLUDED*/
