/*
 * Archivo: ugraph.h
 * Creado: 04/12/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: En esta libreria o archivo de cabecera, esta implementado un grafo aciclico
 * dirigido este para cumplir la competencia de uso de grafos para la resolución de problemas
 * he implementación de busquedas.
*/
#ifndef UGRAPH_H_INCLUDED
#define UGRAPH_H_INCLUDED

#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>

using namespace std;

class Edge;

class Vertex{
private:
  Vertex *sig;
  Edge *sigE;
  std::string nombre;
  friend class Ugraph;
};

class Edge{
private:
  Edge *sig;
  Vertex *sigV;
  int precio;
  friend class Ugraph;
};

class Ugraph{
private:
  Vertex *ident;

public:
  void inicializar();
  bool estado();
  int tamanio();

  Vertex *getVertex(std::string);
  void AddEdge(Vertex *origen, Vertex *final, int precio);
  void AddVertex(std::string);
  void adjacencyList();
  void deleteEdge(Vertex *origin, Vertex *final);
  void deleteVertex(Vertex *vert);
  void cancel();
  void BFS(Vertex *origin);
};

void Ugraph::inicializar(){
  ident = NULL;
}

bool Ugraph::estado(){
  if(ident==NULL){
    return true;
  }
  return false;
}

int Ugraph::tamanio(){
  int i = 0;
  Vertex *aux;
  aux = ident;

  while(aux != NULL){
    i++;
    aux = aux->sig;
  }

  return i;
}

Vertex *Ugraph::getVertex(std::string nombre){
  Vertex *auxiliar;
  auxiliar = ident;

  while(auxiliar->sig != NULL){
    if(auxiliar->nombre == nombre){
      return auxiliar;
    }
  }

  return NULL;
}

void Ugraph::AddVertex(std::string nombre){
  Vertex *New = new Vertex;
  New->nombre = nombre;
  New->sig = NULL;
  New->sigE = NULL;

  if(estado()){
    ident = New;
  }

  else{
    Vertex *aux;
    aux = ident;

    while(aux->sig != NULL){
      aux = aux->sig;
    }

    aux->sig = New;
  }
}

void Ugraph::AddEdge(Vertex *origin, Vertex *final, int precio){
  Edge *New = new Edge;
  New->precio = precio;
  New->sig = NULL;
  New->sigV = NULL;

  Edge *aux;

  if(aux == NULL){
    origin->sigE = New;
    New->sigV = final;
  }

  else{
    while(aux->sig != NULL){
      aux = aux->sig;
    }
    aux->sig = New;
    New->sigV = final;
  }
}

void Ugraph::adjacencyList(){
  Vertex* vertAux;
  Edge* edgeAux;

  vertAux = ident;
  while(vertAux != NULL){

    std::cout<<vertAux->nombre<<"--->";
    edgeAux = vertAux->sigE;
    while(edgeAux != NULL){
      std::cout<<edgeAux->sigV->nombre<<"--->";
      edgeAux = edgeAux->sig;
    }
    vertAux = vertAux->sig;
    std::cout<<"";

  }
}

void Ugraph::cancel(){
  Vertex *aux;

  while(ident != NULL){
    aux = ident;
    ident = ident->sig;
    delete(aux);
  }
}

void Ugraph::deleteEdge(Vertex *origin, Vertex *final){

  int flag = 0;
  Edge *curr, *prev;
  curr = origin->sigE;
  if(curr == NULL){
    std::cout<<"El vertice de origen no tiene aristas"<<std::endl;
  }
  else if(curr->sigV == final){
    origin->sigE = curr->sig;
    delete(curr);
  }

  else{
    while(curr != NULL){
      if(curr->sigV == final){
        prev->sig = curr->sig;
        delete(curr);
        break;
      }
      prev = curr;
      curr = curr->sig;
    }
    if(flag == 0){
      std::cout<<"Los vertices no han sido encontrados"<<std::endl;
    }
  }
}

void Ugraph::deleteVertex(Vertex *vert){
  Vertex *curr, *prev;
  Edge *aux;

  curr = ident;
  while(curr != NULL){
    aux = curr->sigE;

    while(aux != NULL){

      if(aux->sigV == vert){
        deleteEdge(curr,aux->sigV);
        break;
      }
      aux = aux->sig;
    }
    curr = curr->sig;
  }
  curr = ident;

  if(ident == vert){
    ident = ident->sig;
    delete(curr);
  }

  else{
    while(curr != vert){
      prev = curr;
      curr = curr->sig;
    }
    prev->sig = curr->sig;
    delete(curr);
  }
}

void Ugraph::BFS(Vertex *origin){
  int flag, flag2;
  Vertex *curr;
  std::queue<Vertex*> cola;
  std::list<Vertex*> lista;
  std::list<Vertex*>::iterator i;

  cola.push(origin);

  while(!cola.empty()){
    flag = 0;
    curr = cola.front();
    cola.pop();

    for(i = lista.begin(); i != lista.end(); i++){
      if(*i == curr){
        flag = 1;
      }
    }
    if(flag == 0){
      std::cout<<curr->nombre<<", ";
      lista.push_back(curr);

      Edge *aux;
      aux = curr->sigE;

      while(aux != NULL){

        flag2 = 0;
        for(i = lista.begin(); i != lista.begin(); i++){
          if(aux->sigV == *i){
            flag2 = 1;
          }
        }
        if(flag2 == 0){
          cola.push(aux->sigV);
        }

        aux = aux->sig;
      }
    }
  }
}
#endif /*UGRAPH_H_INCLUDED*/
