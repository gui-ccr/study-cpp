#include <iostream>
#include <string>

class Pessoa {
private: // Atributos agora sao privados
    std::string nome;
    int idade;

public:
    // Construtor: chamado quando um objeto Pessoa e criado
    Pessoa(std::string nomeInicial, int idadeInicial) {
        nome = nomeInicial;
        // Podemos adicionar validacao aqui
        if (idadeInicial > 0) {
            idade = idadeInicial;
        } else {
            idade = 0; // Valor padrao ou tratamento de erro
            std::cout << "Idade invalida fornecida. Definindo idade como 0." << std::endl;
        }
        std::cout << "Objeto Pessoa criado para " << nome << std::endl;
    }

    // Metodo publico para apresentar (acessa atributos privados)
    void apresentar() {
        std::cout << "Ola! Meu nome e " << nome << " e eu tenho " << idade << " anos." << std::endl;
    }

    // Metodo publico (setter) para modificar a idade com validacao
    void setIdade(int novaIdade) {
        if (novaIdade > 0 && novaIdade > idade) { // Exemplo de regra: so pode aumentar e ser positiva
            idade = novaIdade;
        } else {
            std::cout << "Tentativa de definir idade invalida." << std::endl;
        }
    }

    // Metodo publico (getter) para obter a idade
    int getIdade() {
        return idade;
    }

    // Metodo publico (getter) para obter o nome
    std::string getNome() {
        return nome;
    }

    // Poderiamos ter um setter para o nome tambem, se desejado
    void setNome(std::string novoNome) {
        nome = novoNome;
    }
};

int main() {
    // Criando objetos usando o construtor
    Pessoa pessoa1("Ana", 30);
    Pessoa pessoa2("Carlos", -5); // Testando a validacao da idade no construtor

    std::cout << "\nDados da Pessoa 1:" << std::endl;
    pessoa1.apresentar();

    std::cout << "\nDados da Pessoa 2:" << std::endl;
    pessoa2.apresentar();
    // pessoa2.idade = 25; // ERRO DE COMPILACAO! 'idade' e privado e nao pode ser acessado diretamente.
    // std::cout << pessoa2.nome; // ERRO DE COMPILACAO! 'nome' e privado.

    // Usando metodos publicos para interagir com os dados privados
    std::cout << "\nIdade da Ana (usando getter): " << pessoa1.getIdade() << std::endl;
    pessoa1.setIdade(31);
    pessoa1.setIdade(20); // Nao vai alterar pela nossa regra no setIdade
    std::cout << "Nome da Ana (usando getter): " << pessoa1.getNome() << std::endl;
    std::cout << "Nova apresentacao da Ana:" << std::endl;
    pessoa1.apresentar();


    return 0;
}