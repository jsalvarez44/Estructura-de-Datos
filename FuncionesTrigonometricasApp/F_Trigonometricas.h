/**
 *
 * @author Sebastian Alvarez
 * @date 30/Sep/2019
 */
#include <iostream>
using namespace std;

class My_Math{
private:
    const double PI = 3.14159;
    const double EPSILON = 0.00001;
public:
    double angulo_a_radianes(double);
    double potencia(double, int);
    long int factorial(int);
    double positivo(double);
    double seno(double);
    double coseno(double);
    double tangente(double);
};
double My_Math::angulo_a_radianes(double angulo) {
    return (angulo * PI) / 180;
}
double My_Math::potencia(double base, int exp) {
    if(exp == 0 || base == 1){
        return 1;
    }
    if(base == -1){
        return 1-(exp%2)*2;
    }
    double resultado = base;
    while(exp-- > 1){
        resultado*=base;
    }
    return resultado;
}
long int My_Math::factorial(int factor){
    if(factor == 0) return 1;
    long int resultado = 1;

    do{
        resultado*=factor;
    }while(factor-- > 1);
    return resultado;
}
double My_Math::positivo(double numero){
    if(numero<0) return -1*numero;
    return numero;
}
double My_Math::seno(double x){
    double resultado=0;
    double resultado_anterior=0;

    int sumador = 0;
    do{
        resultado_anterior = resultado;
        resultado+= potencia(-1,sumador)*potencia(x,2*sumador+1)/factorial(2*sumador+1);
        sumador++;
    }while(positivo(resultado-resultado_anterior) >= EPSILON);

    return resultado;
}
double My_Math::coseno(double x){
    double resultado=0;
    double resultado_anterior=0;

    int sumador = 0;
    do{
        resultado_anterior = resultado;
        resultado+= potencia(-1,sumador)*potencia(x,2*sumador)/factorial(2*sumador);
        sumador++;
    }while(positivo(resultado-resultado_anterior) >= EPSILON);

    return resultado;
}
double My_Math::tangente(double x){
    if(x/(PI/2)== (int)(x/(PI/2))){
        cout << "Error: el angulo no debe ser multiplo de 90" << endl;
        return 0;
    }

    return seno(x)/coseno(x);
}