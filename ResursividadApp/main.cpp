/**
 *               UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 *                  CARRERA DE INGENIERIA DE SOFTWARE
 * NOMBRE:                 SEBASTIAN ALVAREZ
 * FECHA DE ELABORACION:   30 - SEP - 2019
 * FECHA DE MODIFICACION:  30 - SEP - 2019
 */
#include <iostream>
#include "Dato.h"
#include "Ingreso.h"

int main() {
    Ingreso ingreso;
    Dato n_dato(ingreso.ingresar("Ingrese un numero entero : "));

    int factorial = n_dato.procesar(n_dato.getValor());

    n_dato.toString();
    std::cout << "Factorial: " << factorial << std::endl;
    return 0;
}