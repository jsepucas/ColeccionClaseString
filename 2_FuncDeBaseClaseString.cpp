#include <iostream>
#include <string>

int main() {
    std::string cadena;
    std::cout << "Pon una oracion: ";
    std::getline(std::cin, cadena);
    std::cout << "La oracion es: " << cadena << std::endl;

    std::cout <<"El tamano de la cadena es: " <<cadena.size() << std::endl;
    if (cadena.empty()) {
        std::cout << "La cadena esta vacia" << std::endl;
    } else {
        std::cout << "La cadena no esta vacia" << std::endl;
    }
    return 0;
}