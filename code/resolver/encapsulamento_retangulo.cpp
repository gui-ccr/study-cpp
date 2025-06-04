#include <iostream>
using namespace std;

class Retangulo
{
private: // atributos privados que seram acessados pelo construtor
    double altura;
    double largura;

public:
    Retangulo(double alturaInicial, double larguraInicial){
         // Valida e define a altura
    if (alturaInicial > 0) {
        this->altura = alturaInicial; // Usando this-> para clareza (opcional aqui)
    } else {
        cout << endl << "Altura inicial invalida (" << alturaInicial << "). Definindo altura como 1.0." << endl;
        this->altura = 1.0;
    }

    // Valida e define a largura
    if (larguraInicial > 0) {
        this->largura = larguraInicial; // Usando this-> para clareza (opcional aqui)
    } else {
        cout << endl << "Largura inicial invalida (" << larguraInicial << "). Definindo largura como 1.0." << endl;
        this->largura = 1.0;
    }
        
    }

    void setLargura(double novaLargura)
    {
        if (novaLargura > 0)
        {
            largura = novaLargura;
        }
        else
        {
            cout << endl << "valor fornecido invalido!" << endl;
        }

    }
    void setAltura(double novaAltura)
    {

        if (novaAltura > 0)
        {
            altura = novaAltura;
        }
        else
        {
            cout << endl << "valor fornecido invalido!" << endl;
        }
    }

    double getAltura()
    {
        return altura;
    }
    double getLargura()
    {
        return largura;
    }
    double calcularArea(){
        double area = largura * altura;
        return area;
    }
    double calcularPerimetro(){
        double perimetro = 2 * (altura + largura);
        return perimetro;
    }

    void exibirDados(){
        cout << endl << "a area do retangulo e: (" << calcularArea() << ") e o perimetro e: (" << calcularPerimetro() << ")." << endl;
    }
};

int main()
{
    double x1, x2;

    cout << "-------------Calcular Retangulo-------------" << endl;
    cout << "digite o primeiro valor: ";
    cin >> x1;
    cout << "digite o segundo valor: ";
    cin >> x2;

    Retangulo retangulo(x1,x2);
    retangulo.exibirDados();

    retangulo.setAltura(25);
    retangulo.setLargura(30); // adicionando valores utilizando o set para alterar os valores das variaveis
    retangulo.exibirDados();
    return 0;
}
