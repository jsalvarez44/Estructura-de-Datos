#include <iostream>
#include "Quicksort.h"
#include "Ingreso.h"

constexpr auto largo = 20;
using namespace std;

void main()
{
	Ingreso ingreso;
	int n = atoi(ingreso.ingresar("Indique valor entero de numeros a ingresar: ").c_str());
	int* A = (int*)malloc(n * sizeof(int));

	leeCadena(n, A);
	quicksort(A, 0, n - 1);
	muestraCadena(n, A);
}