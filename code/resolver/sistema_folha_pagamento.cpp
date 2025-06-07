/*
 * Desafio: Folha de Pagamento (Foco em Heranca e Polimorfismo)
 * O que eu pratiquei aqui:
 * - Criei uma hierarquia de classes com uma classe base 'Funcionario'.
 * - Usei um metodo virtual 'calcularSalario()' na classe base para definir uma interface comum.
 * - Criei classes derivadas 'FuncionarioAssalariado' e 'FuncionarioHorista' que
 * herdam de 'Funcionario' e sobrescrevem (override) o metodo 'calcularSalario()' com
 * sua propria logica de calculo.
 * - No main, eu usei o poder do polimorfismo: criei um vetor de ponteiros da classe base (vector<Funcionario*>)
 * para guardar objetos de diferentes classes filhas.
 * - Iterei sobre o vetor com um unico loop e chamei o metodo 'calcularSalario()' de forma generica,
 * e a versao correta para cada tipo de funcionario foi executada.
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Funcionario {
protected:
    string nome;
    int id;
public:
    Funcionario(string nomeInicial, int idInicial) : nome(nomeInicial), id(idInicial) {
    }
    string getNome() { return nome; }
    int getId() { return id; }
    void exibirInformacoes() {
        cout << "ID: " << id << ", Nome: " << nome;
    }
    virtual double calcularSalario() {
        return 0.0;
    }
};

class FuncionarioAssalariado : public Funcionario {
private:
    double salarioMensal;
public:
    FuncionarioAssalariado(string nomeInicial, int idInicial, double salarioMensalInicial)
        : Funcionario(nomeInicial, idInicial) {
        this->salarioMensal = salarioMensalInicial;
    }

    double calcularSalario() override {
        return salarioMensal;
    }
};

class FuncionarioHorista : public Funcionario {
private:
    double valorPorHora;
    int horasTrabalhadas;
public:
    FuncionarioHorista(string nomeInicial, int idInicial, double valorPorHoraInicial, int horasTrabalhadasInicial)
        : Funcionario(nomeInicial, idInicial) {
        this->valorPorHora = valorPorHoraInicial;
        this->horasTrabalhadas = horasTrabalhadasInicial;
    }

    double calcularSalario() override {
        return valorPorHora * horasTrabalhadas;
    }
};

int main(){
    // Crio objetos de classes filhas diferentes
    FuncionarioAssalariado funcionario1("Guilherme", 123456, 2500.00);
    FuncionarioHorista funcionario2("Matheus", 98464, 50.0, 60);

    // Crio um vetor para ponteiros da classe base
    vector<Funcionario*> todosOsFuncionarios; 
    // Adiciono o endereco dos objetos filhos no vetor
    todosOsFuncionarios.push_back(&funcionario1);
    todosOsFuncionarios.push_back(&funcionario2);

    cout << "\n--- Processando Folha de Pagamento ---" << endl;
    // Um unico loop para tratar todos os funcionarios, independente do tipo
    for (Funcionario* funcPtr : todosOsFuncionarios) {
        // Exibo os dados basicos
        funcPtr->exibirInformacoes();
        // Chamo o metodo polimorfico. A versao correta (de Assalariado ou Horista) e chamada
        double salarioCalculado = funcPtr->calcularSalario();
        cout << " | Salario a pagar: R$ " << salarioCalculado << endl;
    }

    return 0;
}