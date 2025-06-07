/*
 * Tópico: Classes Abstratas e Funções Virtuais Puras
 * O que eu aprendi aqui:
 * Eu aprendi a criar uma classe que serve apenas como um "contrato" ou "molde",
 * da qual eu NAO POSSO criar objetos. Isso e uma Classe Abstrata.
 * Eu faco isso criando pelo menos uma "Funcao Virtual Pura", que e um metodo
 * virtual que termina com '= 0;'.
 * Isso obriga todas as minhas classes filhas concretas a implementarem esse metodo,
 * garantindo um design mais seguro e robusto.
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// --- CLASSE BASE ABSTRATA ---
// Esta classe e abstrata porque o metodo 'calcularSalario' e uma funcao virtual pura.
class Funcionario {
protected:
    string nome;
    int id;

public:
    Funcionario(string nomeInicial, int idInicial) : nome(nomeInicial), id(idInicial) {}

    // Metodos normais que serao herdados.
    string getNome() { return nome; }
    int getId() { return id; }
    void exibirInformacoes() {
        cout << "ID: " << id << ", Nome: " << nome;
    }

    // --- FUNCAO VIRTUAL PURA ---
    // O '= 0' significa: "Este metodo nao tem implementacao aqui. Ele e um contrato.
    // Toda classe filha que quiser ser 'concreta' (que possa criar objetos)
    // e OBRIGADA a implementar sua propria versao deste metodo."
    virtual double calcularSalario() = 0;
};

// --- CLASSES DERIVADAS (CONCRETAS) ---

// Esta classe e' concreta porque ela cumpre o contrato: ela implementa calcularSalario().
class FuncionarioAssalariado : public Funcionario {
private:
    double salarioMensal;
public:
    FuncionarioAssalariado(string nome, int id, double salario)
        : Funcionario(nome, id), salarioMensal(salario) {}

    // Cumprindo a obrigacao imposta pela classe mae.
    double calcularSalario() override {
        return salarioMensal;
    }
};

// Esta classe tambem cumpre o contrato.
class FuncionarioHorista : public Funcionario {
private:
    double valorPorHora;
    int horasTrabalhadas;
public:
    FuncionarioHorista(string nome, int id, double valor, int horas)
        : Funcionario(nome, id), valorPorHora(valor), horasTrabalhadas(horas) {}
    
    // Cumprindo a obrigacao.
    double calcularSalario() override {
        return valorPorHora * horasTrabalhadas;
    }
};

int main() {
    // Se eu tentasse fazer isso, eu receberia um ERRO DE COMPILACAO. E o que eu quero!
    // Nao faz sentido criar um "Funcionario" generico sem um tipo definido.
    // Funcionario f("Teste", 1); 

    // Eu so posso criar objetos das classes concretas que cumprem o contrato.
    FuncionarioAssalariado fa("Guilherme", 101, 3000.0);
    FuncionarioHorista fh("Matheus", 102, 50.0, 40);

    // O polimorfismo continua funcionando perfeitamente.
    vector<Funcionario*> folhaDePagamento;
    folhaDePagamento.push_back(&fa);
    folhaDePagamento.push_back(&fh);

    cout << "--- Processando Folha de Pagamento ---" << endl;
    for (Funcionario* funcPtr : folhaDePagamento) {
        funcPtr->exibirInformacoes();
        cout << " | Salario: R$ " << funcPtr->calcularSalario() << endl;
    }

    return 0;
}