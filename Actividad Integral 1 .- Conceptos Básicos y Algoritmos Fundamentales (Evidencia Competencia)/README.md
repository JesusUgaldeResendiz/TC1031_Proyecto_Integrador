## Actividad Integral 1 .- Conceptos Básicos y Algoritmos Fundamentales (Evidencia Competencia) ##

**Introducción**

*Este trabajo consiste en utilizar la información de un grupo de personas, el cual pertenece a una universidad privada que recientemente a abierto sus puertas, por lo cual cuenta con sistemas los cuales no son optimos para realizar busquedas en sus alumnos. Se te pide que los ayudes a mejorar esta situación.
Lo que a mi se me ocurrio para utilizar como solución fue el uso de estructuras de datos de tipo contenedor, especificamente el contenedor vector para agilizar el manejo de datos así como sus busquedas en alguna persona o en un rango determinado a manera de arrays.
Al proveernos un archivo en formato de bitacora o formato de logs llamado "register.txt" puede agruparse en los siguientes atributos: matricula / nombre / apellido paterno / apellido materno / carrera / semestre por lo cual podemos plantearnos el como seran los campos de datos a rellenar.*


**NOTA: Este archivo unicamente corre en una computadora con sistema operativo Windows, debido a la inclusión de la libreria <windows.h>, en caso de contar con otro borrar la función clock y mantener comentadas las lineas que lo incluyen. **

Creado el: 21/09/2020

Corregido el: 02/12/2020

Autor: Jesús Ugalde Reséndiz

Lenguaje: C/C++

Matería: TC1031

**Correciones**

Se incluyo el main, el cual por cuestiones de red no se pudo subir al lado de algunas otras librerias incluidas en este proyecto, se utilizo un algortimo de ordenamiento más adecuado a la problematica, además de explicar el funcionamiento detallado del programa en el README.md, se agregaron casos de prueba así como una mejora general del pryecto entregado en un inicio.

### **ANALISIS DE COMPLEJIDAD ALGORITMO/TEMPORAL POR ARCHIVO** ###

**Archivo: persona.h**

Este archivo header solo es un archivo de apoyo, pues su función principal es que se utilizara para poder convertir cada registro en un objeto de tipo persona, el cual, contara con los atributos de: matricula / nombre / apellido paterno / apellido materno / carrera / semestre respectivamente, todos sus atributos son de orden O(1) pues no poseen ciclos de ningun tipo ni recursión en ningún nivel.

**Archivo: ordena.h**

Aquí se encuentran funciones auxiliares de nuestro proyecto, como lo son nuestra función clock, la cual realiza la acción de ser un cronometro para agregar estilo al programa, utiliza la libreria windows.h para su funcionamiento, igualmanete estan las funciones que pertenecen a nuestro algoritmo de ordenamiento, además de nuestro algoritmo de busqueda.

***clock:*** Esta función contiene en su estructura un ciclo while, por lo que al manetener una iteración pasa a ser de orden O(n), funciona gracias a la función de la biblioteca "windows.h" la cual es Sleep, que realiza una pausa del programa en milisegundos, esta es recibida por esta función antes mencionada y es de un segundo, por cada incremento del contador de tipo entero "acum".

***swap:*** El metodo swap mantiene una orden de tipo constante, es decir de tipo O(1), pues unicamente realiza un intercambio entre dos valores.

***bubbleSort:*** La función encargada de nuestro ordenamiento a lado de su auxiliar swap, hace un recorrido por medio de ciclos for anidados en donde compara los valores para así efectuar el swap si es que uno es mayor que otro para terminar en in ordenamiento ascendente al estar don una iteración de n pasos y otra igual dentro de esta la orden es de O(n^2), es decir cuadratica.

***busqSequential:*** Nuestro algoritmo de busqueda secuencial como el nombre lo dice lo hace en forma de una secuencia en la cual recibe primero un dato que es la matricula de la persona y recorre un arreglo, si ve que la posición del arreglo es igual a la del dato de entrada despliega a la persona con todos sus campos.

**Archivo: prueba.h**

Este archivo .h contiene lo que vienen siendo los casos de prueba en codigo, así como la busqueda por rangos que se implemento en el proyecto, siendo sus dos metodos principales estos ya mencionados en este archivo.

***busqRangos:*** Aquí tenemos a nada más ni nada menos, ni nada más ni nada menos que nuestra busqueda por rangos, la cual recibe como paramtros un contenedor de tipo vector, de un tipo de dato aleatorio, así como dos numeros enteros que nos sirven para introducir el rango de busqueda que vamos a cubrir, como unicamente tenemos sentencias condicionales dentro y un for que realiza n veces la acción de desplegar las personas pertenecientes al rango dado su complejidad de este metodo es de orden O(n). lineal

***casosPrueba:*** Este metodo mantiene almacenados los casos de prueba así como una pequeña documentación sobre el funcionamiento de los mismos y su salida esperada, además del por que el tipo de error, teniendo esta ultimas dos cosas a razón de comentarios.

**Archivo: aplicacion.h**

Para esta entrega en la biblioteca aplicacion.h lo que se implementa es la función principal la cual evocara toda la aplicación posteriormente en un archivo fuente, función de tipo void, en donde primeramente declaramos las variables que se utilizaran para el cumplimiento de esta actividad. Una vez declarada abrimos he insertamos el flujo de entrada proveniente del archivo *'register.txt'* en las mismas, esto pasa a guardarse en una Persona temporal que se insertara a nuestro vector, despues de eso realizamos el ordenamiento para una vez luego de esto almacenarlo en un nuevo archivo que sera *'outflow.txt'* en donde estara el vector ya ordenado por matricula de menor a mayor. Posterior a ello usted podra seleccionar si realizar algún tipo de busqueda o correr los casos de prueba, luego de esto el programa se dara por finalizado.

**Archivo: main.cpp***

Este es el archivo fuente del proyecto, unicamente la acción que realiza es que corre la función principal la cual es perteneciente a aplicacion.h siendo entonces este de una complejidad igual a la del archivo ya antes mencionado, por lo cual su complejidad de main.cpp así como de la función principal int main() es de orden lineal, es decir O(n) al depender de la función tipo void principal().

### Casos de prueba ###

Para los casos de prueba se utilizara la busqueda por rangos, donde la entrada seran matriculas dentro de la base de datos, así como datos que no pertenecen a esta para así poder validar también los posibles errores por fuera de rango o en caso de que no se encuentre la Persona con la matricula de entrada.

================================================================================================

**Caso correcto respetando los rangos he indices**

*Entradas / Inputs*

cout<<"Primer caso: "<<"1705935 y 1706320"<<endl;

busqRangos(v, 1705935, 1706320);
  
*Salidas / Output*

Usted se encuentra dentro del rango de busqueda
A continuacion realizaremos la busqueda de los alumnos correspondientes del rango

Los alumnos dentro del rango son:

1705935 Oscar Delgadillo Ochoa IRS Tercero

1706066 Santiago Santibañez Herrera ITC Tercero

1706166 Emiliano Zapata Montes IRS Tercero

1706320 Ismael Garcia Gónzalez IRS Tercero

================================================================================================

**Caso correcto respetando los rangos he indices**

*Entradas / Inputs*

cout<<"Segundo caso: "<<"1706340 y 1706424"<<endl;

busqRangos(v, 1706340, 1706424);

*Salidas / Output*

Usted se encuentra dentro del rango de busqueda
A continuacion realizaremos la busqueda de los alumnos correspondientes del rango

Los alumnos dentro del rango son:
1706340 Jesús Ugalde Reséndiz IRS Tercero
1706424 Miguel Luna Vega IRS Tercero

================================================================================================

**Caso equivoco por estar fuera de rango**

*Entradas / Inputs*

cout<<"Tercer caso: "<<"2220000 y 1806166"<<endl;

busqRangos(v, 2220000, 1806166);

*Salidas / Output*

Lo sentimos no esta dentro del rango de busqueda

================================================================================================

**Caso equivoco por estar fuera de rango**

*Entradas / Inputs*

cout<<"Cuarto caso: "<<"1105632 y 1656432"<<endl;

busqRangos(v, 1105632, 1856432);

*Salidas / Output*

Lo sentimos no esta dentro del rango de busqueda
