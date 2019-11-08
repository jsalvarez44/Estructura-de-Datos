/**
 *               UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 *                  CARRERA DE INGENIERIA DE SOFTWARE
 * NOMBRE:                 SEBASTIAN ALVAREZ
 * FECHA DE ELABORACION:   30 - SEP - 2019
 * FECHA DE MODIFICACION:  30 - SEP - 2019
 */
#include <iostream>
#include "F_Trigonometricas.h"
#include "Ingreso.h"

int main() {
	Ingreso ingreso;
	My_Math operaciones;
	std::cout << "CALCULO DE SENO Y COSENO" << std::endl;
	string n_dato = ingreso.ingresar("Ingrese un numero flotante :");

	double calc_seno = operaciones.seno(operaciones.angulo_a_radianes(atof(n_dato.c_str())));
	double calc_coseno = operaciones.coseno(operaciones.angulo_a_radianes(atof(n_dato.c_str())));

	std::cout << "\n\n";
	std::cout << "Valor del seno: " << calc_seno << std::endl;
	std::cout << "Valor del coseno: " << calc_coseno << std::endl;
	return 0;
}