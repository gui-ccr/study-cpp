/*
?   (1,5 pto) Calcule as raízes da equação do 2º grau, lembrando que:
?   E ax2
?    + bx + c = 0 representa uma equação de 2º grau
?    Uma informação importante é que a variável a tem que ser diferente de zero para que a equação
?   seja do 2º grau. Informe o usuário sobre isso. Outras situações a serem observadas seguem abaixo:
?     Se ∆ < 0, não existe real, portanto, informe ao usuário que não existe raiz.
?     Se ∆ = 0, existe uma raiz real, portanto, exiba a raiz e a mensagem raiz única.
?     Se ∆ ≥ 0, imprima as duas raízes reais.

*/



#include <iostream>
#include <cmath> // Para sqrt()
#include <iomanip> // Para std::fixed e std::setprecision

int main() {
    setlocale(LC_ALL, "Portuguese");

    double a, b, c;

    std::cout << "--- Cálculo das Raízes da Equação do 2º Grau (ax^2 + bx + c = 0) ---" << std::endl;
    std::cout << "Informe o coeficiente 'a': ";
    std::cin >> a;
    std::cout << "Informe o coeficiente 'b': ";
    std::cin >> b;
    std::cout << "Informe o coeficiente 'c': ";
    std::cin >> c;

    std::cout << std::fixed << std::setprecision(2);

    if (a == 0) {
        std::cout << "O coeficiente 'a' deve ser diferente de zero para uma equação do 2º grau." << std::endl; 
        if (b == 0) {
            if (c == 0) {
                std::cout << "Equação indeterminada (0 = 0)." << std::endl;
            } else {
                std::cout << "Equação impossível (c = 0, com c != 0)." << std::endl;
            }
        } else {
             // Equação do 1º grau: bx + c = 0 => x = -c/b
            double x = -c / b;
            std::cout << "Esta é uma equação do 1º grau." << std::endl;
            std::cout << "Raiz: x = " << x << std::endl;
        }
    } else {
        double delta = (b * b) - (4 * a * c);
        std::cout << "Delta (Δ) = " << delta << std::endl;

        if (delta < 0) {
            std::cout << "Não existem raízes reais (Δ < 0)." << std::endl; // [cite: 11]
        } else if (delta == 0) {
            double x = -b / (2 * a);
            std::cout << "Existe uma raiz real (raiz única, Δ = 0)." << std::endl; // [cite: 12]
            std::cout << "x = " << x << std::endl;
        } else { // delta > 0
            double x1 = (-b + std::sqrt(delta)) / (2 * a);
            double x2 = (-b - std::sqrt(delta)) / (2 * a);
            std::cout << "Existem duas raízes reais (Δ > 0)." << std::endl; // [cite: 13]
            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
        }
    }

    return 0;
}