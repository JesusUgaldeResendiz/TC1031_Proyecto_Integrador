/*
* Archivo: main.cpp
* Creado: 04/12/2020
* Autor: Jesús Ugalde Reséndiz
* Descripción: Archivo fuente para poder correr nuestra aplicación, en este se encuentran un menu, casos de prueba y construccion de grafos.
*/
#include <iostream>
#include <string>
#include "ugraph.h"
#include "casoPrueba.h"

using namespace std;

int main(){
  /*Primero que nada inicializamos nuestro grafo para poder iniciar su funcionamiento*/
  Ugraph u;
  u.inicializar();

  cout<<"¡BIENVENIDO A LA ENTREGA INTEGRAL DE GRAFOS Y ASÍ MISMO RECORRIDO POR EL MUNDO DE NARUTO!"<<endl;
  cout<<"A continuación diganos ¿Que desea hacer?"<<endl<<endl;
  cout<<"(1)Comenzar el programa\n(2)Cancelar programa\n"<<endl;
  int opcion; cin>>opcion;
  if(opcion == 2){
    cout<<"Operación cancelada"<<endl;
  }
  else{
      cout<<"THE WORLD OF NARUTO / EL MUNDO DE UN SHINOBI"<<endl<<endl;

      cout<<"A continuación diganos ¿Que desea hacer?"<<endl;
      cout<<"Presione: \n(1)Crear una ruta entre las seis grandes aldeas\n(2)Ver el mapa del mundo shinobi\n(3)Realizar una busqueda de profundidad\n(4)Correr casos de prueba\n"<<endl;
      int selection; cin>>selection;

      do{
        switch(selection){
          case 1:
          {
            cout<<"Teclea las aldeas a la que quieres ir primero y posteriormente la que quieres seguir."<<endl;
            cout<<"En caso de querer terminar el recorrido, teclea END para el origen"<<endl;
            cout<<"Las aldeas a las que puedes ir son: \nKonohagakure \nKumogakure \nKirigakure \nSunagakure \nIwagakure \nTECgakure"<<endl; cout<<" "<<endl;
            string e1, e2, e3, e4, e5, e6;
            cout<<"Introduce el origen: "<<endl;
            cin>>e1;
            cout<<"Introduce la siguiente aldea"<<endl;
            cin>>e2;
            cout<<"Introduce la siguiente aldea"<<endl;
            cin>>e3;
            cout<<"Introduce la siguiente aldea"<<endl;
            cin>>e4;
            cout<<"Introduce la siguiente aldea"<<endl;
            cin>>e5;
            cout<<"Introduce la ultima aldea a la que iras"<<endl;
            cin>>e6;
            u.AddVertex(e1);
            u.AddVertex(e2);
            u.AddVertex(e3);
            u.AddVertex(e4);
            u.AddVertex(e5);
            u.AddVertex(e6);
            cout<<"Creando nueva ruta entre las cinco grandes aldeas shinobi..."<<endl<<endl;
            u.adjacencyList(); cout<<"\n\n";
            cout<<"Hasta la proxima"<<endl;
            break;
          }
          case 2:
          {
            mapaShinobi();
            cout<<"Hasta la proxima"<<endl;
            break;
          }
          case 3:{
            buscandoAldea();
            cout<<"Hasta la proxima"<<endl;
            break;
          }
          case 4:{
            casoPrueba();
            cout<<"Hasta la proxima"<<endl;
            break;
          }
        }

      }while(selection < 2);
  }





  return 0;
}
