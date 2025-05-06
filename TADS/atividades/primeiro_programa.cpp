
#include <iostream>
using namespace std;
#define PI 3.14159
#include <cmath>

int main()
{

    // algoritimo para imprimir na tela alguns dados
    int idade = 19;
    char qualidade = 'A';
    float altura = 1.82;

    cout << " Meu nome é Guilherme e eu tenho " << idade << " e tenho " << altura << " de altura!";

    // imprime a idade, ultilizando uma entrada do usuario 

    int idade_2;

    cout << "coloque sua idade!  ";
    cin >> idade;

    cout << "voce tem " << idade_2 << " anos";

    // imprime na tela a data de nascimento do usuario, com a entrada dos dados pelo usuario

    int dia, mes, ano;

    cout << "digite a sua data de nascimento  ";
    cout << "dia: ";
    cin >> dia;
    cout << "mes: ";
    cin >> mes;
    cout << "ano: ";
    cin >> ano;

    cout << "Você nasceu no dia " << dia << "/" << mes << "/" << ano;

    // soma 2 valores numericos e imprime na tela

    float numero1, numero2, Soma;

    cout << "digite o primeiro valor numerico: ";
    cin >> numero1;
    cout << "digite o segundo valor numerico: ";
    cin >> numero2;

    Soma = numero1 + numero2;

    cout << "a soma dos valores é " << Soma;

    // calcular o perimetro de uma area a

    int Raio;
    float Perim, Area;

    cout << "Digite o raio: ";
    cin >> Raio;

    Perim = 2 * PI * Raio;

    Area = PI * pow(Raio, 2);

    cout << "O perimetro da circunferencia do raio é " << Perim << " e a area é " << Area;
}