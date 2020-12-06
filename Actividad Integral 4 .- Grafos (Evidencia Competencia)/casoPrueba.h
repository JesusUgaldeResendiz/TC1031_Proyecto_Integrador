/*
* Archivo: casoPrueba.h
* Creado: 04/12/2020
* Autor: Jesús Ugalde Reséndiz
* Descripción: Archivo que nos sirve para en el main correr los casos de prueba. 
*/
#ifndef CASOPRUEBA_H
#define CASOPRUEBA_H

#include <iostream>
#include <string>
#include <fstream>
#include "ugraph.h"
using namespace std;

void mapaShinobi(){
  Ugraph original;

  original.inicializar();
  ifstream input;
  string temp;
  input.open("MapaOriginal.txt");
  if(input.is_open()){
    while(input>>temp){
      original.AddVertex(temp);
    }
    cout<<"El mapa original de nuestro mundo es: "<<endl;
    original.adjacencyList(); cout<<"\n\n";
  }
  else{
    cout<<"Lo sentimos no pudimos cargar el mapa original"<<endl;
  }
}

void casoPrueba(){
  cout<<"Bienvenido a los casos de prueba, en seguida procederemos a mostrarlos: "<<endl;
  Ugraph u1;
  u1.inicializar();
  cout<<"\nCaso 1:"<<endl;
  cout<<"Ruta: De Konohagakure a Kumogakure, de Kumogakure a Sunagakure y de ahí Kirigakure despues finalizamos en TECgakure"<<endl<<endl;
  ifstream input2;
  string temp1;
  input2.open("prueb.txt");
  if(input2.is_open()){
    while(input2>>temp1){
      u1.AddVertex(temp1);
    }
    cout<<"El mapa creado es: "<<endl;
    u1.adjacencyList(); cout<<"\n\n";
  }

  cout<<"Caso 2: "<<endl<<endl;
  Ugraph u3;
  u3.inicializar();
  cout<<"Realicese una ruta de: Sunagakure a Iwagakure, de ahí a TECgakure, posteriormente a Konohagakure de regreso a Sunagakure, para al final llegar a Kumogakure"<<endl;
  u3.AddVertex("Sunagakure");
  u3.AddVertex("Iwagakure");
  u3.AddVertex("TECgakure");
  u3.AddVertex("Konohagakure");
  u3.AddVertex("Sunagakure");
  u3.AddVertex("Kumogakure");
  cout<<"El mapa creado es: "<<endl<<endl;
  u3.adjacencyList(); cout<<"\n\n";
}

void buscandoAldea(){

  Ugraph original;

  original.inicializar();
  ifstream input;
  string temp;
  input.open("MapaOriginal.txt");
  if(input.is_open()){
    while(input>>temp){
      original.AddVertex(temp);
    }
    cout<<"Cargando el mapa original..."<<endl<<endl;
    cout<<"Ingrese la aldea que quiere buscar: "<<endl;
    string search;
    cin>>search;
    original.BFS(original.getVertex(search));
    original.adjacencyList();
    cout<<"Recorrido realizado"<<endl;
    input.close();
  }
  else{
    cout<<"Lo sentimos no pudimos cargar el mapa original"<<endl;
  }

}


#endif /*CASOPRUEBA_H*/
