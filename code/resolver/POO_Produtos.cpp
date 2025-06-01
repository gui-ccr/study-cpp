#include <iostream>
#include <string>

class Produto{
private:
    std::string nome;
    double preco;
    int quantidadeEmEstoque;

public:
    Produto(std::string nomeInicial, double precoInicial, int quantidadeInicial)
    {
        nome = nomeInicial;
        preco = precoInicial;
        quantidadeEmEstoque = quantidadeInicial;
    }

    void exibirInformacoes()
    {
        std::cout << " " << std::endl 
                  << "Produto: " << nome << std::endl
                  << "------------------" << std::endl
                  << "Preco: " << preco << std::endl
                  << "------------------" << std::endl
                  << "Quantidade em estoque: " << quantidadeEmEstoque << std::endl
                  << "_____________________" << std::endl;
    }

    void atualizarEstoque(int quantidade)
    {
        if (quantidade > 0)
        {

            // adicionar ao estoque
            this->quantidadeEmEstoque += quantidade;
            std::cout << quantidade << " unidade adicionadas ao estoque do produto: " << nome << std::endl << "Novo estoque: " << this->quantidadeEmEstoque << std::endl;
        }
        else if (quantidade < 0)
        {
            int quantidadeAVender = -quantidade ; // torna o valor postitivo para representar um valor positivo para a venda 
            if (this-> quantidadeEmEstoque >= quantidadeAVender)
            {
                this->quantidadeEmEstoque -= quantidadeAVender;
                std::cout << -quantidade << " unidade vendidas do produto: " << nome << std::endl << "Novo estoque: " << this->quantidadeEmEstoque << std::endl;
            } else{
                std::cout << std::endl << "Tentativa de venda de " << quantidadeAVender << " Unidades. ";
                std::cout << "Estoque insuficiente (" << this->quantidadeEmEstoque << "). Vendendo todo o estoque restante." << std::endl;
                this->quantidadeEmEstoque = 0; // garante que o estoque nao fique negativo
                std::cout << std::endl << "Novo estoque do produto " << nome << ": " << this->quantidadeEmEstoque;

            }
        }else{
            std::cout << std::endl << "Nenhuma alteracao do estoque do produto: " << nome << std::endl;
        }
    }
};

int main()
{
  
    Produto produto1("caneta", 9.90, 30);
    Produto produto2("copo", 23.90, 25);
    Produto produto3("mochila", 120.90, 10);

    

    produto1.exibirInformacoes();
    produto2.exibirInformacoes();
    produto3.exibirInformacoes();

    produto1.atualizarEstoque(20);
    produto2.atualizarEstoque(-30);
    produto3.atualizarEstoque(0);

    return 0;
}
