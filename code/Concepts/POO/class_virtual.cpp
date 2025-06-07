#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Funcionario
{
    public:
    // Nao ha uma forma de calcular o salario de um "Funcionario generico".
    // Entao, tornamos o metodo uma funcao virtual pura.
    // Isto cria um CONTRATO.
    virtual double calcularSalario() = 0; // ? metodo virtual == classe abstrata

//     Classe Abstrata
// Agora vem a consequência automática:

// Qualquer classe que contenha pelo menos uma função virtual pura se torna uma Classe Abstrata.
// A regra de uma classe abstrata é simples e poderosa:
// Você NÃO PODE criar um objeto (uma instância) de uma classe abstrata.

};


int main() {
    //! ERRO DE COMPILACAO!
    //! Nao se pode criar um objeto da classe abstrata 'Funcionario'.
    // Funcionario func();
}