/*
 * Archivo: casoprueba.h
 * Creado: 24/11/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: Como el nombre lo dice este archivo contiene los casos de prueba así como su documentación para posteriormente solo llamarlos al programa.
*/

#ifndef CASOPRUEBA_H_INCLUDED
#define CASOPRUEBA_H_INCLUDED

#include <iostream>
#include <string>
#include "heapaux.h"

void casosPrueba(Heap &tree){
  std::cout<<"========================================================================="std::endl;
  std::cout<<"\nCASOS DE PRUEBA"<<std::endl;
  std:cout<<"Bienvenido a los casos de prueba, usted visualizara su funcionamiento."<<std::endl;
  /*Caso correcto respetando rangos he indices*/
  //SALIDA ESPERADA: Impresión de la persona y sus datos.
  std::cout<<"Primer caso: "<<"1700001"<<std::endl;
  tree.heapSearch(1700001);

  /*Caso correcto repetando rangos y entradas*/
  //SALIDA ESPERADA: Impresión de la persona y sus datos.
  std::cout<<"Segundo caso: "<<"1706424"<<std::endl;
  tree.heapSearch(1706424);

  /*Caso erroneo debido al rango he indice inferior al esperado*/
  //SALIDA ESPERADA: Mensaje que aclara el fuera de rango.
  std::cout<<"Tercer caso: "<<"175"<<std::endl;
  tree.heapSearch(175);

  /*Caso incorrecto debido a que esta fuera del indice y rango*/
  //SALIDA ESPERADA: Mensaje que aclara el fuera de rango
  std::cout<<"Cuarto caso: "<<"0216545"<<std::endl;
  tree.heapSearch(0216545);

  /*Caso correcto, salida esperada debido a la prueba*/
  //SALIDA ESPERADA: Mensjae que diga "No hay ninguna persona con esa matricula en la base de datos".
  std::cout<<"Quinto caso: "<<"1711111"<<std::endl;
  tree.heapSearch(1711111);
}

#endif /*CASOPRUEBA_H_INCLUDED*/
