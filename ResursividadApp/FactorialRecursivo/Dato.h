#pragma once
/**
 * @author Sebastian Alvarez
 * @date 30/Sep/2019
 */
#include <iostream>

class Dato {
private:
	int valor;
public:
	Dato(int);
	Dato();
	void setValor(int);
	int getValor();
	void toString();
	int procesar(int);
};
Dato::Dato() {
	setValor(0);
}
Dato::Dato(int n_dato) {
	setValor(n_dato);
}
void Dato::setValor(int n_dato) {
	valor = n_dato;
}
int Dato::getValor() {
	return valor;
}
void Dato::toString() {
	std::cout << "Valor: " << valor << std::endl;
}
/*Funcion del factorial recursivo*/
int Dato::procesar(int f_Valor) {
	if (f_Valor == 1) {
		return 1;
	}
	else {
		return f_Valor * procesar(f_Valor - 1);
	}
}
