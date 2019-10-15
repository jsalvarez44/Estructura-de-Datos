#include <cstdlib>
#include "Quicksort.h"
#include "Ingreso.h"

#define getSize(arr) sizeof(arr)/sizeof(*arr)

int main(){
    Ingreso ingreso;

    int* arr = new int[atoi(ingreso.ingresar("Ingrese numero entero longitud del vector: ").c_str())];

    for(int i=0; i < getSize(arr) ;i++){
        arr[i] = atoi(ingreso.ingresar("Ingrese valor entero para almacenar en el vector: ").c_str());
    }

    imprimir(arr, "Vector antes de Quicksort");
    quicksort(arr, 0, getSize(arr));
    imprimir(arr, "Vector despues de Quicksort");

    return 0;
}