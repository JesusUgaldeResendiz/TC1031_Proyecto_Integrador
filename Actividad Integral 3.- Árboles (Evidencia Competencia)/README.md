## **ACTIVIDAD INTEGRAL 3.- ARBOLES (EVIDENCIA COMPETENCIA)**##

**Introducción**

*Este trabajo consiste en utilizar la información de un grupo de personas, el cual pertenece a una universidad privada que recientemente a abierto sus puertas por lo cual cuenta con sistemas mal programados para realizar busquedas en sus alumnos así como manejo de información en general. Se te pide que los ayudes a mejorar esta situación.
La idea que surgio en  mi para ayudar a la institución fue manejar esta vez la información por medio de estructuras de datos, pero esta vez más concretamente con un arbol heap min para así poder mostrar de una manera más grafica la información además de moelarla para ellos de una forma más entendible.
Al proveernos un archivo en formato de bitacora o formato de logs llamado "register.txt" puede agruparse en los siguientes atributos: matricula / nombre / apellido paterno / apellido materno / carrera / semestre / promedio por lo cual podemos plantearnos el como seran los campos de datos a rellenar.*

Creado el: 24/11/2020

Autor Jesús Ugalde Reséndiz

LEnguaje C/C++

Materia TC1031

**ANALISIS DE COMPLEJIDAD ALGORITMO/TEMPORAL POR ARCHIVO**

**Archivo: persona.h**

Este archivo header solo es un archivo de apoyo, pues su función principal es que se utilizara para poder convertir cada registro en un objeto de tipo persona, el cual, contara con los atributos de: matricula / nombre / apellido paterno / apellido materno / carrera / semestre / promedio respectivamente, todos sus atributos son de orden O(1) pues no poseen ciclos de ningun tipo ni recursión en ningún nivel.

**Archivo: heapaux.h**
