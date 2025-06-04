/*
Herança (Inheritance) 👪
Herança é um dos pilares fundamentais da POO que permite que você crie novas classes baseadas em classes já existentes. A nova classe (chamada de classe derivada ou classe filha) "herda" atributos e métodos da classe existente (chamada de classe base ou classe mãe/pai).
*/

#include <iostream>

class FiguraGeometrica{
    protected:
    std::string nome;

    public:
    FiguraGeometrica(std::string nomeFigura){
        nome = nomeFigura;
        std::cout << std::endl << nome << " foi criado!" << std::endl;
    }

    std::string getNome(){
        return nome;
    }
    void desenhar(){
        std::cout << std::endl <<  nome << " esta sendo desenhado(a) de forma generica." << std::endl;
    }

    double calcularArea(){
        std::cout << std::endl << "Calculo de area nao definido para figura generica!" << std::endl;

    }

    class RetanguloFig : public FiguraGeometrica{
        private:
        double largura;
        double altura;

        public: 
        RetanguloFig(double larguraRet, double alturaRet){
            std::cout << std::endl << "RetanguloFig com largura " << largura << " e altura " << altura << " criado.";

        }
        double getAltura(){
            return this->altura;
        }
        double getLargura(){
            return this->largura;
        }
        void desenhar(){
           std::cout << std::endl << "Desenhando um RetanguloFig de " << largura << "x" << altura << ".";
        }
        double calcularArea(){
            double area = largura * altura;
        }

    };
    class Circulo : public FiguraGeometrica{
        private:
        double raio;

        public: 

        Circulo(double raioCirculo) : FiguraGeometrica(nomeFigura){

        }
        double getRaio(){
            return raio;
        }
        std::string desenhar(){
            std::cout << std::endl << "Desenhando um Circulo de raio " << raio << ".";
        }
        double calcularArea(){
          double area = 3.14159 * raio * raio;
          return area;
        }
    };

    int main(){
        FiguraGeometrica figBase("forma desconhecida");
        figBase.getNome();
        figBase.desenhar();
        figBase.calcularArea();

        RetanguloFig retangulo();
        retangulo.getNome();
    }


};

/*
No main():

Crie um objeto da classe FiguraGeometrica (ex: FiguraGeometrica figBase("Forma Desconhecida");).
Chame os metodos getNome(), desenhar() e calcularArea() para este objeto.
Crie um objeto da classe RetanguloFig com dimensões à sua escolha.
Chame os metodos getNome(), desenhar() e calcularArea() para o objeto RetanguloFig. Imprima a area retornada.
Crie um objeto da classe Circulo com um raio à sua escolha.
Chame os metodos getNome(), desenhar() e calcularArea() para o objeto Circulo. Imprima a area retornada.



*/