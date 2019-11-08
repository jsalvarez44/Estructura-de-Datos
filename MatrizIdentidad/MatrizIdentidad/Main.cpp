#include <iostream>
#include "Identidad.h"
#include "Ingreso.h"

using namespace std;

int main() {
	Identidad id;
	float** matriz, **inv, **respuesta;
	Ingreso ingreso;

	int tamanio = atoi(ingreso.ingresar("Ingrese valor entero dimension de matriz: ").c_str());
	//INICIALIZACION
	matriz = id.inicializar(tamanio);
	inv = id.inicializar(tamanio);
	respuesta = id.inicializar(tamanio);

	//ENCERADO
	matriz = id.encerar(tamanio, matriz);
	inv = id.encerar(tamanio, inv);
	respuesta = id.encerar(tamanio, respuesta);

	//INGRESO
	cout << "Ingreso de numeros" << endl;
	matriz = id.ingresarNumeros(tamanio, matriz);

	//CALCULOS
	inv = id.calcularInversa(tamanio, matriz);
	respuesta = id.multiplicar(tamanio, matriz, inv);

	//IMPRESION
	cout << "Matriz inversa" << endl;
	id.mostrarInversa(tamanio, inv);

	cout << "Respuesta" << endl;
	id.mostrar(tamanio, respuesta);

	system("pause");
	return 0;
}