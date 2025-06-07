/*
 * Tópico: Encapsulamento
 * O que eu aprendi aqui:
 * Eu aprendi a proteger os dados da minha classe usando o especificador 'private'.
 * Os atributos privados so podem ser acessados pelos metodos da propria classe.
 * Para permitir a interacao com o mundo exterior de forma segura, eu crio uma interface
 * com metodos publicos (como o construtor, getters e setters). Isso e encapsulamento.
 */
#include <iostream>
#include <string>

class Pessoa {
private: // 'private' significa que estes atributos so podem ser acessados aqui de dentro da classe.
    std::string nome;
    int idade;

public: // 'public' significa que esta e a interface da minha classe com o mundo exterior.
    
    // --- Construtor ---
    // Este e um metodo especial que e chamado automaticamente quando eu crio um objeto.
    // Eu o uso para inicializar os atributos do objeto de forma segura.
    Pessoa(std::string nomeInicial, int idadeInicial) {
        nome = nomeInicial; // O nome eu aceito qualquer um.
        
        // Eu adiciono uma regra de validacao para a idade.
        if (idadeInicial > 0) {
            idade = idadeInicial;
        } else {
            // Se a idade for invalida, eu defino um valor padrao e aviso o usuario.
            idade = 0; 
            std::cout << "Idade invalida fornecida. Definindo idade como 0." << std::endl;
        }
        std::cout << "Objeto Pessoa criado para " << nome << std::endl;
    }

    // Metodo publico que pode acessar os atributos privados 'nome' e 'idade'.
    void apresentar() {
        std::cout << "Ola! Meu nome e " << nome << " e eu tenho " << idade << " anos." << std::endl;
    }

    // --- Setter ---
    // Um metodo 'setter' e usado para modificar um atributo privado, mas com regras.
    void setIdade(int novaIdade) {
        // So permito que a nova idade seja maior que a atual e positiva.
        if (novaIdade > 0 && novaIdade > idade) {
            idade = novaIdade;
        } else {
            std::cout << "Tentativa de definir idade invalida." << std::endl;
        }
    }

    // --- Getter ---
    // Um metodo 'getter' e usado para permitir a leitura de um atributo privado.
    int getIdade() {
        return idade;
    }

    std::string getNome() {
        return nome;
    }

    // Um setter para o nome, se eu quisesse permitir a mudanca de nome.
    void setNome(std::string novoNome) {
        nome = novoNome;
    }
};

int main() {
    // Agora, para criar um objeto, eu sou obrigado a passar os dados para o construtor.
    Pessoa pessoa1("Ana", 30);
    Pessoa pessoa2("Carlos", -5); // Testando a validacao de idade do construtor.

    std::cout << "\nDados da Pessoa 1:" << std::endl;
    pessoa1.apresentar();

    std::cout << "\nDados da Pessoa 2:" << std::endl;
    pessoa2.apresentar();
    
    // Estas linhas dariam ERRO DE COMPILACAO porque 'idade' e 'nome' sao 'private'.
    // pessoa2.idade = 25; 
    // std::cout << pessoa2.nome;

    // Eu devo usar os metodos publicos para interagir com o objeto.
    std::cout << "\nIdade da Ana (usando getter): " << pessoa1.getIdade() << std::endl;
    pessoa1.setIdade(31);  // Isso vai funcionar.
    pessoa1.setIdade(20);  // Isso vai ser bloqueado pela minha regra no setter.
    std::cout << "Nome da Ana (usando getter): " << pessoa1.getNome() << std::endl;
    std::cout << "Nova apresentacao da Ana:" << std::endl;
    pessoa1.apresentar();

    return 0;
}