#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string cadenaPrincipal, cadenaAInsertar;
    int posicionInicio, longitud;

    std::cout << "Introduce la cadena principal: ";
    std::getline(std::cin, cadenaPrincipal);

    std::cout << "Introduce la posición de inicio para la subcadena: ";
    std::cin >> posicionInicio;
    std::cout << "Introduce la longitud de la subcadena: ";
    std::cin >> longitud;

    std::string subcadena = cadenaPrincipal.substr(posicionInicio, longitud);
    std::cout << "La subcadena es: " << subcadena << std::endl;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Introduce la cadena a insertar: ";
    std::getline(std::cin, cadenaAInsertar);

    cadenaPrincipal.insert(posicionInicio, cadenaAInsertar);

    // Imprimir la cadena resultante
    std::cout << "La cadena resultante es: " << cadenaPrincipal << std::endl;

    return 0;
}
