/*
 * Archivo: aplicacion.h
 * Creado: 19/11/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: Implementeción de la aplicación en una funcion principal.
*/

#ifndef APLICACION_H_INCLUDED
#define APLICACION_H_INCLUDED

#include <iostream>
#include <fstream>
#include "persona.h"
#include "ordena.h"
#include "prueba.h"

using namespace std;

void principal(){
  /*Variables de lectura y escritura*/
  ifstream input;
  ofstream output;

  /*Vector para almacenar objetos Persona*/
  std::vector<Persona> auxiliar;

  /*Variables para flujo de entrada*/
  int matricula;
  string nombre, apellidoP, apellidoM, carrera, semestre;

  /*Lectura del archivo*/
  cout<<"Introduciendo flujo de archivo: register.txt"<<endl;
  input.open("register.txt");
  if(input.is_open()){
    cout<<"Registrando y mostrando flujo de entrada\n"<<endl;
    /*Entrada de flujo por medio de archivo .txt Uso del operador de entrada para flujo de datos ">>"*/
    while(input>>matricula>>nombre>>apellidoP>>apellidoM>>carrera>>semestre){

      /*Impresion del contenido de archivo*/
      cout<<matricula<<" "<<nombre<<" "<<apellidoP<<" "<<apellidoM<<" "<<carrera<<" "<<semestre<<endl;

      /*Almacenamiento en el vector y en la variable auxiliar en iteración*/
      Persona tempPersona(matricula,nombre,apellidoP,apellidoM,carrera,semestre);
      auxiliar.push_back(tempPersona);
    }
    /*Cierre del archivo "register.txt"*/
    input.close();
    cout<<"\nOrdenando el grupo de Personas del flujo de entrada";
    clock();

    /*Cumplimos con el ordenamiento he imprimimos el vector ordenado*/
    bubbleSort(auxiliar);
    cout<<"\n\nImprimiendo flujo de entrada a manera de salida del mismo pero ordenada:\n"<<endl;

    for(int i=0; i<auxiliar.size(); i++){
      auxiliar[i].mostrarPersona();
    }

    /*Salida del flujo inicial pero ahora ordenado*/
    output.open("outflow.txt");
    if(output.is_open()){
      for(int i=0; i<auxiliar.size(); i++){
        output<<auxiliar[i].getMatricula()<<" "<<auxiliar[i].getNombre()<<" "<<auxiliar[i].getApellidoP()<<" "<<auxiliar[i].getApellidoM()<<" "<<auxiliar[i].getCarrera()<<" "<<auxiliar[i].getSemestre()<<endl;
      }
    }
    /*Cierre del nuevo archivo de Personas ordenadas*/
    output.close();

    /*Algoritmos de busqueda de personas*/
    cout<<"\nAhora que las personas han sido ordenadas �Quiere realizar una busqueda en particular?"<<endl;
    cout<<"Presione:\n\n(1) S� \n(2) No \n(3) En caso de busqueda por rangos"<<endl;
    int opcion; cin>>opcion;
    clock();
    switch(opcion){
    	case 1:
    		cout<<"\nInserte la matricula de la persona que desea buscar"<<endl;
    		int valor; cin>>valor;
		    busqSequential(auxiliar, valor);
		    break;
		case 2:
		    cout<<"\nA seleccionado no buscar personas."<<endl;
			break;
		case 3:
			cout<<"\nInserte el rango que quiere buscar indicando dos matriculas"<<endl;
			int rangoI, rangoF;
			cout<<"Inserte matricula 1: "<<endl;
			cin>>rangoI;
			cout<<"Inserte matricula 2: "<<endl;
			cin>>rangoF;
			busqRangos(auxiliar, rangoI, rangoF);
			break;
	}

	/*Demostraci�n de funcionamiento en casos de prueba*/
	cout<<"\nAhora si quiere correr los casos de prueba presione 1"<<endl;
	cout<<"Si estas conforme con el programa presione cualquier otra tecla"<<endl;
	int cp;
	cin>>cp;
	if(cp == 1){
		casosPrueba(auxiliar);
	}
	else{
		cout<<"PROGRAMA FINALIZADO EXITOSAMENTE"<<endl;
	}
  }
}


#endif /*APLICACION_H_INCLUDED*/
