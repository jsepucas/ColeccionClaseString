#include <iostream>
#include <string>

int main() {
    std::string phrase;

    std::cout << "Pon una frase: ";
    std::getline(std::cin, phrase);
    std::cout<<"La frase es: " << phrase << std::endl;
}
