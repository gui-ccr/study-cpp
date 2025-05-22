/*
? 2) (1,0 pto) Desenvolva um programa que determine entre três valores inteiros a sua ordem crescente.
? Exiba-os na tela na ordem crescente. (Obs: considere que não serão lidos valores iguais)
*/




#include <iostream>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int val1, val2, val3;
    int menor, meio, maior;

    std::cout << " " << std::endl; // Espaço em branco para melhorar a legibilidadeno no terminal
    std::cout << "--- Ordenar Três Valores Inteiros ---" << std::endl;
    std::cout << "Digite o primeiro valor inteiro: ";
    std::cin >> val1;
    std::cout << "Digite o segundo valor inteiro: ";
    std::cin >> val2;
    std::cout << "Digite o terceiro valor inteiro: ";
    std::cin >> val3;

    if (val1 < val2 && val1 < val3) {
        menor = val1;
        if (val2 < val3) {
            meio = val2;
            maior = val3;
        } else {
            meio = val3;
            maior = val2;
        }
    } else if (val2 < val1 && val2 < val3) {
        menor = val2;
        if (val1 < val3) {
            meio = val1;
            maior = val3;
        } else {
            meio = val3;
            maior = val1;
        }
    } else { // val3 é o menor
        menor = val3;
        if (val1 < val2) {
            meio = val1;
            maior = val2;
        } else {
            meio = val2;
            maior = val1;
        }
    }

    std::cout << "Valores em ordem crescente: " << menor << ", " << meio << ", " << maior << std::endl;

    return 0;
}