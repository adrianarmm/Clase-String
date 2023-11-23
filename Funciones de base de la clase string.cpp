#include <iostream>
#include <string>

int main() {
    std::string sentence = "Hola, Mundo!";
    std::cout << "Cadena: " << sentence << '\n';
    std::cout << "Tamaño de la cadena: " << sentence.size() << '\n';
    std::cout << "Primer caracter: " << sentence[0] << '\n';
    std::cout << "Último caracter: " << sentence[sentence.size() - 1] << '\n';
    std::cout << "¿Está la cadena vacía? " << (sentence.empty() ? "Sí" : "No") << '\n';

    return 0;
}
