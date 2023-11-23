#include <iostream>
#include <string>

int main() {
    std::string cadena1, cadena2;

    std::cout << "Pon una cadena: ";
    std::getline(std::cin, cadena1);
    std::cout << "Pon otra cadena: ";
    std::getline(std::cin, cadena2);

    std::string CadenaConcatenada = cadena1 + cadena2;
    std::cout << "La cadena concatenada es: " << CadenaConcatenada << std::endl;

    std::cout<< "La cadena 1 es: " << cadena1 << std::endl;
    std::cout<< "La cadena 2 es: " << cadena2 << std::endl;

    return 0;
}
