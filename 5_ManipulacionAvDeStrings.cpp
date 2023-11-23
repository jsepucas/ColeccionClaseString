#include <iostream>
#include <string>

int main() {
    std::string cadenaPrincipal, cadenaAInsertar;
    int posicionInicio, longitud;

    std::cout << "Introduce la cadena principal: ";
    std::getline(std::cin, cadenaPrincipal);

    std::cout << "Introduce la posición de inicio para la subcadena: ";
    std::cin >> posicionInicio;
    std::cout << "Introduce la longitud de la subcadena: ";
    std::cin >> longitud;

