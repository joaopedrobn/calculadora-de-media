#include <iostream>

int main() {
    double num1, num2, num3;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;

    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    std::cout << "Digite o terceiro numero: ";
    std::cin >> num3;

    double media = (num1 + num2 + num3) / 3;

    std::cout << "A media dos tres numeros e: " << media << "\n";

    return 0;
}
