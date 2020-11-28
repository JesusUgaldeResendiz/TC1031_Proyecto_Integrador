/*
 * Archivo: ordena.h
 * Creado: 19/11/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: Este archivo posee el temporizador del proyecto as� como los casos de prueba documentados.
*/

#ifndef ORDENA_H_INCLUDED
#define ORDENA_H_INCLUDED

#include <vector>
#include <windows.h>
#include <string>
#include <sstream>
#include "persona.h"
#include "dlist.h"

using namespace std; 

/*Algoritmo de temporizador para aumentar estilo en el programa, el timer por as� decirlo es de 1.5 segundos el Sleep funciona en milisegundos */
void clock(){
	 int acum = 0;
     while(acum < 3){
     	Sleep(1000);
        cout<<".";
        acum++;
    }
}

/*Casos de prueba, estos siguen el mismo modelo del metodo searchRange de la clase dlist.h
  ---------------------------------------------------------------
  |Caso correcto respetando los rangos he indices 
  |SALIDA ESPERADA: Impresi�n de la persona 1 a la persona 8.
  |
  |cout<<"Primer caso: "<<"1 y 8"<<endl;
  |dlist.searchRange(1,8);
  ---------------------------------------------------------------
  |Caso correcto respetando los rangos he indices 
  |SALIDA ESPERADA: Impresi�n de la persona 12 a la persona 25.
  |
  |cout<<"Segundo caso: "<<"12 y 25"<<endl;
  |dlist.searchRange(12,25);
  ---------------------------------------------------------------
  |Caso equivoco por estar fuera de rango
  |SALIDA ESPERADA: Mensaje que diga "Valores fuera del rango, lo sentimos".
  |
  |cout<<"Tercer caso: "<<"-2 y 18"<<endl;
  |dlist.searchRange(-2,18);
  ---------------------------------------------------------------
  |Caso equivoco por tener indices irregulares
  |SALIDA ESPERADA: Mensaje que diga "Lo sentimos el rango inicial no puede ser mayor que el rango final".
  |
  |cout<<"Cuarto caso: "<<"25 y 5"<<endl;
  |dlist.searchRange(25,5);
  |--------------------------------------------------------------
*/

#endif /*ORDENA_H_INCLUDED*/
