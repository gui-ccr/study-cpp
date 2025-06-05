#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Funcionario {
protected:
    string nome;
    int id;

public:
    // Sugestao: Usar lista de inicializadores aqui tambem e' uma boa pratica.
    Funcionario(string nomeInicial, int idInicial) : nome(nomeInicial), id(idInicial) {
    }

    string getNome() {
        return nome;
    }

    int getId() {
        return id;
    }

    // Renomeei para exibirInformacoes() para ficar mais claro
    void exibirInformacoes() {
        // Corrigido: Adicionado um espaco antes de "Id"
        cout << "ID: " << id << ", Nome: " << nome;
    }

    virtual double calcularSalario() {
        return 0.0;
    }
};

// =======================================================

class FuncionarioAssalariado : public Funcionario {
private:
    double salarioMensal;

public: // ---> CORRECAO 1: O construtor deve ser publico
    // ---> CORRECAO 2: Chamando o construtor da classe mae (Funcionario)
    FuncionarioAssalariado(string nomeInicial, int idInicial, double salarioMensalInicial)
        : Funcionario(nomeInicial, idInicial)
    {
        this->salarioMensal = salarioMensalInicial;
    }

    // Override do metodo virtual
    double calcularSalario() override {
        return salarioMensal;
    }
};

// =======================================================

class FuncionarioHorista : public Funcionario {
private:
    double valorPorHora;
    int horasTrabalhadas;

public: // ---> CORRECAO 1: O construtor deve ser publico
    // ---> CORRECAO 2: Chamando o construtor da classe mae (Funcionario)
    FuncionarioHorista(string nomeInicial, int idInicial, double valorPorHoraInicial, int horasTrabalhadasInicial)
        : Funcionario(nomeInicial, idInicial)
    {
        this->valorPorHora = valorPorHoraInicial;
        this->horasTrabalhadas = horasTrabalhadasInicial;
    }

    // ---> CORRECAO 3: Metodo que estava faltando
    double calcularSalario() override {
        return valorPorHora * horasTrabalhadas;
    }
};

int main(){

    FuncionarioAssalariado funcionario1("guilherme", 123456, 2500.00);
    FuncionarioHorista funcionario2("Matheus", 98464, 50, 60);


    vector<Funcionario*> todosOsFuncionarios; 
    todosOsFuncionarios.push_back(&funcionario1);
    todosOsFuncionarios.push_back(&funcionario2);


    // ---> CORRECAO DO LOOP E PREENCHIMENTO DO CORPO <---
    for (Funcionario* funcPtr : todosOsFuncionarios) {
        // Para cada funcionario na lista, fazemos o seguinte:
        
        // a. Exibe as informacoes basicas (ID e Nome)
        funcPtr->exibirInformacoes();

        // b. Calcula o salario usando o metodo polimorfico
        double salarioCalculado = funcPtr->calcularSalario();

        // c. Imprime o salario calculado. A versao correta de calcularSalario()
        //    sera chamada automaticamente para cada tipo de funcionario!
        cout << " | Salario a pagar: R$ " << salarioCalculado << endl;
    }


    return 0;
}