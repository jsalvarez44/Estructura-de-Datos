/*
 *                                UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 *                                        INGENIERIA DE SOFTWARE
 * Autor: Sebastian Alvarez
 * NRC: 2269
 * Tema: Prueba Parcial
 * Fecha de creacion: 16/Oct/2019
 * Fecha de modificacion: 16/Oct/2019
 */
#include <iostream>
#include "Ingreso.h"
#include "Matriz.h"

int main() {
	Ingreso ingreso;
	int n_Fila = 0, n_Columna = 0, exponente = 0;
	bool bandera_F = false, bandera_C = false, bandera = false, bandera_E = false;

	while (!bandera) {
		//INGRESO DE FILA Y COLUMNA MAYORES QUE 0 Y MENORES QUE 10
		while (!bandera_F) {
			n_Fila = atoi(ingreso.ingresar("Ingrese valor entero de fila: ").c_str());
			if (n_Fila > 0 && n_Fila < 10) {
				bandera_F = true;
			}
		}
		while (!bandera_C) {
			n_Columna = atoi(ingreso.ingresar("Ingrese valor entero de columna: ").c_str());
			if (n_Columna > 0 && n_Columna < 10) {
				bandera_C = true;
			}
		}

		//VERIFICACION DE MATRIZ CUADRADA
		if (n_Fila != n_Columna) {
			std::cout << "La matriz tiene que ser cuadrada para este proceso" << std::endl;
		}
		else {
			bandera = true;
		}
	}

	Matriz matriz(n_Fila, n_Columna);
	matriz.crearMatriz();
	matriz.encerar();
	matriz.llenarMatriz();

	std::cout << "\nMATRIZ ORIGINAL" << std::endl;
	matriz.imprimirMatriz();

	while (!bandera_E) {
		exponente = atoi(ingreso.ingresar("Ingrese valor entero para exponente: ").c_str());
		if (exponente > 0 && exponente < 10) {
			bandera_E = true;
		}
	}

	matriz.multiplicarMatriz(exponente);
	std::cout << "\nMATRIZ MULTIPLICADA" << std::endl;
	matriz.imprimirMatriz();

	return 0;
}
