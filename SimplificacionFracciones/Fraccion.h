/**
 * @author Sebastian Alvarez
 * @date 23/SEP/2019
 */
#include <iostream>

using namespace std;

class Fraccion{
private:
    float numerador;
    float denominador;
public:
    Fraccion(float, float);
    float getNumerador();
    float getDenominador();
    void setNumerador(float);
    void setDenominador(float);
    Fraccion procesar(Fraccion, Fraccion);
    void imprimir(Fraccion);
    void procesar(Fraccion *, Fraccion, Fraccion);
};
Fraccion::Fraccion(float numerador_, float denominador_) {
    numerador = numerador_;
    denominador = denominador_;
}
float Fraccion::getNumerador() {
    return numerador;
}
float Fraccion::getDenominador(){
    return denominador;
}
void Fraccion::setNumerador(float numerador_){
    numerador = numerador_;
}
void Fraccion::setDenominador(float denominador_){
    denominador = denominador_;
}
/**
 *
 * @brief Procesa dos fracciones devolviendo una
 * @param fr_1 fraccion con numerador y denominador
 * @param fr_2 fraccion con numerador y denominador
 * @return una fraccion producto de fr_1 y fr_2
 */
Fraccion Fraccion::procesar(Fraccion fr_1, Fraccion fr_2) {
    float a = fr_1.getNumerador();
    float b = fr_1.getDenominador();
    float c = fr_2.getNumerador();
    float d = fr_2.getDenominador();

    float n_Numerador = a*c;
    float n_Denominador = b*d;

    Fraccion nuevaFr(n_Numerador, n_Denominador);
    return nuevaFr;
}
/**
 *
 * @brief Procesa dos fracciones modificando el valor del puntero f_Final
 * @param f_Final puntero que indica el espacio de memoria de una fraccion desde el main
 * @param fr_1 fraccion con numerador y denominador
 * @param fr_2 fraccion con numerador y denominador
 */
void Fraccion::procesar(Fraccion *f_Final, Fraccion fr_1, Fraccion fr_2){
    float a = fr_1.getNumerador();
    float b = fr_1.getDenominador();
    float c = fr_2.getNumerador();
    float d = fr_2.getDenominador();

    float n_Numerador = a*c;
    float n_Denominador = b*d;

    f_Final->setNumerador(n_Numerador);
    f_Final->setDenominador(n_Denominador);
}
/**
 *
 * @brief Muestra una fraccion en pantalla
 * @param fr fraccion a mostrar en pantalla
 */
void Fraccion::imprimir(Fraccion fr) {
    cout << "\nLa nueva Fraccion es: ( " << fr.getNumerador() << " / " << fr.getDenominador() << " )";
}