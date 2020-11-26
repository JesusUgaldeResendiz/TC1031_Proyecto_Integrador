/*
 * Archivo: pruebas.h
 * Creado: 19/11/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: Aquí estan los casos de prueba y la busqueda por rangos que se efectuaran en el programa.
*/

#ifndef PRUEBA_H_INCLUDED
#define PRUEBA_H_INCLUDED

#include <vector>
#include "persona.h"
#include "ordena.h"

using namespace std;

/*Implementaci�n de la busqueda por rangos en el programa, mientras no regrese texto significa que la busqueda a sido satisfactoria*/
template <class T>
bool busqRangos(std::vector<T> &v, int rangoI, int rangoF){
  /*Rango menor y rango mayor de busqueda no seran buscados*/
  if(rangoI < 1214630 && rangoF > 176532){
  	cout<<"Lo sentimos no esta dentro del rango de busqueda"<<endl;
  	return false;
  }
  /*Un rango de inicio mayor que uno de final no puede realizarse por lo que se sale del rango*/
  if(rangoI > rangoF){
  	cout<<"Lo sentimos no esta dentro del rango de busqueda"<<endl;
    return false;
  }
  /*Caso correcto y al que deben de obedecer todos, si no regresa nada se hizo de manera correcta y estas dentro del rango*/
  if(rangoI >= 1214630 && rangoF <= 176532){
    cout<<"Usted se encuentra dentro del rango de busqueda"<<endl;
    cout<<"A continuacion realizaremos la busqueda de los alumnos correspondientes del rango";
    clock();
    busqBinaria(v,rangoI);
    busqBinaria(v,rangoF);
    return true;
  }
  else{
    return false;
  }
}

/*Los casos de prueba siguen el mismo modelo que la busqueda por rangos*/
template <class T>
void casosPrueba(std::vector<T> &v){
  /*Caso correcto respetando los rangos he indices*/
  cout<<"Primer caso: "<<"1705935 y 1706320"<<endl;
  busqRangos(v, 1705935, 1706320);

  /*Caso correcto respetando los rangos he indices*/
  cout<<"Segundo caso: "<<"1706340 y 1706424"<<endl;
  busqRangos(v, 1706340, 1706424);

   /*Caso equivoco por estar fuera de rango*/
  cout<<"Tercer caso: "<<"2220000 y 1806166"<<endl;
  busqRangos(v, 2220000, 1806166);

  /*Caso equivoco por estar fuera de rango*/
  cout<<"Cuarto caso: "<<"1105632 y 1656432"<<endl;
  busqRangos(v, 1105632, 1856432);
}

#endif /*PRUEBA_H_INCLUDED*/
