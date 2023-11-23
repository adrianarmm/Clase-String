#include <iostream>
#include <string>

int main() {
    std::string str1 = "Happy";
    std::string str2 = " birthday!";

    str1 += str2;

    std::cout << "Cadena resultante: " << str1 << '\n';

    return 0;
}
