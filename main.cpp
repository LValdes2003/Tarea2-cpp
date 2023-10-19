#include <iostream>
#include "matematicas.h"
#include "funciones.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "El area del circulo es: " << areaCirculo(5) << "\n";
    std::cout << "La superficie del circulo es: " << superficieCirculo(5) << "\n";
    std::cout << "El area del cuadrado es: " << areaCuadrado(5) << "\n";
    std::cout << "El perimetro del cuadrado es: " << perimetroCuadrado(5) << "\n";
    std::cout << "La suma de 5 y 3 es: " << suma(5,3) << "\n";
    return 0;
}
