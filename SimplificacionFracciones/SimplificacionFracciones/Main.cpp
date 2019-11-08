/**
 *                                   UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 *                                      CARRERA DE INGENIERIA DE SOFTWARE
 *                                             ESTRUCTURA DE DATOS
 *                                               TERCER SEMESTRE
 * DOCENTE:               ING. FERNANDO SOLIS
 * AUTOR:                 SEBASTIAN ALVAREZ
 * FECHA DE ELABORACION:  23/SEP/2019
 * FECHA DE MODIFICACION: 25/SEP/2019
 */
#include <iostream>
#include "Ingreso.h"
#include "Fraccion.h"

using namespace std;

int main() {
	Ingreso leer;

	cout << "INGRESO DE DATOS\n" << endl;
	cout << "PRIMERA FRACCION" << endl;
	float numerador_1 = leer.ingresar("Ingrese numerador:");
	float denominador_1 = leer.ingresar("Ingrese denominador:");
	cout << "El numerador es " << numerador_1 << " y el denominador es " << denominador_1 << "\n" << endl;

	Fraccion fr_1(numerador_1, denominador_1);

	cout << "SEGUNDA FRACCION" << endl;
	float numerador_2 = leer.ingresar("Ingrese numerador:");
	float denominador_2 = leer.ingresar("Ingrese denominador:");
	cout << "El numerador es " << numerador_2 << " y el denominador es " << denominador_2 << "\n" << endl;

	Fraccion fr_2(numerador_2, denominador_2);

	//PROCESO CON DEVOLUCION DE VALOR
	/*Fraccion n_Fraccion = n_Fraccion.procesar(fr_1, fr_2);
	n_Fraccion.imprimir(n_Fraccion);*/

	//PROCESO CON REFERENCIA A PUNTERO
	Fraccion* p, n_Fraccion(0, 0);
	p = &n_Fraccion;
	n_Fraccion.procesar(p, fr_1, fr_2);
	n_Fraccion.imprimir(n_Fraccion);

	return 0;
}