/*
 * Archivo: ordena.h
 * Creado: 19/11/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: Este archivo posee los algoritmos de busqueda y ordenamiento así como el temporizador del proyecto.
*/

#ifndef ORDENA_H_INCLUDED
#define ORDENA_H_INCLUDED

#include <vector>
#include <windows.h>
#include "persona.h"

/*Algoritmo de temporizador para aumentar estilo en el programa, el timer por as� decirlo es de 1.5 segundos el Sleep funciona en milisegundos */
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
int busqBinaria(std::vector<T> &v, int num){
  int mid = 0;
  int bot = 0;
  int top = v.size() - 1;

  while(bot <= top){
    mid = (top + bot)/2;
    if(num ==v[mid].getMatricula()){
      return mid;
    }
    else if(num <= v[mid].getMatricula()){
      top = mid -1;
    }
    else if(num >= v[mid].getMatricula()){
      bot = mid + 1;
    }
  }

  return bot -1;
}

#endif /*ORDENA_H_INCLUDED*/
