#ifndef TALACHA_H_INCLUDED
#define TALACHA_H_INCLUDED

#include <vector>

template <class T>
class Help
{
private:
  void swap(std::vector<T>&, int, int);
  void unirSplit(std::vector<T>&, std::vector<T>&, int, int);
  void unirArray(std::vector<T>&, std::vector<T>&, int, int, int);
  void copyArray(std::vector<T>&, std::vector<T>&, int, int);
	int bs_aux(const std::vector<T>&v,int low,int high,int val);
public:
  void ordenaMerge(std::vector<T>&);
	int busqBinaria(const std::vector<T>&v,int valor);
};

template <class T>
void Help<T>::swap(std::vector<T> &v, int i, int j)
{
	T aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

template <class T>
void Sorts<T>::unirSplit(std::vector<T> &A, std::vector<T> &B, int low, int high)
{
	int mid;

	if ((high-low)<1)
	{
		return;
	}
	mid = (high + low) / 2;
	unirSplit(A, B, low, mid);
	unirSplit(A, B, mid + 1, high);
	unirArray(A, B, low, mid, high);
	copyArray(A, B, low, high);
}

template <class T>
void Sorts<T>::unirArray(std::vector<T> &A, std::vector<T> &B, int low, int mid, int high)
{
	int i, j, k;

	i = low;
	j = mid+1;
	k = low;

	while (i<=mid &&j <=high)
	{
		if (A[i]<A[j])
		{
			B[k] = A[i];
			i++;
		} else
		{
			B[k] = A[j];
			j++;
		}
		k++;
	}
	if (i>mid) {
		for (;j<=high;j++)
		{
			B[k++] = A[j];
		}
	} else {
		for (;i<=mid;i++)
		{
			B[k++] = A[i];
		}
	}
}

template <class T>
void Sorts<T>::copyArray(std::vector<T> &A, std::vector<T> &B, int low, int high)
{
	for (int i=low;i<=high;i++)
	{
		A[i] = B[i];
	}
}

template <class T>
void Sorts<T>::ordenaMerge(std::vector<T> &v)
{
	std::vector<T> tmp(v.size());
	unirSplit(v, tmp, 0, v.size() - 1);
}

template <class T>
int Sorts<T>::busqSecuencial(const std::vector<T>&v,int valor)
{
	for (int i=0;i<v.size();i++)
	{
		if (valor == v[i])
		{
			return i;
		}
	}

	return (-1);
}

template <class T>
int Help<T>::bs_aux(const std::vector<T>&v,int low,int high,int valor)
{
	int mid;

	if (low<=high)
	{
		mid = (high+low)/2;
		if (valor==v[mid])
		{
			return mid;
		} else if (valor<v[mid])
		{
			return bs_aux(v, low, mid - 1, valor);
		} else if (valor>v[mid])
		{
			return bs_aux(v, mid + 1, high, valor);
		}
	}

	return low;
}

template <class T>
int Help<T>::busqBinaria(const std::vector<T>&v,int valor)
{
	return bs_aux(v, 0,v.size() - 1, valor);
}

#endif //TALACHA_H_INCLUDED
