/*
 * Archivo: lib.h
 *  Creado el: 07/10/2020
 *  Autor: Jesùs Ugalde Reséndiz
 *  Matería: TC1031
 */
#ifndef PRINCIPALES_H_INCLUDED
#define PRINCIPALES_H_INCLUDED

#include <iostream>
#include <fstream>
#include "talacha.h"
#include "list.h"
#include "lib.h"
#include "sorts.h"

using namespace std;

/*Menu actividad integral 1*/
ifstream input;
ofstream output;
ofstream output2;
std::vector<Persona> v0;

int matricula;
int seleccion;
int opcion;
string nombre;
string carrera;
string semestre;

List<Persona> lista;

void principal1(){
  input.open("registros.txt");
  if(input.is_open()){
    while(input>>matricula>>nombre>>carrera>>semestre){
      Persona conjuntoPersonas(matricula, nombre, carrera, semestre);
      v0.push_back(conjuntoPersonas);
      }

      input.close();
      cout<<"Recibiendo vector...\nOrdenando vector"<<endl;

      ordenaBurbuja(v0);
      int tamanio = v0.size();
      for(int i=0; i<tamanio; i++){
        v0[i].mostrarPersona();

    }

    cout<<"El vector ha sido ordenado de forma exitosa"<<endl<<endl;

    cout<<"Creando una nueva copia del archivo ordenado"<<endl;
    output.open("logs_ordenados.txt");
    if(output.is_open()){
      for(int i=0; i<tamanio; i++){
        output<<v0[i].getMatricula()<<" "<<v0[i].getNombre()<<" "<<v0[i].getCarrera()<<" "<<v0[i].getSemestre()<<endl;
      }
    }

    output.close();
    cout<<"Copia creada de manera exitosa\nSTATUS = SUCCES"<<endl<<endl;

    cout<<"¿Deseas buscar a alguien?\n";
    cout<<"En caso que..."<<endl; cout<<"SI = Presiona 1"<<endl; cout<<"NO = Presiona 2"<<endl;
    cin>>seleccion; cout<<"\n";

    switch(seleccion){
      case 1:
      int BeginIndex, FinalIndex;
      cout<<"Define el intervalo de busqueda por medio de matricula sin el A0: "<<endl;
      cout<<"Elemento a buscar: "; cin>>BeginIndex; cout<<" "<<endl;
      int Begin;
      Begin = busqBinaria(v0, BeginIndex);
      cout<<"Final: "; cin>>FinalIndex; cout<<" "<<endl;
      int Final;
      Final = busqBinaria(v0, FinalIndex);

      cout<<"El resultado de busqueda es: "<<endl;
      for(int i = Begin; i<= Final; i = i+1){
        v0[i].mostrarPersona();
      }
      break;
      case 2:
      cout<<"¡Hasta la proxima!"<<endl;
      break;
    }

    cout<<"Ahora para chequear casos de prueba, presione 1"<<endl;
    cout<<"En caso que no, presione cualquier otro numero"<<endl;
    cin>>opcion;

    if(opcion==1){
      casoPrueba(v0);
    }
    else{
      cout<<"Nos vemos luego :3 <3"<<endl;
    }

  }

  else{
    cout<<"El archivo no ha sido localizado"<<endl;
  }

}

void principal2(){
  cout<<"Realizando lectura de archivo de logs ordenados"<<endl;

  input.open("logs_ordenados.txt");
  if(input.is_open()){
    while(input>>matricula>>nombre>>carrera>>semestre){
      cout<<matricula<<" "<<nombre<<" "<<carrera<<" "<<semestre<<endl;;
    }

    Persona individuo(matricula, nombre, carrera, semestre);
    lista.add(individuo);

    cout<<"EL archivo a sido leido de manera satisfactoria"<<endl<<endl;
    input.close();

    cout<<"Creacion de lista en proceso"<<endl;
    cout<<"Muestra de lista: "<<endl;
    cout<<lista.toString()<<endl;

    output2.open("lista_logs.txt");
    if(output2.is_open()){
      output<<"Lista creada de manera exitosa: "<<endl<<endl;
      output<<lista.toString()<<endl;
    }
    output2.close();
    cout<<"La actualización y agregación de datos a sido realizada satisfactoriamente"<<endl;
    cout<<"STATUs = SUCCES"<<endl;
  }

  else{
    cout<<"El archivo no ha sido localizado"<<endl;
  }

}








#endif //PRINCIPALES_H_INCLUDED
