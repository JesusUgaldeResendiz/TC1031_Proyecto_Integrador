## **ACTIVIDAD INTEGRAL 3.- ARBOLES (EVIDENCIA COMPETENCIA)** ##

**Introducción**

*Este trabajo consiste en utilizar la información de un grupo de personas, el cual pertenece a una universidad privada que recientemente a abierto sus puertas por lo cual cuenta con sistemas mal programados para realizar busquedas en sus alumnos así como manejo de información en general. Se te pide que los ayudes a mejorar esta situación.
La idea que surgio en  mi para ayudar a la institución fue manejar esta vez la información por medio de estructuras de datos, pero esta vez más concretamente con un arbol heap min para así poder mostrar de una manera más grafica la información además de modelarla para ellos de una forma más entendible.
Al proveernos un archivo en formato de bitacora o formato de logs llamado "register.txt" puede agruparse en los siguientes atributos: matricula / nombre / apellido paterno / apellido materno / carrera / semestre / promedio por lo cual podemos plantearnos el como seran los campos de datos a rellenar.*

Creado el: 24/11/2020

Autor Jesús Ugalde Reséndiz

LEnguaje C/C++

Materia TC1031

**ANALISIS DE COMPLEJIDAD ALGORITMO/TEMPORAL POR ARCHIVO**

**Archivo: persona.h**

Este archivo header solo es un archivo de apoyo, pues su función principal es que se utilizara para poder convertir cada registro en un objeto de tipo persona, el cual, contara con los atributos de: matricula / nombre / apellido paterno / apellido materno / carrera / semestre / promedio respectivamente, todos sus atributos son de orden O(1) pues no poseen ciclos de ningun tipo ni recursión en ningún nivel.

**Archivo: heapaux.h**

En este archivo .h lo que tenemos es la implementación de un arbol Heap - Min, pero con la diferencia que esta implementado sobre todo para recibir objetos Persona de tipo puntero, esto para facilitar el manejo de la información así como de los campos en esta.
Como ya se realiza el analisis de complejidad de algunas funciones, como lo son el ***push()*** el ***pop()*** y el ***size()*** se adjuntaran en el siguiente 
LINK: https://github.com/JesusUgaldeResendiz/TC1031-Estructuras-Formativas/tree/master/Act%203.2%20-%20%C3%81rbol%20Heap:%20Implementando%20una%20fila%20priorizada 


Haciendose así solo el analisis de algunas funciones como lo son:

***heapify:*** Sea por promedio o por matricula el heapify funciona a manera de que realizara intercambios en la posición de nuestros objetos en el arreglo con ayuda de la función swap, como solamente trabaja con sentencias condicionales su orden es de O(1) así como su auxiliar **swap** que igual es de orden O(1).

***parent:*** Como unicamente esta función nos regresa la posición del padre de algún objeto, es decir su indice por así decirlo mantiene una complejidad la cual es constante al solo relizar una operación aritmetica directa, tendiendo a ser O(1).

***left:*** Con la diferenciá de parent de que ahora lo que nos da es la posición del hijo de la izquierda de cualquier objeto en el arbol min Heap, teniendo la misma estructura que el padre pero con una operación aritmetica ciertamente diferente, su complejidad es O(1).

***right:*** Así como left nos regresa la posición de un hijo, pero ahora a la derecha, siendo basicamente como left y parent regresandonos el resultado de una operación aritmetica directa podemos decir que mantiene complejidad igualmente constante O(1).

***heapSearch:*** Para este algoritmo tomamos como base la busqueda secuencial en arrays y contenedores del tipo vector, recorriendo con un ciclo for de iteración a un arreglo para así poder encontrar lo que buscamos, hacemos lo mismo aquí pero en base a la matricula. Teniendo entonces como ya se dijo al for iterando en el array la complejidad asintotica de esta función es de O(n).

***toString:*** Para esta función encargada de imprimir nuestro arbol Min - Heap la comlplejidad asintotica sera de O(n) es decir lineal, debido a que se recorre una vez el arbol por medio de un for para así poder convertirlo a el y sus campos en una variable de tipo string que pueda ser manipulada en otra variable compatible en la que se esta almacenando.

**Archivo: casoprueba.h**

Para el arhivo de casoprueba tal como se debe de intuir ya por el nombre, posee los casos de prueba que van a ser utilizados durante la ejecución del programa en caso de que quiera correrlos, así como su salida esperada y su documentación correspondiente de forma resumidad, este archivo solo tiene dentro de el a la funcion casosPrueba.

***casoPrueba:*** Como unicamente recibe un arbol, para así realizar los casos de prueba de busqueda y arrojar así la salida correspondiente a cada uno su complejidad asintotica es la misma que la de heapSearch, por cada uno de los casos lo cual pese a ser para cada uno de los casos una n y al final tener O(4n) terminamos en que al ser una constane por una lineal continua siendo O(n).

**Archivo: lecturas.h**

Para esta entrega en el header lecturas.h lo que se implementa es la función principal3 la cual evocara toda la aplicación posteriormente en un archivo fuente para que podamos correrla he interactuar con ella, de tipo void, en donde primeramente declaramos las variables que se utilizaran para el cumplimiento de esta actividad, entonce así abrimos 'register.txt' que sera nuestro flujo de entrada en donde se encuentran todos los datos de manera desordenada, estos los introducimos en una variables auxiliar la cual es nuestro apuntador **p** a objetos de la clase Persona, recibiendo como parametro el flujo en cada iteración.
Luego de esto guarda tanto por matricula, como por promedio los elementos recabados en el flujo de entrada y finalmente llegamos al menu el cual nos dice que arbol deseamos desplegar para poder trabajar, además de usar ese arbol para tenerlo como flujo de salida en un archivo el cual sera 'output.txt'.
Posterior a la creación del nuevo archivo de texto ordenado tenemos entonces que en un menu do while, nos deja si bien realizar busquedas por medio de la matricula, correr casos de prueba o bien salir del programa.

***principal3:*** Para nuestro metodo principal3 podemos determinar su complejidad como lineal pues dentro de el posee un ciclo while en donde se esta introduciendo el flujo por medio de un recorrido al .txt de entrada y pesee a poseer un do while y varias sentencias if este no deja de ser de orden O(n).

**Archivo: main.cpp**

Este archivo fuente del proyecto unicamente lo que nos realiza es que corre la función principal3 la cual es pertenece a lecturas.h siendo entonces este de una complejidad igual a la del archivo ya antes mencionado, por lo cual su complejidad de main.cpp así como de la función principal int main() es de orden lineal, es decir O(n).

### Casos de prueba ###

Los casos de prueba de este proyecto obedecen a la busqueda secuencial que se implemento en nuestra clase heap, es decir la función heapSearch que recibe el valor de entrada que va a ser la matricula a buscar la cual se buscara dentro de nuestro arbol Heap - Min y posterior a ello desplegara un resultado.

============================================================================================
***Primer caso: 1700001***

**Caso correcto respetando los rangos he indices**

*Entradas / Inputs*

std::cout<<"Primer caso: "<<"1700001"<<std::endl;
 
tree.heapSearch(1700001);

  
*Salidas / Output*

Primer caso: 1700001

La persona a sido encontrada, sus datos son los siguientes:

1700001 Benjamin Valdes Aguirre ISC DIOS 100

¡Busqueda realizada con exito!

============================================================================================
***Segundo caso: 1706424***

**Caso correcto respetando rangos, entradas he indices**

*Entradas / Inputs*

std::cout<<"Segundo caso: "<<"1706424"<<std::endl;

tree.heapSearch(1706424);


*Salidas / Output*

Segundo caso: 1706424

La persona a sido encontrada, sus datos son los siguientes:

1706424 Miguel Luna Vega IRS Tercero 100

¡Busqueda realizada con exito!

============================================================================================
***Tercer caso: 175***

**Caso erroneo debido al rango he indice inferior al esperado**

*Entradas / Inputs*

std::cout<<"Tercer caso: "<<"175"<<std::endl;

tree.heapSearch(175);


*Salidas / Output*

Tercer caso: 175

Valor fuera de rango, no hay ninguna persona acorde

============================================================================================
***Cuarto caso: 0216545***

**Caso incorrecto debido a que esta fuera del indice y rango**

*Entradas / Inputs*

std::cout<<"Cuarto caso: "<<"0216545"<<std::endl;

tree.heapSearch(0216545);


*Salidas / Output*

Cuarto caso: 0216545

Valor fuera de rango, no hay ninguna persona acorde

============================================================================================
***Quinto caso: 1711111***

**Caso incorrecto debido a que esta fuera del indice y rango**

*Entradas / Inputs*

std::cout<<"Quinto caso: "<<"1711111"<<std::endl;

tree.heapSearch(1711111);


*Salidas / Output*

Quinto caso: 1711111

No hay ninguna persona con esa matricula en la base de datos
