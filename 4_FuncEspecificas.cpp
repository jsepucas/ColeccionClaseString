#include <iostream>
#include <string>

int main() {
    std::string cadenaPrincipal, subcadenaABuscar, subcadenaReemplazo;

    // Pedir al usuario que introduzca la cadena principal
    std::cout << "Introduce la cadena principal: ";
    std::getline(std::cin, cadenaPrincipal);

    std::cout << "Introduce la subcadena a buscar: ";
    std::getline(std::cin, subcadenaABuscar);

    // Buscar la subcadena en la cadena principal
    size_t posicion = cadenaPrincipal.find(subcadenaABuscar);

    if (posicion != std::string::npos) {
        std::cout << "Subcadena encontrada en el indice: " << posicion << std::endl;

        // Pedir al usuario que introduzca la subcadena de reemplazo
        std::cout << "Introduce la subcadena de reemplazo: ";
        std::getline(std::cin, subcadenaReemplazo);

        cadenaPrincipal.replace(posicion, subcadenaABuscar.length(), subcadenaReemplazo);

        // Imprimir la cadena resultante
        std::cout << "Cadena después del reemplazo: " << cadenaPrincipal << std::endl;
    } else {
        std::cout << "Subcadena no encontrada." << std::endl;
    }

    return 0;
}