## Actividad Integral 6.- Una nueva estructura (Evidencia Competencia) ##

### Estructura presentada: Algoritmo de ordenamiento Radix ###

El ordenamiento Radix es un algoritmo de ordenamiento que ordena enteros procesando sus dígitos de forma individual. Sabemos que los numeros de tipo entero en el ambito de la programación representan varias cosas y se pueden representar en varios tipos de cosas, por ejemplo, cadenas de caracteres, nombres o fechas pero este algoritmo es más aconsejable en su uso para literalmente variables de tipo entero (integer, unsigned int, etc.) más que nada, aunque cabe aclarar que no sólo puede aplicarse a los enteros.
No obstante cabe aclarar que para esta entrega unicamente se implemento para el ordenamiento de numeros enteros, además de que este algoritmo se caracteriza por que puede realizar ordenamiento en un tipo de base o sistema numerico determinado como varias personas le llaman en la rama de la numerología, no obstante para nuestro caso, sería en base diez, o igualmente como es dicho **sistema decimal** por lo que utilizar numeros no pertenecientes a este sistema, como el negativo nos daran un *Segmentation fault*.

Creado el: 04/12/2020

Autor: Jesús Ugalde Reséndiz

Lenguaje: C/C++

Matería: TC1031

**Funcionamiento**

La idea basica de el ordenamiento Radix es ordenar dígito por dígito comenzando desde el dígito menos significativo hasta el dígito más significativo. El ordenamiento que se realiza por el algoritmo radix utiliza la ordenación por conteo como una subrutina para ordenar, primero encontrando las concurrencias para posteriormente ahora si llevar a cabo el algoritmo respectivo de ordenamiento.


**ANALISIS DE COMPLEJIDAD ALGORITMO/TEMPORAL POR ARCHIVO**

**Archivo: radix.h**

Empezando con el invitado estelar de la fiesta, este archivo contiene el algoritmo de ordenamiento, así como las funciones auxiliares en este, que son getMax, countSort y printArray.

***getMax:*** El getMax la unica función que realiza es la de darnos el numero más grande contenido en el arreglo, esto lo hace en n numero de iteraciones por medio de un ciclo for, a lo que su complejidad algoritmica es O(n), lineal.

***countSort:*** En esta función lo que hacemos es un conteo en el arreglo que recibe como parametro el arreglo a utilizar así como su tamaño del mismo y la base en la que aremos el ordenamiento. aunque este parezca de complejidad elevada por contener varios for, la verdad es que unicamente es de orden O(n), pues estos no estan anidados, y por ende es de orden lineal pues aunque la complejidad n se multiplica por tres sigue siendo una constante por tanto O(n).

***radixSort:*** Nuestro invitado estelar sorprendentemente depende de su sistema decimal así como de su funcion countSort para poder determinarse su manera de operar así como su orden de complejidad, pues este mantiene una orden O(kn) debido al for que esta dentro de su for, además que como ya se dijo sus iteraciones propias dependen de la base que se use, además de su funcion countSort tenemos entonces que su complejidad final sería para el caso promedio O(kn).

***printArray:*** Al solamente imprimir nuestro array, por medio de n iteraciones de un for su complejidad algoritmica es de O(n).

**Archivo: casoPrueba.h**

En este header lo que tenemos es los casos de prueba además de una función que imprime las salidas de los mismos, al ser solo los casos de prueba algoritmos que mandan a llamar al radix, su complejidades la misma que la de este ultimo. además de que igualmente la función ***printCase*** es de una complejidad O(n) pues practicamente hace lo mismo que printArray.

**Archivo: appextra.h**

Este archivo unicamente esta dedicado a la función que se correra en nuestro archivo fuente main.cpp, al recibir esta el archivo *valores.txt* que contiene un arreglo grande de numeros recorriendolo para transformarlo en entero, por medio de un while, y a funcion propia de C++ getline y stoi, posteriormente guarda un archivo con el flujo de salida que es el arreglo de *valores.txt* pero esta ves de manera ordenada, guardandolo en *outflow.txt* y despues pregunta si quiere ver en accion o no casos de prueba.

***extra:*** Esta función de tipo void al solo contener un while y algunos for dentro de ella mantiene la complejidad temporal lineal que es O(n).

**Archivo: main.cpp**

Como unicamente en este archivo fuente se ejecuta en su función principal todo lo que hay en appextra.h su complejidad es exactamente la misma que esta.

### Casos de prueba ###


***Caso de prueba 1***

*Entrada / Input:*

{ 56 23 2 45 25 36 7 }

*Salida / Output:*

Primer caso:

{ 2 7 23 25 36 45 56 }

***Caso de prueba 2**

*Entrada / Input:*

{ 1 22 6 3 5 1 8 49 6 0 14 }

*Salida / Output:*

Segundo caso:

{ 0 1 1 3 5 6 6 8 14 22 49 }

***Caso de prueba 3**

*Entrada / Input:*

{ 12 1 3 }

*Salida / Output:*

Tercer caso:

{ 1 3 12 }

***Caso de prueba 4**

*Entrada / Input:*

{ 1 0 10 11 25 2 }

*Salida / Output:*

Cuarto caso:

{ 0 1 2 10 11 25 }

***Caso de prueba 5**

*Entrada / Input:*

{ 986522 12336 5486 241 58966 25436 984 154 }

*Salida / Output:*

Quinto caso:

{ 154 241 984 5486 12336 25436 58966 986522 }

### Ejemplos de donde se puede aplicar ###

Al ser más que nada recomendado este algoritmo de ordenamiento para numeros enteros, puede utilizarse para organizar cosas como lo son numeros de codigo postal, id cortos de empresas o escuelas, fechas de nacimiento, temperaturas o datos de algun sensado corto de dato como lo pueden ser datos de sensores de IoT.

**Fuentes de información:**

https://www.ecured.cu/Ordenamiento_Radix
https://www.bing.com/videos/search?q=radix+sort&docid=607990983843121380&mid=C65C5CE3176258EB38E6C65C5CE3176258EB38E6&view=detail&FORM=VIRE
