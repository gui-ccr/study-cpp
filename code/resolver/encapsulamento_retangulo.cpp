/*
 * Desafio: Retangulo (Foco em Encapsulamento)
 * O que eu pratiquei aqui:
 * - Proteger os atributos 'altura' e 'largura' com 'private'.
 * - Usar o construtor para receber os dados iniciais e, mais importante,
 * para VALIDAR esses dados, garantindo que o objeto nunca seja criado em um estado invalido.
 * - Criar metodos 'setters' (setLargura, setAltura) que tambem validam os dados antes de modificar os atributos.
 * - Criar metodos 'getters' (getLargura, getAltura) para permitir a leitura segura dos atributos.
 * - Criar metodos que usam os atributos internos para realizar calculos (calcularArea, calcularPerimetro).
 */
#include <iostream>
using namespace std;

class Retangulo
{
private: 
    double altura;
    double largura;

public:
    Retangulo(double alturaInicial, double larguraInicial){
        // Valida e define a altura na criacao do objeto
        if (alturaInicial > 0) {
            this->altura = alturaInicial;
        } else {
            cout << endl << "Altura inicial invalida (" << alturaInicial << "). Definindo altura como 1.0." << endl;
            this->altura = 1.0;
        }

        // Valida e define a largura na criacao do objeto
        if (larguraInicial > 0) {
            this->largura = larguraInicial;
        } else {
            cout << endl << "Largura inicial invalida (" << larguraInicial << "). Definindo largura como 1.0." << endl;
            this->largura = 1.0;
        }
    }

    // Setter para a largura com validacao
    void setLargura(double novaLargura) {
        if (novaLargura > 0) {
            largura = novaLargura;
        } else {
            cout << endl << "Valor fornecido para largura invalido!" << endl;
        }
    }

    // Setter para a altura com validacao
    void setAltura(double novaAltura) {
        if (novaAltura > 0) {
            altura = novaAltura;
        } else {
            cout << endl << "Valor fornecido para altura invalido!" << endl;
        }
    }

    // Getters para permitir a leitura externa dos valores
    double getAltura() { return altura; }
    double getLargura() { return largura; }

    // Metodos de calculo que usam os atributos internos
    double calcularArea(){ return largura * altura; }
    double calcularPerimetro(){ return 2 * (altura + largura); }

    // Metodo para exibir todos os dados de forma organizada
    void exibirDados(){
        cout << endl << "Dados do Retangulo:" << endl;
        cout << "Largura: " << this->largura << " | Altura: " << this->altura << endl;
        cout << "Area: " << calcularArea() << " | Perimetro: " << calcularPerimetro() << endl;
    }
};

int main()
{
    double x1, x2;

    cout << "-------------Calcular Retangulo-------------" << endl;
    cout << "digite o valor da altura: ";
    cin >> x1;
    cout << "digite o valor da largura: ";
    cin >> x2;

    // Crio o objeto. A validacao do construtor ja acontece aqui.
    Retangulo retangulo(x1,x2);
    retangulo.exibirDados();

    // Testando os setters para alterar os valores do objeto ja existente.
    cout << "\n--- Alterando os valores com os setters ---" << endl;
    retangulo.setAltura(25);
    retangulo.setLargura(30); 
    retangulo.exibirDados();
    
    return 0;
}