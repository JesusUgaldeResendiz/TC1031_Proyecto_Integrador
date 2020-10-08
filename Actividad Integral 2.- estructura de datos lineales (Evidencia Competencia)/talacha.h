/*
 * Archivo: talacha.h
 *  Creado el: 07/10/2020
 *  Autor: Jesùs Ugalde Reséndiz
 *  Matería: TC1031
 */

#ifndef TALACHA_H_INCLUDED
#define TALACHA_H_INCLUDED

#include<iostream>
#include "sorts.h"
#include "lib.h"

using namespace std;

template <class T>
void busqRango(std::vector<T>&v, int head, int tail){
  int BeginIndex;
  int FinalIndex;

  BeginIndex = busqBinaria(v, head);
  FinalIndex = busqBinaria(v, tail);

  for(int i = BeginIndex; i <= FinalIndex; i++){
    v[i].mostrarPersona();
  }
}

template <class T>
void casoPrueba(std::vector<T> &v){
  cout<<"Rango de busqueda:\n[1706424 - 10]"<<endl;
  busqRango(v,1706424,10);

  cout<<"\nRango de busqueda\n[1700000 - 10000]"<<endl;
  busqRango(v,100000,10000);

  cout<<"\nRango de busqueda\n[1700001-25]"<<endl;
  busqRango(v,1700001,25);

}





#endif //TALACHA_H_INCLUDED
