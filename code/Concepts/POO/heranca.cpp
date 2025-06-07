/*
 * Tópico: Herança
 * O que eu aprendi aqui:
 * Eu aprendi a criar novas classes (derivadas/filhas) baseadas em uma classe existente (base/mae).
 * A classe filha "herda" os atributos e metodos da mae, o que evita repeticao de codigo.
 * Isso modela uma relacao "e um(a)": um 'RetanguloFig' E UMA 'FiguraGeometrica'.
 * Eu tambem aprendi a chamar o construtor da classe mae a partir da filha.
 */
#include <iostream>
#include <string>
using namespace std;

// --- CLASSE BASE (MÃE) ---
class FiguraGeometrica{
protected: // 'protected' e como 'private', mas permite que as classes filhas acessem diretamente.
    string nome;

public:
    // Construtor da classe base.
    FiguraGeometrica(string nomeFigura) : nome(nomeFigura) { // Usei a lista de inicializadores, que e' mais eficiente.
        cout << endl << "Figura base '" << nome << "' foi criada!" << endl;
    }

    string getNome(){
        return nome;
    }

    void desenhar(){
        cout << nome << " esta sendo desenhado(a) de forma generica." << endl;
    }
 
    // Este metodo sera' sobrescrito pelas classes filhas.
    double calcularArea(){
        cout << "Calculo de area nao definido para figura generica!" << endl;
        return 0.0;
    }
};

// --- CLASSE DERIVADA (FILHA) ---
// A sintaxe ': public FiguraGeometrica' significa que RetanguloFig herda de FiguraGeometrica.
class RetanguloFig : public FiguraGeometrica{
private:
    double largura;
    double altura;

public:
    // O construtor da classe filha.
    // A parte ': FiguraGeometrica("RetanguloFig")' chama o construtor da classe mae antes de executar este.
    RetanguloFig(double larguraRet, double alturaRet): FiguraGeometrica("RetanguloFig") {
        this->largura = larguraRet; // 'this->' e um ponteiro para o proprio objeto.
        this->altura = alturaRet;
        cout << "RetanguloFig com largura " << this->largura << " e altura " << this->altura << " criado." << endl;
    }

    // Metodos especificos do RetanguloFig
    double getAltura(){ return this->altura; }
    double getLargura(){ return this->largura; }

    // --- Sobrescrita de Metodo (Overriding) ---
    // Eu forneco uma nova implementacao para um metodo que ja existia na classe mae.
    void desenhar(){
        cout << "Desenhando um RetanguloFig de " << largura << "x" << altura << "." << endl; 
    }
    
    // Sobrescrevendo o metodo para calcular a area de forma especifica.
    double calcularArea(){
        return largura * altura;
    }
};

// --- SEGUNDA CLASSE DERIVADA (FILHA) ---
class Circulo : public FiguraGeometrica{
private:
    double raio;

public: 
    // O construtor do Circulo tambem chama o construtor da FiguraGeometrica.
    Circulo(double raioCirculo) : FiguraGeometrica("Circulo"){
        this->raio = raioCirculo;
        cout << "Circulo com raio " << this->raio << " criado." << endl;
    }

    double getRaio(){ return raio; }

    // Sobrescrevendo o metodo desenhar para o Circulo.
    void desenhar(){
        cout << "Desenhando um Circulo de raio " << raio << "." << endl;
    }
    
    // Sobrescrevendo o metodo calcularArea para o Circulo.
    double calcularArea(){
        return 3.14159 * raio * raio;
    }
};

// --- FUNCAO PRINCIPAL ---
int main(){
    // Testando a classe base
    cout << endl << "--- Teste Figura Base ---" << endl;
    FiguraGeometrica figBase("forma desconhecida");
    cout << "Nome da figura: " << figBase.getNome() << endl;
    figBase.desenhar();
    figBase.calcularArea();

    // Testando a primeira classe derivada
    cout << endl << "--- Teste RetanguloFig ---" << endl;
    RetanguloFig retangulo(10.0, 5.0);
    cout << "Nome da figura: " << retangulo.getNome() << endl; // getNome() foi herdado da mae.
    retangulo.desenhar(); // Chama a versao sobrescrita do RetanguloFig.
    double areaRetangulo = retangulo.calcularArea(); // Chama a versao sobrescrita do RetanguloFig.
    cout << "A area do " << retangulo.getNome() << " e: " << areaRetangulo << endl;

    // Testando a segunda classe derivada
    cout << endl << "--- Teste Circulo ---" << endl;
    Circulo circulo(20.0);
    cout << "Nome da figura: " << circulo.getNome() << endl; // getNome() foi herdado da mae.
    circulo.desenhar(); // Chama a versao sobrescrita do Circulo.
    double areaCirculo = circulo.calcularArea(); // Chama a versao sobrescrita do Circulo.
    cout << "A area do " << circulo.getNome() << " e: " << areaCirculo << endl;
    
    return 0;
}