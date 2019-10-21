#include <iostream>
#include "Ingreso.h"

using namespace std;

void imprimir(int **mat, int t);
int ** crearMatriz(int d);
void encerar(int ** m,int d);
void calcularCuadradoMagico(int** matr,int t);

int main(){
    Ingreso ingreso;
    int tam = atoi(ingreso.ingresar("Ingrese un numero entero: ").c_str());
    int ** matriz = crearMatriz(tam);
    encerar(matriz, tam);
    calcularCuadradoMagico(matriz, tam);
    imprimir(matriz, tam);
    free(matriz);

    return 0;
}

void imprimir(int **mat, int t){
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            printf("%d",*(*(mat+i)+j));
            printf("%*s",j+5,"");
        }
        printf("\n");
    }
}

int ** crearMatriz(int d){
    int ** m , j;
    m =(int **)malloc(d*sizeof(int *));
    for(j=0;j<d;j++) {
        *(m + j) = (int *) malloc(d * sizeof(int));
    }
    return m;
}

void encerar(int ** m,int d){
    int i, j;
    for(i=0;i<d;i++)
        for(j=0;j<d;j++)
            *(*(m+i)+j)=0;
}

void calcularCuadradoMagico(int** matr, int t){
    int i = t / 2, j = t - 1;

    for (int index = 1; index <= t * t; ){
        if (i == -1 && j == t){
            j = t - 2;
            i = 0;
        }
        else{
            if (j == t){
                j = 0;
            }
            if (i < 0){
                i = t - 1;
            }
        }
        if (*(*(matr + i) + j)){
            j -= 2;
            i++;
            continue;
        }
        else{
            *(*(matr + i) + j) = index++;
        }
        j++; i--;
    }
}