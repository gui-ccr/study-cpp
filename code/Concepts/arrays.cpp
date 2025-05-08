#include <iostream>
using namespace std;


/*
? array é uma estrutura de dados que armazena uma coleção de elementos do mesmo tipo.
? array é uma coleção de variáveis do mesmo tipo, acessadas por um índice.
*/


int main()
{
    // array de inteiros sem definir o tamanho do array 
    int numbers[] = {1, 2, 3, 4, 5};
    // array de caracteres
    char letters[5] = {'a', 'b', 'c', 'd', 'e'};
    // array de strings
    string names[3] = {"Alice", "Bob", "Charlie"};
    // array de floats
    float prices[4] = {10.99, 20.50, 30.75, 40.00};
    // array de doubles
    double distances[3] = {1.5, 2.8, 3.6};
    // array de booleanos
    bool flags[3] = {true, false, true};
    // array de long
    long largeNumbers[2] = {1000000000, 2000000000};
    // array de short
    short smallNumbers[4] = {1, 2, 3, 4};
    // array de unsigned int
    unsigned int positiveNumbers[3] = {1, 2, 3};
    // array de unsigned char
    unsigned char byteValues[5] = {255, 128, 64, 32, 16};



    // Exibindo os valores dos arrays
    cout << "Array de inteiros: " << numbers[0] << endl;
    cout << "Array de caracteres: " << letters[4] << endl;
    cout << "Array de strings: " << names[0] << endl;
    cout << "Array de floats: " << prices[3] << endl;
    cout << "Array de doubles: " << distances[2] << endl;
    cout << "Array de booleanos: " << flags[1] << endl;
    cout << "Array de long: " << largeNumbers[1] << endl;
    cout << "Array de short: " << smallNumbers[3] << endl;
    cout << "Array de unsigned int: " << positiveNumbers[2] << endl;
    cout << "Array de unsigned char: " << (int)byteValues[4] << endl; // Cast para int para exibir o valor numérico
    // Exibindo o valor do array de unsigned char como inteiro


    //tambem da pra criar um array e depois declarar os valores
    string carros[5]; // Declaração do array
    carros[0] = "corvette"; // Atribuição de valor ao primeiro elemento
    carros[1] = "camaro"; // Atribuição de valor ao segundo elemento
    carros[2] = "mustang"; // Atribuição de valor ao terceiro elemento
    carros[3] = "ferrari"; // Atribuição de valor ao quarto elemento
    carros[4] = "lamborghini"; // Atribuição de valor ao quinto elemento

    cout << " " << endl; // Adicionando uma linha em branco para melhor legibilidade

    // Exibindo os valores do array de carros
    cout << "Array de carros: " << carros[0] << endl; // Exibindo o valor do primeiro elemento do array de carros
    cout << "Array de carros: " << carros[1] << endl; // Exibindo o valor do segundo elemento do array de carros
    
    return 0;
}
