/*
 * Archivo: aplicacion2.h
 * Creado: 19/11/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: Implementeción de la aplicación en una funcion principal.
*/
#ifndef APLICACION2_H_INCLUDED
#define APLICACION2_H_INCLUDED

#include <iostream>
#include <fstream>
#include "persona.h"
#include "ordena.h"
#include "dlist.h"

using namespace std;

void principal2(){
  /*Variables de lectura/escritura de archivo*/
  ifstream input;
  ofstream output;

  /*Lista doblemente ligada para almacenar Personas*/
  DList<Persona> auxiliar;

  /*Variables que reciben el flujo de entrada*/
  int numLista, matricula;
  string nombre, apellidoP, apellidoM, carrera, semestre;

  /*Lectura del archivo*/
  cout<<"Introduciendo flujo de archivo: 'register.txt'"<<endl;
  input.open("register.txt");
  if(input.is_open()){
    cout<<"Registrando y mostrando flujo de entrada\n"<<endl;
    /*Entrada del flujo por medio del archivo .txt Uso del operador de entrada de flujo ">>"*/
    while(input>>numLista>>matricula>>nombre>>apellidoP>>apellidoM>>carrera>>semestre){

      /*Impresión del contenido del archivo, descrito a traves de las variables*/
      cout<<numLista<<" "<<matricula<<" "<<nombre<<" "<<apellidoP<<" "<<apellidoM<<" "<<" "<<carrera<<" "<<semestre<<endl;

      /*Almacenamiento en la doble lista ligada y en la variable auxiliar de iteración*/
      /*Variable auxiliar de almacenamiento de objetos tipo Persona*/
      Persona tempPersona(numLista,matricula,nombre,apellidoP,apellidoM,carrera,semestre);
      auxiliar.add(tempPersona);
    }

    /*Cierre del archivo "register.txt"*/
    input.close();
    cout<<"\nOrdenando el grupo de Personas del flujo de entrada";
    clock(); cout<<"\n";

    /*Realizamos el ordenamiento he imprimimos la lista doblemente ligada, ahora ordenada*/
    auxiliar.dlistSort(); cout<<"\n";
    cout<<auxiliar.toString()<<endl;

    /*Menu para la realizaci�n de busquedas y casos de prueba*/
    cout<<"\nAhora que las personas han sido ordenadas �Quiere realizar una busqueda por rangos?"<<endl;
    cout<<"Utilice como rangos los numeros de lista"<<endl;
    cout<<"Presione:\n\n(1) Si \n(2) No \n(3) En caso de querer correr casos de prueba"<<endl;
    int opcion; cin>>opcion;
    clock(); cout<<"\n";
    
    switch(opcion){
    	case 1:
    		int rangoI, rangoF;
    		cout<<"Introduzca el rango inicial: "; cin>>rangoI; cout<<""<<endl;
			cout<<"Introduzca el rango final: "; cin>>rangoF;
			cout<<"\nResultado de busqueda: "<<endl;
			auxiliar.searchRange(rangoI, rangoF);
		    break;
		case 2:
			cout<<"Muy bien, no correremos busqueda ni casos de prueba"<<endl;
			break;
		case 3:
			/*Caso correcto respetando los rangos he indices*/
            cout<<"Primer caso: "<<"1 y 8"<<endl;
            auxiliar.searchRange(1,8);
            cout<<""<<endl;
            /*Caso correcto respetando los rangos he indices*/
            cout<<"Segundo caso: "<<"12 y 25"<<endl;
            auxiliar.searchRange(12,25);
            cout<<""<<endl;
            /*Caso equivoco por estar fuera de rango*/
            cout<<"Tercer caso: "<<"-2 y 18"<<endl;
            auxiliar.searchRange(-2,18);
            cout<<""<<endl;
            /*Caso equivoco por tener indices irregulares*/
            cout<<"Cuarto caso: "<<"25 y 5"<<endl;
            auxiliar.searchRange(25,5);
			break;
	}

    cout<<"Ahora con el flujo de entrada ordenado creamos un nuevo archivo en formato de logs"; clock();
    /*Creamos un nuevo archivo txt con el flujo de entrada ahora ordenado*/
    output.open("outflow.txt");
    if(output.is_open()){
    	output<<"Lista de grupo de personas: "<<endl;
    	output<<auxiliar.toString()<<endl;
	}
	output.close();
	cout<<"\nArchivo 'outflow.txt' creado exitosamente"<<endl;
	cout<<"\n�HASTA LA PROXIMA!"<<endl;
  }
  else{
  	cout<<"Error al abrir el archivo"<<endl;
  }
}

#endif /*APLICACION2_H_INCLUDED*/
