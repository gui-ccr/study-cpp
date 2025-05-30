#include <iostream>
#include <string> // Para usar std::string

// 1. Definicao da Classe (o molde)
class Pessoa {
public: // Especificador de acesso: 'public' significa que esses membros sao acessiveis de fora da classe
    // Atributos
    std::string nome;
    int idade;

    // Metodos
    void apresentar() {
        // Usando 'cout' para cada parte para evitar problemas com concatenacao de literais e variaveis sem locale
        std::cout << "Ola! Meu nome e " << nome << " e eu tenho " << idade << " anos." << std::endl;
    }

    void fazerAniversario() {
        idade++; // Incrementa a idade
        std::cout << "Feliz aniversario para mim! Agora tenho " << idade << " anos." << std::endl;
    }
}; // Nao esqueca o ponto e virgula aqui!

int main() {
    // 2. Criacao de Objetos (as instancias)
    Pessoa pessoa1; // Cria um objeto chamado 'pessoa1' da classe 'Pessoa'
    pessoa1.nome = "Ana";
    pessoa1.idade = 30;

    Pessoa pessoa2; // Cria outro objeto chamado 'pessoa2'
    pessoa2.nome = "Carlos";
    pessoa2.idade = 25;

    // 3. Usando os objetos
    std::cout << "Dados da Pessoa 1:" << std::endl;
    pessoa1.apresentar(); // Chama o metodo 'apresentar' do objeto 'pessoa1'
    pessoa1.fazerAniversario();

    std::cout << "\nDados da Pessoa 2:" << std::endl;
    pessoa2.apresentar(); // Chama o metodo 'apresentar' do objeto 'pessoa2'

    // Voce pode acessar os atributos diretamente (se forem publicos)
    std::cout << "\nO nome da pessoa1 ainda e: " << pessoa1.nome << std::endl;

    return 0;
}