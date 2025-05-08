#include <iostream>
using namespace std;

 main()
{
    
    // sizeof = retorna o tamanho em bytes de um tipo de dado ou variável
    // sizeof(int) = 4 bytes
    // sizeof(char) = 1 byte
    // sizeof(float) = 4 bytes
    // sizeof(double) = 8 bytes
    // sizeof(bool) = 1 byte
    // sizeof(string) = 24 bytes (em média, depende do compilador e da implementação da biblioteca padrão)

    // tambem da pra usar sizeof para arrays e structs e calcular o tamanho total

    string nome[] = {"pedro", "joao", "maria"};
    cout << "Tamanho do array nome: " << sizeof(nome) << " bytes" << endl; // Tamanho total do array em bytes
    cout << "Tamanho de cada elemento do array nome: " << sizeof(nome[0]) << " bytes" << endl; // Tamanho de cada elemento do array em bytes

    cout << sizeof(nome) / sizeof(nome[0]) << " elementos" << endl; // Tamanho total do array dividido pelo tamanho de cada elemento do array = quantidade de elementos do array

    

    return 0;
}
