#include <iostream>
#include <string>

int main() {
    std::string cadena;
    std::cout << "Pon una oracion: ";
    std::getline(std::cin, cadena);

    std::cout << "La cadena es: " << cadena << std::endl;

    std::string cadena = "Esto es un ejemplo de cadena ";
    std::cout <<"El tamano de la cadena es: " <<cadena.size() << std::endl;
    if (cadena.empty()) {
        std::cout << "La cadena esta vacia" << std::endl;
    } else {
        std::cout << "La cadena no esta vacia" << std::endl;
    }
    return 0;
}