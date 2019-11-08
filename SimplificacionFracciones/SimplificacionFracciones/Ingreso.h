#pragma once
/**
 *
 * @author Sebastian Alvarez
 * @date 23/SEP/2019
 */
#include <iostream>
#include <string>

using namespace std;

class Ingreso {
public:
	float ingresar(string);
	bool validarTipoFloat(string);
};
/**
 *
 * @brief Ingresa datos desde teclado a numerador o denominador
 * @param msg el mensage de ingreso
 * @return la conversion de string a flotante
 */
float Ingreso::ingresar(string msg) {
	string numero;
	bool esValido = false;

	while (!esValido) {
		try {
			cout << msg;
			getline(cin, numero);
			esValido = validarTipoFloat(numero);

			if (!esValido) {
				throw numero;
			}
		}
		catch (string e) {
			cout << "El dato (" << e << ") no es valido" << endl;
		}
	}
	return strtof(numero.c_str(), 0);
}
/**
 *
 * @brief Valida si el numero ingresado es realmente un float
 * @param numero el numero ingresado por usuario
 * @return un booleano verdadero si el numero es float y falso si no lo es
 */
bool Ingreso::validarTipoFloat(string numero) {
	int inicio = 0;
	if (numero.length() == 0) {
		return 0;
	}
	if (numero[0] == '+' || numero[0] == '-') {
		inicio = 1;
		if (numero.length() == 1) {
			return 0;
		}
	}
	for (int i = inicio; numero.length() > i; i++) {
		if (!isdigit(numero[i]) && numero[i] != '.') {
			return 0;
		}
	}
	return 1;
}