/*
 * Archivo: casoPrueba.h
 * Creado: 04/12/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: Archivo header que se manda llamar para correr los casos de prueba en el archivo fuente
 * la documentación correcta y completa de estos se encuentra en el README.md del repositorio.
*/
#ifndef CASOPRUEBA_H_INCLUDED
#define CASOPRUEBA_H_INCLUDED

#include <iostream>
#include "radix.h"

void printCase(int arr[], int n){
  std::cout<<"{ ";
  for (int i = 0; i < n; i++){
    std::cout<<arr[i] <<" ";
  }
  std::cout<<"}";
}

void casosPrueba(){
  std::cout<<"\nPrimer caso: "<<std::endl;
  int arg1[] = {56, 23, 2, 45, 25, 36, 7};
  int n1 = sizeof(arg1) / sizeof(arg1[0]);
  radixSort(arg1,n1);
  printCase(arg1,n1); std::cout<<"\n"<<std::endl;

  std::cout<<"Segundo caso: "<<std::endl;
  int arg2[] = {1, 22, 6, 3, 5, 1, 8, 49, 6, 0, 14};
  int n2 = sizeof(arg2) / sizeof(arg2[0]);
  radixSort(arg2,n2);
  printCase(arg2,n2); std::cout<<"\n"<<std::endl;

  std::cout<<"Tercer caso: "<<std::endl;
  int arg3[] = {12, 1, 3};
  int n3 = sizeof(arg3) / sizeof(arg3[0]);
  radixSort(arg3,n3);
  printCase(arg3,n3); std::cout<<"\n"<<std::endl;

  std::cout<<"Cuarto caso: "<<std::endl;
  int arg4[] = {1, 0, 10, 11, 25, 2};
  int n4 = sizeof(arg4) / sizeof(arg4[0]);
  radixSort(arg4,n4);
  printCase(arg4,n4); std::cout<<"\n"<<std::endl;

  std::cout<<"Quinto caso: "<<std::endl;
  int arg5[] = {986522, 12336, 5486, 241, 58966, 25436, 984, 154};
  int n5 = sizeof(arg5) / sizeof(arg5[0]);
  radixSort(arg5,n5);
  printCase(arg5,n5); std::cout<<"\n"<<std::endl;
}
#endif /*CASOPRUEBA_H_INCLUDED*/
