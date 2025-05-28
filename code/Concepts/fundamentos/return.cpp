#include <iostream>
using namespace std;

// double square(double quadrado);
// double cube(double quadrado);

string ContatenarString(string string1, string string2);

main(){

    cout << "" << endl;

    // double length = 6.0;
    // double area = square(length);
    // double cubo = cube(length);

    // cout << "a area e: " << area << "cm^2" << endl;
    // cout << "o volume e: " << cubo << "cm^3" << endl;

    string primeiroNome = "Guilherme";
    string primeiroSobrenome = "Carvalho";
    string nomeCompleto = ContatenarString(primeiroNome, primeiroSobrenome);

    cout << "ola " << nomeCompleto << " seja bem vindo! " << endl;



    cout << "" << endl;
}


// double square(double quadrado){
//     return quadrado * quadrado ;
// }
// double cube(double quadrado){
//     return quadrado * quadrado * quadrado;
// }

    string ContatenarString(string string1, string string2){
        return string1 + " de " + string2;
    }