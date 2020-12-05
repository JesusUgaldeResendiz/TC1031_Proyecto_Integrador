/*
 * Archivo: appextra.h
 * Creado: 04/12/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: Este archivo contiene la función principal que vamos a correr en un archivo fuente
 * posterior, la función que vamos a correr sera de tipo void, de nombre: extra.
*/
#ifndef APPEXTRA_H_INCLUDED
#define APPEXTRA_H_INCLUDED

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include "radix.h"
#include "casoPrueba.h"

using namespace std;

void extra(){
  /*Variables de lectura y escritura de archivos*/
  std::ifstream input("valores.txt");
  std::ofstream output;

  /*Variable encargada del flujo de entrada*/
  int array[50];
  int i, value;
  std::string line, stringArray[50];

  /*Implementando lectura del archivo, a nueva estructura, nueva forma de lectura*/
  std::cout<<"Introduciendo flujo de archivo: 'valores.txt' "<<std::endl;
  std::cout<<"Flujo leido con exito, su contenido es el siguiente: "<<std::endl;
    while(getline(input,line)){
      std::stringstream aux(line);
      for(i =0; i < 50; i++){
        getline(aux,stringArray[i],',');
        value = stoi(stringArray[i]);
        array[i] = value;
        std::cout<<i+1<<".- "<<array[i]<<std::endl;
      }
  }

  /*Se realiza el ordenamiento por medio de nuestr radixSort*/
  std::cout<<"\nEl flujo a sido recibido con exito, ahora procederemos a ordenarlo\n"<<std::endl;
  int n = sizeof(array)/sizeof(array[0]);
  radixSort(array,n);
  printArray(array,n);

  /*Una vez que se realiza y se imprime el ordenamiento, nos dirigimos a guardar este y crear un nuevo archivo de flujo de salida*/
  std::cout<<"\n¡Ordenamiento realizado con exito!"<<std::endl;
  std::cout<<"\nRecabando el flujo de entrada ordenado en un nuevo archivo..."<<std::endl;
  std::cout<<"ARCHIVO 'outflow.txt' CREADO DE MANERA SATISFACTOTIA"<<std::endl;

  output.open("outflow.txt");
  for(int i = 0; i < n; i++){
    output<<i + 1<<".- "<<array[i]<<std::endl;
  }

  int opcion;
  /*Por ultimo, aquí en este pequeño menu ponemos los casos de prueba, estos se llaman desde la libreria casoPrueba.h, el resultado esperado se encuentra
   *en el README.md del repositorio*/
  std::cout<<"\nAhora por favor seleccione una opción:"<<std::endl;
  std::cout<<"Presione:\n(1) Si quiere revisar casos de prueba y luego terminar el programa \n(2) TERMINAR EL PROGRAMA DIRECTAMENTE\n"<<std::endl;
  cin>>opcion;

  if(opcion == 1){
    casosPrueba();
    std::cout<<"¡HASTA LA PROXIMA!"<<std::endl;
  }

  if(opcion == 2)
    std::cout<<"¡HASTA LA PROXIMA!"<<std::endl;


}

#endif /*APPEXTRA_H_INCLUDED*/
