/*
 * Archivo: radix.h
 * Creado: 03/12/2020
 * Autor: Jesús Ugalde Reséndiz
 * Descripción: Este archivo contiene nuestro algoritmo de ordenamiento radix, el cual esta
 * diseñado para poder funcionar en base 10, o sistema numerico decimal.
*/
#ifndef RADIX_H_INCLUDED
#define RADIX_H_INCLUDED

#include <iostream>

/*La función getMax nos regresara el valor más grande contenido en el arreglo*/
int getMax(int arr[], int n){
  int mx = arr[0];
  for (int i = 1; i < n; i++)
      if (arr[i] > mx){
        mx = arr[i];
      }
  return mx;
}

/*En esta función lo que hacemos es un conteo en el arreglo que recibe como parametro el arreglo
a utilizar así como su tamaño del mismo y la base en la que aremos el ordenamiento.*/
void countSort(int arr[], int n, int exp){
  /*Este arreglo sera nuestra salida*/
  int output[n];
  /*El array count se encarga de las ocurrencias del arreglo, es decir nos dice cuantas veces
  se repite un numero en el arreglo*/
  int count[10] = { 0 };
  int i;

  /*En este ciclo almacenamos las ocurrencias del arreglo en nuestro auxiliar de recuento count*/
  for (i = 0; i < n; i++){
    count[(arr[i] / exp) % 10]++;
  }

  /*Aquí cambiamos las ocurrecias de tal forma que ahora contenga las posición o indices de los digitos
  en la salida esperada*/
  for (i = 1; i < 10; i++){
    count[i] += count[i - 1];
  }

  /*Finalmente aquí construimos el arreglo de salida*/
  for (i = n - 1; i >= 0; i--) {
      output[count[(arr[i] / exp) % 10] - 1] = arr[i];
      count[(arr[i] / exp) % 10]--;
  }

  /*Tomamos el arreglo de entrada de tal forma que sea igual al de salida para que así contenga los
  numeros ordenados dependiendo del digito actual*/
  for (i = 0; i < n; i++)
      arr[i] = output[i];
}

/*Finalmente implementamos la función que nos importa en la entrega*/
/*Radix Sort u Ordenamiento Raíz*/
void radixSort(int arr[], int n){
  /*Determinamos el numero más grande del arreglo*/
  int m = getMax(arr, n);

  /*Procedemos a realizar el ordenamiento, contando por cada digito.
  Tomar en cuenta que en lugar de pasarse el numero de digitos pasamos a exp, quien es
  10 elevado a la potencia del valor de nuestro acumulador i, donde i es el numero de digito actual.*/
  for (int exp = 1; m / exp > 0; exp *= 10){
    countSort(arr, n, exp);
  }
}

/*Imprimimos el array de tal forma que podamos visualizarlo.*/
void printArray(int arr[], int n){
  for (int i = 0; i < n; i++){
    std::cout<<i + 1<<".- "<<arr[i] <<std::endl;
  }
}

#endif /*RADIX_H_INCLUDED*/
