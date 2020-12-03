/*
 * Archivo: lecturas.h
 * Creado: 24/11/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: Archivo que contiene las funciones que correran en el archivo fuente del proyecto.
*/

#ifndef LECTURAS_H_INCLUDED
#define LECTURAS_H_INCLUDED

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "heapaux.h"
#include "casoprueba.h"


void principal3(){

  /*Declaración de las variables de entrada de flujo*/
  int matricula, promedio;
  std::string nombre, apellidoP, apellidoM, carrera, semestre;
  Heap almacenMatricula, almacenPromedio;

  /*Declaración de la variable de lectura de flujo y recepción del mismo*/
  std::cout<<"Introduciendo flujo de archivo: 'register.txt'"<<std::endl;
  std::ifstream input;
  input.open("register.txt");
  std::string line;
  if(input.is_open()){
    /*Lectura de flujo, recepción y construcción de los objetos de tipo persona*/
    std::cout<<"Registrando y mostrando el flujo de entrada\n"<<std::endl;
    while(input>>matricula>>nombre>>apellidoP>>apellidoM>>carrera>>semestre>>promedio){
      /*Impresión del contenido del archivo, descrito a traves de las variables*/
      std::cout<<matricula<<" "<<nombre<<" "<<apellidoP<<" "<<apellidoM<<" "<<carrera<<" "<<semestre<<" "<<promedio<<std::endl;

      /*Almacenamiento en el arbol Heap, tanto por promedio, así como por matricula teniendo las dos llaves de entrada*/
      Persona *p = new Persona(matricula,nombre,apellidoP,apellidoM,carrera,semestre,promedio);
      almacenMatricula.pushMatricula(p);
      almacenPromedio.pushPromedio(p);
    }

    std::cout<<"Se ha cargado exitosamente el flujo de entrada\n"<<std::endl;
    /*Cerramos el archivo 'register.txt'*/
    input.close();

    /*Menu para mostrar el tipo de llave que quiere ver el usuario y en base a ello dar flujo de salida para el heap min*/
    std::cout<<"Se a cargado la nueva lista de alumnos modelando un arbol heap, ¿Quiere desplegar por promedio o por matricula?"<<std::endl;
    std::cout<<"Seleccione una opcion: \n(1) Promedios\n(2) Matriculas"<<std::endl;
    int opcion; cin>>opcion;

    /*Cuando la opcion es 2 entrega como flujo de salida un heap min con llave de Matricula*/
    if(opcion == 2){
      std::cout<<almacenMatricula.toString()<<std::endl;
      std::cout<<"Creando archivo nuevo en base a nuestro Heap-min..."<<std::endl<<std::endl;
      std::ofstream output("output.txt");
      if(output.is_open()){
        output<<"Nuevo Heap-min: "<<std::endl;
        output<<almacenMatricula.toString()<<endl;
      }

      std::cout<<"Archivo 'output.txt' creado satisfactoriamente"<<endl;
      output.close();
    }

    /*Cuando la opcion es 1 entrega como flujo de salida un heap min con llave de promedio*/
    if(opcion == 1){
      std::cout<<almacenPromedio.toString()<<std::endl;
      std::cout<<"Creando archivo nuevo en base a nuestro Heap-min..."<<std::endl<<std::endl;
      std::ofstream output("output.txt");
      if(output.is_open()){
        output<<"Nuevo Heap-min: "<<std::endl;
        output<<almacenPromedio.toString()<<endl;
      }

      /*Confirmación sobre la creacion correcta y cierre del archivo 'output.txt'*/
      std::cout<<"Archivo 'output.txt' creado satisfactoriamente"<<endl;
      output.close();
    }

    /*Ahora creamos un switch do while para que la persona pueda seleccionar entre buscar o correr casos de prueba del programa*/
    std::cout<<"\nAhora que has visto que se han ordenado los datos por medio de la llave solicitada"<<std::endl;
    std::cout<<"¿Deseas realizar alguna busqueda o correr casos de prueba?"<<std::endl;
    std::cout<<"Teclee la opcion deseada: \n(1) Realizar busqueda\n(2) Correr casos de prueba\n(3) Terminar el programa"<<std::endl;

    /*Se utiliza un do while para mejorar la apariencia y así poder realizar multiples acciones una vez en el archivo fuente*/
    int selection;
    do{
      cin>>selection;
      switch (selection) {
        case 1:
        long int enrollment;
        std::cout<<"Inserte la matricula a buscar: "; cin>>enrollment;
        almacenMatricula.heapSearch(enrollment);
        std::cout<<"¿Que desea ahora? \n(1) Realizar busqueda\n(2) Correr casos de prueba\n(3) Terminar el programa"<<std::endl;
        break;

        case 2:
        casosPrueba(almacenPromedio);
        std::cout<<"¿Que desea ahora? \n(1) Realizar busqueda\n(2) Correr casos de prueba\n(3) Terminar el programa"<<std::endl;
        break;
        }
      } while(selection != 3);

    /*Finalización del programa*/
    std::cout<<"Fue un placer atenderlo ¡HASTA LA PROXIMA!"<<std::endl;

    }
    else{
      std::cout<<"ERROR archivo no encontrado"<<std::endl;
    }
}

#endif /*LECTURAS_H_INCLUDED*/
