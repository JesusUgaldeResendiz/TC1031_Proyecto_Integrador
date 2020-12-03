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



