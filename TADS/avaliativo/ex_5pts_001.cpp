/*
? 1) (1,0 pto) Um banco está criando um sistema simples para avaliar pedidos de empréstimo. O cliente
? informa sua renda mensal, o valor do empréstimo solicitado, o número de parcelas e se está com o
? nome negativado. Para concessão do empréstimo, as condições são:
?  O valor da parcela não pode ultrapassar 30% da renda mensal.
?  O cliente não pode estar negativado.
?  Se a renda for maior que R$ 10.000 e o valor do empréstimo for menor que R$ 50.000, a
? aprovação será automática, mesmo que o valor da parcela passe um pouco (até 35%), mas
? ainda precisa estar com o nome limpo.
? Por fim, seu algoritmo deverá exibir o valor da parcela, se o empréstimo foi aprovado ou reprovado,
? e por qual motivo.


*/




#include <iostream>
#include <iomanip> // Para std::fixed e std::setprecision

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Para permitir acentos no console (pode não funcionar em todos os sistemas)

    double rendaMensal, valorEmprestimo;
    int numeroParcelas;
    char nomeNegativadoChar;
    bool nomeNegativado;

    std::cout << " " << std::endl; // Espaço em branco para melhorar a legibilidade no terminal

    // Variáveis para armazenar os dados do cliente
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Bem-vindo ao sistema de empréstimos!" << std::endl;
    std::cout << "--- Avaliação de Pedido de Empréstimo ---" << std::endl;
    std::cout << "Informe sua renda mensal: R$ ";
    std::cin >> rendaMensal;
    std::cout << "Informe o valor do empréstimo solicitado: R$ ";
    std::cin >> valorEmprestimo;
    std::cout << "Informe o número de parcelas: ";
    std::cin >> numeroParcelas;
    std::cout << "Você está com o nome negativado? (S/N): ";
    std::cin >> nomeNegativadoChar;

    if (nomeNegativadoChar == 'S' || nomeNegativadoChar == 's')
    {
        nomeNegativado = true;
    }
    else
    {
        nomeNegativado = false;
    } // Verifica se o cliente está negativado

    double valorParcela = valorEmprestimo / numeroParcelas;

    std::cout << std::fixed << std::setprecision(2); // Configura para exibir duas casas decimais
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Valor da parcela: R$ " << valorParcela << std::endl;

    if (nomeNegativado)
    {
        std::cout << "Empréstimo REPROVADO." << std::endl;
        std::cout << "Motivo: Cliente com nome negativado." << std::endl;
    }
    else
    {
        //! Condição de aprovação automática
        if (rendaMensal > 10000.00 && valorEmprestimo < 50000.00)
        {
            if (valorParcela <= (rendaMensal * 0.35))
            {
                std::cout << "Empréstimo APROVADO (automático)." << std::endl;
                std::cout << "Motivo: Renda alta e valor de empréstimo baixo, com parcela dentro do limite especial de 35%." << std::endl;
                std::cout << "O emprestimo foi de " << valorEmprestimo << " divido em " << numeroParcelas << "x parcelas de " << valorParcela
                          << " reais." << std::endl;
            }
            else
            {
                std::cout << "Empréstimo REPROVADO." << std::endl;
                std::cout << "Motivo: Mesmo com as condições para aprovação automática, o valor da parcela (R$ " << valorParcela
                          << ") excede 35% da renda mensal (R$ " << rendaMensal * 0.35 << ")." << std::endl;
            }
        }
        else
        {
            //! Condição normal de aprovação
            if (valorParcela <= (rendaMensal * 0.30))
            {
                std::cout << "Empréstimo APROVADO." << std::endl;
                std::cout << "Motivo: Valor da parcela compatível com a renda e nome limpo." << std::endl;
                std::cout << "O emprestimo foi de " << valorEmprestimo << " divido em " << numeroParcelas << "x parcelas de " << valorParcela
                          << " reais." << std::endl;
            }
            else
            {
                std::cout << "Empréstimo REPROVADO." << std::endl;
                std::cout << "Motivo: O valor da parcela (R$ " << valorParcela
                          << ") excede 30% da renda mensal (R$ " << rendaMensal * 0.30 << ")." << std::endl;
            }
        }
    }

    return 0;
}