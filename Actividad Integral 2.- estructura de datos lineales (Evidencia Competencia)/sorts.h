#ifndef SORTS_H_INCLUDED
#define SORTS_H_INCLUDED

#include <vector>
#include "lib.h"

using namespace std;

//Intercambia los valores de dos variables
template <class T>
void swap(vector<T> &v, int i, int j) {
	T aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

//Algoritmo de ordenamiento que ordena un vector
template <class T>
std::vector<T> ordenaBurbuja(std::vector<T> &v)
{
	for (int i=v.size()-1;i>0;i--)
	{
		for (int j =0;j<i;j++)
		{
			if (v[j].getMatricula()>v[j + 1].getMatricula())
			{
				swap(v, j, j + 1);
			}
		}
	}
	return v;
}

//Busca un numero dentro de un vector y devuelve su posicion
template <class T>
int busqBinaria(std::vector<T> &v, int num) {

	int mid;
	int low = 0;
	int high = v.size() - 1;

	while (low <= high) {
		mid = (low + high) / 2;
		if (num == v[mid].getMatricula()) {
			return mid;
		} else if (num <= v[mid].getMatricula()) {
			high = mid - 1;
		} else if (num >= v[mid].getMatricula()) {
			low = mid + 1;
		}
	}
	return low-1;
}



#endif //SORTS_H_INCLUDED
