
/*
1) (2,0 pto) Faça um programa em C++ que leia 10 números inteiros e, ao final, exiba quantos desses
números são positivos (maiores que zero). Observe o exemplo abaixo: (OBS: utilize o laço FOR)

- Valores lidos do usuário:
-3 0 12 6 -7 9 -1 10 -11 5

- Saída do programa:
Quantidade de números positivos: 5

*/

#include <iostream>
using namespace std;

int main() {

    int numero;
    int positivos = 0; 

    cout << "Digite 10 numeros inteiros (positivos, negativos ou zero):" << endl;

    
    for (int i = 1; i < 11; i++) {
        cout << "digito #" << i << ": ";
        cin >> numero;

        
        if (numero > 0) {
        
            positivos++; 
        }
    }

    
    cout << endl << "Quantidade de numeros positivos: " << positivos << endl;

    return 0; 
}