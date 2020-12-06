## Actividad Integral 4 .- Grafos (Evidencia Competencia) ##

**Introducción**

En esta entrega se utilizan grafos para poder modelar, un sencillo juego sobre rutas del mundo de naruto, el cual se llama THE WORLD OF NARUTO / EL MUNDO DE UN SHINOBI, en este podras construir las rutas que quieres llevar al rededor del mundo shinobi, además que de igual manera, veras el mapa actual que existe y la mejor ruta para poder recorrerlo, se implemento busqueda por anchura o también conocido como BFS, no se pudo presentar un main de mejor apariencia debido a cuestiones de tiempo.

Creado el: 04/12/2020

Autor Jesús Ugalde Reséndiz

Lenguaje C/C++

Materia TC1031

### ANALISIS DE COMPLEJIDAD DE LAS FUNCIONES PRINCIPALES Y POR ARCHIVO ###

**Archivo: main.cpp**

En este se contiene el menu para la interacción con el usuario, su funcion es unicamente el int main que como toda practica nos regresa cero, manda a llamar a las funciones de los archivos de cabecera como lo son casoPrueba.h y ugraph.h

**Archivo: ugraph.h**

El invitado de honor de la fiesta se encarga de generar un grafo así como de realizar algunas de las operaciones que este puede realizar, aquí solo se citaran las principales en el main, debido a que por problemas de tiempo no podremos incluir las demás.

***BFS:*** El algoritmo BFS es de una orden de complejidad que es O(n^4) esto por que hay ciclos anidados en el mismo, pero como funcionan entre condicionales y comparaciones podemos entonces gracias a esto deducir que recorre todos los nodos y todas sus conexiones para conseguir llegar a un nodo en especifico guardando su path se implemento de tal forma que en cierto momento no pudiera recorrer más nodos por lo que su complejidad final es de O(n+b) redondeandose al final como una funcíon de O(n^2).

***adjacencyList:*** La lista de adyacencia recibe una complejidad de orden O(n^2) debido a la anidación que se produce entre n iteraciones por n iteraciones.


**Archivo: casoPrueba.h**

En este se contienen las funciones de casos de prueba y la que imprime el mapa original, por medio de la lectura de un archivo, la complejidad de las dos funciones es de O(n) debido a que entre ellas operan uno o varios ciclos while, pero al no estar anidados siguen dejando que el algoritmo sea de una complejidad O(n).

### Casos de prueba ###

Para esto se utilizo la lista de adyacencia creada a partir de archivo y a partir de incersiones de nodos

**Caso 1:**

*Entradas:*

Ruta: De Konohagakure a Kumogakure, de Kumogakure a Sunagakure y de ahí Kirigakure despues finalizamos en TECgakure

*Salida:*

El mapa creado es:
Konohagakure--->Kumogakure--->Sunagakure--->Kirigakure--->TECgakure--->

**Caso 2:**

*Entradas: *

Realicese una ruta de: Sunagakure a Iwagakure, de ahí a TECgakure, posteriormente a Konohagakure de regreso a Sunagakure, para al final llegar a Kumogakure

*Salidas: *

El mapa creado es:

Sunagakure--->Iwagakure--->TECgakure--->Konohagakure--->Sunagakure--->Kumogakure--->
