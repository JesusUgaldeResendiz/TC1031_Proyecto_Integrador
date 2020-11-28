## **ACTIVIDAD INTEGRAL 2.- ESTRUCTURA DE DATOS LINEALES**

**Introducción**

*Este trabajo consiste en utilizar la información de un grupo de personas, el cual pertenece a una universidad privada que recientemente a abierto sus puertas por lo cual cuenta con sistemas mal programados para realizar busquedas en sus alumnos. Se te pide que los ayudes a mejorar esta situación.
Lo que a mi se me ocurrio para utilizar como solución fue el uso de estructuras de datos de lista doblemente ligada para agilizar el manejo de datos así como sus busquedas en alguna persona o en un rango determinado, esto ayudara a hacer las cosas más sencillas para la institución.
Al proveernos un archivo en formato de bitacora o formato de logs llamado "register.txt" puede agruparse en los siguientes atributos: numero de lista / matricula / nombre / apellido paterno / apellido materno / carrera / semestre por lo cual podemos plantearnos el como seran los campos de datos a rellenar.*

Creado el: 07/10/2020

Corregido el: 20/11/2020

Autor: Jesús Ugalde Reséndiz

Lenguaje: C/C++

Matería: TC1031

**Correcciones**

Se mejoraron los casos de prueba, los cuales si estaban incluidos pero no implementados de la mejor manera, se realizo la mejora de busqueda por rango así como una correcta implementación de las mismas, con sus respectivos casos de excepción y por ultimo pero no menos importante, extendimos la descripción del programa además de agregar más detalles a la misma para un correcto entendimiento de lo que el programa realiza así como su contexto.


**ANALISIS DE COMPLEJIDAD ALGORITMO/TEMPORAL POR ARCHIVO**

**Archivo: exception.h**

La función de este archivo es el arrojar una excepción determinada por ciertos casos que se den en el archivo *dlist.h* siendo por así decirlo un archivo auxiliar. A lo que tenemos entonces que al utilizar solamente en sus metodos y atributos funciones de la biblioteca "excepcion" de C++ y no tener ningun tipo de iteración o de recursión podemos intuir que esta es en cada uno de sus metodos y en general O(n).

**Archivo: persona.h**

Este archivo header igualmente solo es un archivo de apoyo, pues su función principal es que se utilizara para poder convertir cada registro en un objeto de tipo persona, el cual, contara con los atributos de: numero de lista / matricula / nombre / apellido paterno / apellido materno / carrera / semestre respectivamente, todos sus atributos son de orden O(1) pues no poseen ciclos de ningun tipo ni recursión en ningún nivel.

**Archivo: ordena.h**

Aquí tenemos la documentación de los casos de prueba implementados en el programa, es decir el caso, el tipo de salida esperada y el por que es que se usa como caso de prueba, todo a manera de comentarios, no obstante igual se encuentra el timer, o cronometro el cual se utiliza para darle una vista más agradable al usuario, por lo tanto la unica función implementada aquí es la de clock() que es una función de tipo void.

***clock:*** Esta función contiene en su estructura un ciclo while, por lo que al manetener una iteración pasa a ser de orden O(n), funciona gracias a la función de la biblioteca "windows.h" la cual es Sleep, que realiza una pausa del programa en milisegundos, esta es recibida por esta función antes mencionada y es de un segundo, por cada incremento del contador de tipo entero "acum".
