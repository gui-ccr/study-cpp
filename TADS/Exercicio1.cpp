#include <iostream>
using namespace std;
#define PI 3.14159
// Escreva um programa que calcule o volume de uma esfera, dado o raio. O volume de uma esfera é dado pela fórmula V = (4/3) * PI * r^3, onde r é o raio da esfera.

int main()
{
    int raio = 0;
    cout << "Digite o raio da esfera: ";
    cin >> raio;

    float volume = (4.0 / 3.0) * PI * (raio * raio * raio);

    cout << "O volume da esfera de raio " << raio << " e " << volume << endl;
    return 0;




}
