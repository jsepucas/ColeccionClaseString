#include <iostream>
#include <string>

int main() {
    std::string cadenaPrincipal, subcadenaABuscar, subcadenaReemplazo;

    // Pedir al usuario que introduzca la cadena principal
    std::cout << "Introduce la cadena principal: ";
    std::getline(std::cin, cadenaPrincipal);