#include <iostream>
#include <string> // Boa pratica incluir a string

// Nao e obrigatorio neste caso, mas ajuda a nao ter que escrever std::
using namespace std;

//* --- CLASSE BASE ---
class FiguraGeometrica{
protected:
    string nome;

public:
    FiguraGeometrica(string nomeFigura){
        nome = nomeFigura;
        cout << endl << "Figura base '" << nome << "' foi criada!" << endl;
    }

    string getNome(){
        return nome;
    }

    void desenhar(){
        cout << nome << " esta sendo desenhado(a) de forma generica." << endl;
    }

    //? ---> CORRECAO 1: O metodo deve retornar 'double' para ser consistente com as classes derivadas.
    //? Se a base tem 'void calcularArea()' e a filha tem 'double calcularArea()', nao e' uma sobrescrita valida.
    double calcularArea(){
        cout << "Calculo de area nao definido para figura generica!" << endl;
        return 0.0; // Retorna 0.0 para figuras genericas
    }
};

//* --- CLASSE DERIVADA RETANGULOFIG ---
class RetanguloFig : public FiguraGeometrica{
private:
    double largura;
    double altura;

public:
    // Construtor corrigido e com mensagem mais clara
    RetanguloFig(double larguraRet, double alturaRet): FiguraGeometrica("RetanguloFig") {
        this->largura = larguraRet;
        this->altura = alturaRet;
        cout << "RetanguloFig com largura " << this->largura << " e altura " << this->altura << " criado." << endl;
    }

    double getAltura(){
        return this->altura;
    }

    double getLargura(){
        return this->largura;
    }

    void desenhar(){
        cout << "Desenhando um RetanguloFig de " << largura << "x" << altura << "." << endl;
    }

    
    double calcularArea(){
        double area = largura * altura;
        return area;
    }
};

//* --- CLASSE DERIVADA CIRCULO ---
class Circulo : public FiguraGeometrica{
private:
    double raio;

public:
  
    Circulo(double raioCirculo) : FiguraGeometrica("Circulo"){
        this->raio = raioCirculo;
        cout << "Circulo com raio " << this->raio << " criado." << endl;
    }

    double getRaio(){
        return raio;
    }

    // ---> CORRECAO 2: A assinatura deve ser 'void' para corresponder a da classe base
    void desenhar(){
        cout << "Desenhando um Circulo de raio " << raio << "." << endl;
    }

   
    double calcularArea(){
        double area = 3.14159 * raio * raio;
        return area;
    }
};

//* --- FUNCAO PRINCIPAL ---
int main(){
    // --- Testando a classe base ---
    cout << endl << "--- Teste Figura Base ---" << endl;
    FiguraGeometrica figBase("forma desconhecida");
    cout << "Nome da figura: " << figBase.getNome() << endl; // Como usar o getNome()
    figBase.desenhar();
    figBase.calcularArea(); // Nao ha area para imprimir aqui

    cout << endl << "--- Teste RetanguloFig ---" << endl;
    RetanguloFig retangulo(10.0, 5.0);
    cout << "Nome da figura: " << retangulo.getNome() << endl;
    retangulo.desenhar();

    // ---> CORRECAO 3: O exercicio pedia para IMPRIMIR a area retornada
    // Guardamos o resultado em uma variavel e imprimimos
    double areaRetangulo = retangulo.calcularArea();
    cout << "A area do " << retangulo.getNome() << " e: " << areaRetangulo << endl;

    cout << endl << "--- Teste Circulo ---" << endl;
    Circulo circulo(20.0);
    cout << "Nome da figura: " << circulo.getNome() << endl;
    circulo.desenhar();

    // ---> CORRECAO 4: Mesma coisa aqui, IMPRIMIR a area retornada
    double areaCirculo = circulo.calcularArea();
    cout << "A area do " << circulo.getNome() << " e: " << areaCirculo << endl;

    
    return 0;
}