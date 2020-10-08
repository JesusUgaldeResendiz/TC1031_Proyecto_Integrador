**ACTIVIDAD INTEGRAL 2. - ESTRUCTURA DE DATOS LINEALES**

*Este trabajo consiste en la detección del archivo en formato de logs "registros.txt", en el cual se han introducido datos desordenados de personas relacionadas al Tec de Monterrey.*

Creado el: 07/10/2020\n
Autor: Jesùs Ugalde Reséndiz\n
Lenguaje: C++\n
Matería: TC1031\n

**ANALISIS DE COMPLEJIDAD POR ARCHIVO/ALGORITMO**

***excepcion.h:*** Este archivo unicamente fue creado para manejar las excepciones que pueden darse en el archivo de list.h en donde se ha establecido en diversas funciones, al no incluir ciclos para iteración de ningun tipo así como ningun tipo de recursividad podemos decir que su complejidad es O(n).

***lib.h:*** Centrado principalmente en tener la clase persona, que sería el auxiliar para poder tratar como objetos de esta clase a nuestro archivo de formato logs, por tanto mantiene una complejidad de O(n).

***list.h:*** Se adjunta el analisis de complejidad de este archivo en el siguiente link, debido a que se realizo con anterioridad en el curso, unicamente falto la función toString por analizar, pero esta igualmente al depender de un ciclo while es de una orden lineal.
*Link de analisis de complejidad de list.h:*
https://github.com/JesusUgaldeResendiz/TC1031-Estructuras-Formativas/tree/master/Act%202.1%20-%20Implementaci%C3%B3n%20de%20un%20ADT%20de%20estructura%20de%20datos%20lineales%20(Linked%20List)

***main.cpp:*** La función principal esta dedicada unicamente a llamar a el archivo principales.h que es donde se desarrolla todo nuestro menu de opciones o mejor dicho de actividades que hemos realizado, por tanto su complejidad va a ser exactamente la misma que la que tenga principales.h en esta entrega.

***principales.h:*** Podría interpretarse de igual forma como la implementación de nuestra principal función en este programa, lo que este realiza es la apertura del archivo que nos ayudara a poder ordenar y crear tanto un vector ordenado, así como una lista que ya estara ordenada, siendo así primero que nada la función a a analizar nuestra principal1, por lo tanto.
*principal1:* Si bien puede interpretarse de forma lineal por tener dos ciclos iterando, lo más apropiado y justamente por eso es que es de una orden de complejidad O(2n) pues pese a que operan de manera diferente pertenecen al mismo algoritmo, cosa que crea este tipo de orden en ellos.
*principal2:* Mantiene la misma orden del tipo O(2n) pues igualmente tiene un while que opera mientras que al llamar a la función toString automaticamente se esta efectuando otro, llegando a la orden antes mencionada.

***sorts.h:*** Esta compuesto del ordenamiento burbuja, el cual cumple la primera entrega de el proyecto integradorl siendo acompañado del algoritmo de busqueda binaria, y también de un swap que nos ayuda a poder cumplir el ordenamiento.
*ordenaBurbuja:* En este algoritmo tenemos que es de orden O(n^2) o como tal O(n-casi cuadrada), pues igualmente mantenemos un iterador dependiente de otro para su implementación.
*busqBinaria:* Debido a que como en este algoritmo se reduce el numero de pasos, se encuentra que su orden es de tipo O(log(n)), debido a que al tomarlo de forma comparativa reduce los pasos para encontrar nuestro valor en el arreglo, incluso pese a que esta incluido en el un ciclo while.

***talacha.h:*** Este archivo es de una orden O(log(n)) causado por que su función esta echa por medio de lo que es una busqueda binaria, la cual como ya se dijo reduce los pasos para efectuar la busqueda pues unicamente recorre el arbol en la dirección mejor echa para agilizar la busqueda, igualmente es el script para los casos de prueba.
