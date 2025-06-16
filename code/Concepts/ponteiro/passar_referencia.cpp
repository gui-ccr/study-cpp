#include <iostream>

// A função 'modificar' recebe 'x' por referência (o original)
void modificar(int &x) { // Note o '&'
    x = 20; // Modifica o valor original
    std::cout << "Valor de x dentro da função: " << x << std::endl;
}

int main() {
    int numero = 10;
    std::cout << "Valor de 'numero' antes da função: " << numero << std::endl;
    modificar(numero);
    std::cout << "Valor de 'numero' depois da função: " << numero << std::endl; // O valor original foi alterado!
    return 0;
}