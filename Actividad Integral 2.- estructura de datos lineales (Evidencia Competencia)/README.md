## **ACTIVIDAD INTEGRAL 2.- ESTRUCTURA DE DATOS LINEALES**

**Introducción**

*Este trabajo consiste en utilizar la información de un grupo de personas, el cual pertenece a una universidad privada que recientemente a abierto sus puertas por lo cual cuenta con sistemas mal programados para realizar busquedas en sus alumnos. Se te pide que los ayudes a mejorar esta situación.
Lo que a mi se me ocurrio para utilizar como solución fue el uso de estructuras de datos de lista doblemente ligada para agilizar el manejo de datos así como sus busquedas en alguna persona o en un rango determinado, esto ayudara a hacer las cosas más sencillas para la institución.
Al proveernos un archivo en formato de bitacora o formato de logs llamado "register.txt" puede agruparse en los siguientes atributos: numero de lista / matricula / nombre / apellido paterno / apellido materno / carrera / semestre por lo cual podemos plantearnos el como seran los campos de datos a rellenar.*

**NOTA:** Este archivo unicamente corre en una computadora con sistema operativo Windows, debido a la inclusión de la libreria <windows.h>

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

**Archivo: dlist.h**

El dlist.h es el archivo más importante del proyecto, pues este no solamente guarda los datos, sino que también sera el encargado de realizar las busquedas tanto por rango así como de manera individual, y no obstante también realiza el ordenamiento de los datos por numero de lista, sus funciones y la complejidad de cada una son las siguientes.

***add:*** El metodo add, realiza la inserción de elementos a la lista, sea al principio o al final, este vacia o no este vacia, como en su estructura unicamente verifica si el valor es nulo o si la lista esta o no esta vacia su complejidad es constante al seguir siempre el mismo patrón, por lo que posee una complejidad de orden O(n).

***find:*** En este metodo find que sirve para la busqueda de un elemento, se recibe un numero de lista. Lo que se realiza en la estructura es un ciclo while el cual recorre la lista, y verifica si es que hay o no hay un elemento que posea el numero de lista del valor recibido por la función, al solo mantener una iteración este tiende a ser O(n).

***update:*** Función la cual nos sirve para actualizar la lista, recibe un indice de posición y un valor a buscar, recorre la lista una vez con un ciclo while para así actualizar indices, por ende al solo tener un ciclo iterativo de instrucciones su complejidad es de O(n).

***remove:*** Como las ya mencionadas anteriormente es lineal, esto por que pese a que en el algoritmo find encontramos ciclos if multiples así como anidados, el que realmente nos define su orden de complejidad es el while, y al existir solo uno este realizando una acción iterativa es de orden de complejidad O(n).

***clear:*** Para esta función podemos interpretarla como un destructor el cual vacia o mejor dicho elimina todos los elementos insertados a la lista doblemente ligada, como cumple conun ciclo iterativo de instrucciones para eliminar el contenido gracias a un while, su complejidad es del nivel O(n).

***toString (todas):*** Para las funciones de tipo toString del proyecto podemos generalizarlas y decir que son todas de orden O(n) esto por que todas recorren la lista para así poder convertirla a ella y a sus datos en una cadena de caracteres la cual pueda ser manipulada en alguna otra variable compatible en la cual sea almacenada.

***dlistSort:*** Siendo la función dlistSort la que realiza uno de los principales requerimientos de la actividad el cual es el ordenamiento de la lista, en este caso por medio del numero de lista de las personas, esta modelada para seguir el mismo esquema de un bubble sort, con la diferencia que este funciona por medio de ciclos while anidados, en los cuales uno la recorre mientras que el otro realiza las comparaciones así como el intercambio de posiciones, en la lista, al mantener dos iteraciones dependientes la una de la otra su orden de una manera más explicita sería decir que es de O(n-casi cuadrada) por la dependencia, pero de manera formal se puede tomar como O(n^2).

***searchRange:*** Por ultimo nuestra función de busqueda por rangos recibe los rangos de inicio y final, igualmente por medio del numero de lista, para posteriormente mostrar estos con los datos desplegados de la persona, recorre la lista y una vez que los encuentra comienza a mostrarlos, con unicamente la excepción de si se busca el primero pues comienza a partir del head. No obstante al mantener una iteración en las instrucciones de la función su complejidad es de orden O(n).

**Archivo: aplicacion2.h**

Para esta entrega en el header aplicacion2.h lo que se implementa es la función principal2 la cual evocara toda la aplicación posteriormente en un archivo fuente, de tipo void, en donde primeramente declaramos las variables que se utilizaran para el cumplimiento de esta actividad, entonce así abrimos *'register.txt'* que sera nuestro flujo de entrada en donde se encuentran todos los datos de manera desordenada, estos los introducimos en una variables auxiliar la cual es tempPersona, en donde se almacenan personalmente las personas ya convertidas en objetos de tipo Persona, pues en un while se iban guardando una por una, posterior a ello se añadieron en la lista doblemente ligada con la función add. Una vez echo esto se ordenara todo por medio del numero de lista de la persona, esto se reliza con la función dlistSort, posterior a ello se inmerge en un menu el cual corre los casos de prueba, realiza una busqueda por rangos si así lo requieres o termina el programa, para que de ultimo lo que se realice sea la creación de un archivo nuevo el cual se llamara 'outflow.txt' pues guarda el flujo de entrada pero ya ordenado por numero de lista.

***principal2:*** Al tener en su estructura un while, esta pasa automaticamente a ser de complejidad lineal pues se realiza un ciclo de iteración para así realizar un conjunto de instrucciones donde se guardara en variables los datos de cada registro del flujo de entrada, siendo entonces la complejidad de este de orden O(n).

**Archivo: main.cpp**

Este archivo unicamente lo que nos realiza es que corre la función principal2 la cual es proveniente del archivo aplicacion2.h siendo entonces este de una complejidad igual a la del archivo ya antes mencionado, por lo cual su complejidad de main.cpp así como de la función principal int main() es de orden lineal, es decir O(n).
