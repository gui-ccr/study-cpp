/*
 * Tópico: Classe e Objeto
 * O que eu aprendi aqui:
 * Eu aprendi o conceito fundamental de Programacao Orientada a Objetos.
 * A 'Classe' (ex: Pessoa) e como se fosse o meu molde ou a minha planta baixa. Ela define
 * as caracteristicas (atributos) e as acoes (metodos) que algo vai ter.
 * O 'Objeto' (ex: pessoa1) e a instancia concreta criada a partir desse molde. E a "Pessoa" de verdade.
 */
#include <iostream>
#include <string> // Eu preciso incluir esta biblioteca para poder usar o tipo 'string'.

// --- Definição da Classe (o Molde) ---
class Pessoa {
public: // 'public' significa que eu posso acessar estes membros de qualquer lugar do meu codigo.
    
    // --- Atributos (as caracteristicas da Pessoa) ---
    // Todo objeto Pessoa tera seu proprio nome e sua propria idade.
    std::string nome;
    int idade;

    // --- Métodos (as acoes que a Pessoa pode fazer) ---
    // Este metodo imprime os dados da pessoa no console.
    void apresentar() {
        std::cout << "Ola! Meu nome e " << nome << " e eu tenho " << idade << " anos." << std::endl;
    }

    // Este metodo aumenta a idade do objeto em 1.
    void fazerAniversario() {
        idade++; // '++' e um atalho para 'idade = idade + 1'.
        std::cout << "Feliz aniversario para mim! Agora tenho " << idade << " anos." << std::endl;
    }
}; // Lembre-se: A definicao da classe sempre termina com um ponto e virgula ';'.

// --- Função Principal: Onde meu programa comeca a rodar ---
int main() {
    // --- Criacao dos Objetos (as instancias) ---
    // Aqui eu crio uma variavel 'pessoa1' que e um objeto do tipo 'Pessoa'.
    Pessoa pessoa1; 
    // Como os atributos sao publicos, eu posso acessa-los e modifica-los diretamente usando o ponto '.'.
    pessoa1.nome = "Ana";
    pessoa1.idade = 30;

    // Aqui eu crio um segundo objeto, independente do primeiro.
    Pessoa pessoa2; 
    pessoa2.nome = "Carlos";
    pessoa2.idade = 25;

    // --- Usando os Objetos ---
    std::cout << "Dados da Pessoa 1:" << std::endl;
    // Aqui eu chamo o metodo 'apresentar' do objeto 'pessoa1'.
    pessoa1.apresentar(); 
    pessoa1.fazerAniversario();

    std::cout << "\nDados da Pessoa 2:" << std::endl;
    // Aqui eu chamo o mesmo metodo, mas para o objeto 'pessoa2'.
    pessoa2.apresentar();

    // Acesso direto ao atributo 'nome' de 'pessoa1' para impressao.
    std::cout << "\nO nome da pessoa1 ainda e: " << pessoa1.nome << std::endl;

    return 0; // Indica que o programa terminou com sucesso.
}