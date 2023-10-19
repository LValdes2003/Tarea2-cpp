//
// Created by Leonardo Valdes on 19/10/23.
//
#include <cmath>
#define PI 3.14159265358979323846

double areaCirculo(double radio) {
    return PI*radio*radio;
}

double superficieCirculo(double radio) {
    return 2*PI*radio;
}

double areaCuadrado(double lado) {
    return lado*lado;
}

double perimetroCuadrado(double lado) {
    return 4*lado;
}

double areaTriangulo(double base, double altura) {
    return base*altura/2;
}

double perimetroTriangulo(double lado1, double lado2, double lado3) {
    return lado1+lado2+lado3;
}

double seno(double angulo) {
    return sin(angulo);
}

double coseno(double angulo) {
    return cos(angulo);
}

double tangente(double angulo) {
    return tan(angulo);
}