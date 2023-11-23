#include <iostream>
#include <string>

int main() {
    std::string str = "C++ es un lenguaje de programación.";

    std::string sub_str = str.substr(13, 9);


    std::string new_str = "La " + str;

    std::cout << "Subcadena: " << sub_str << std::endl;
    std::cout << "Cadena resultante: " << new_str << std::endl;

    return 0;
}
