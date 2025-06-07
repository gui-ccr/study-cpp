/*
 * Desafio: Loja de Produtos (Foco em Classe e Objeto)
 * O que eu pratiquei aqui:
 * - Criar uma classe 'Produto' para servir como molde.
 * - Usar um construtor para inicializar os produtos com seus dados.
 * - Implementar metodos para exibir as informacoes e para interagir com os dados (atualizarEstoque).
 * - Criar e gerenciar multiplos objetos (instancias) da mesma classe no main.
 */
#include <iostream>
#include <string>
using namespace std;

class Produto{
private:
    std::string nome;
    double preco;
    int quantidadeEmEstoque;

public:
    // Construtor para inicializar os atributos
    Produto(std::string nomeInicial, double precoInicial, int quantidadeInicial) {
        nome = nomeInicial;
        preco = precoInicial;
        quantidadeEmEstoque = quantidadeInicial;
    }

    // Metodo para mostrar os dados do produto
    void exibirInformacoes() {
        std::cout << " " << std::endl 
                  << "Produto: " << nome << std::endl
                  << "------------------" << std::endl
                  << "Preco: R$ " << preco << std::endl
                  << "------------------" << std::endl
                  << "Quantidade em estoque: " << quantidadeEmEstoque << std::endl
                  << "_____________________" << std::endl;
    }

    // Metodo para adicionar ou remover itens do estoque, com validacao
    void atualizarEstoque(int quantidade) {
        if (quantidade > 0) {
            // Adicionando ao estoque
            this->quantidadeEmEstoque += quantidade;
            std::cout << quantidade << " unidades adicionadas ao estoque do produto: " << nome << ". Novo estoque: " << this->quantidadeEmEstoque << std::endl;
        } else if (quantidade < 0) {
            // Vendendo do estoque
            int quantidadeAVender = -quantidade; // Torna o valor positivo
            if (this->quantidadeEmEstoque >= quantidadeAVender) {
                this->quantidadeEmEstoque -= quantidadeAVender;
                std::cout << quantidadeAVender << " unidades vendidas do produto: " << nome << ". Novo estoque: " << this->quantidadeEmEstoque << std::endl;
            } else {
                // Caso de estoque insuficiente
                std::cout << "Tentativa de venda de " << quantidadeAVender << " unidades de " << nome << "." << std::endl;
                std::cout << "Estoque insuficiente (" << this->quantidadeEmEstoque << "). Vendendo todo o estoque restante." << std::endl;
                this->quantidadeEmEstoque = 0;
                std::cout << "Novo estoque: " << this->quantidadeEmEstoque << std::endl;
            }
        } else {
            // Caso a quantidade seja 0
            std::cout << "Nenhuma alteracao no estoque do produto: " << nome << std::endl;
        }
    }
};

int main()
{
    // Crio tres objetos diferentes da mesma classe Produto
    Produto produto1("caneta", 9.90, 30);
    Produto produto2("copo", 23.90, 25);
    Produto produto3("mochila", 120.90, 10);
    
    // Exibo as informacoes iniciais
    produto1.exibirInformacoes();
    produto2.exibirInformacoes();
    produto3.exibirInformacoes();

    // Testo o metodo de interacao com cada objeto
    cout << "\n--- Atualizando Estoques ---" << endl;
    produto1.atualizarEstoque(20);    // Teste de adicao
    produto2.atualizarEstoque(-30);   // Teste de venda com estoque insuficiente
    produto3.atualizarEstoque(0);     // Teste de alteracao nula

    return 0;
}