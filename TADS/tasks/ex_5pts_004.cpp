/*
?   4) (1,5 pts) Faça um programa que realize o cálculo da Folha de Pagamento de um funcionário,
?   sabendo-se que os descontos são:
?    Imposto de Renda (IR): o valor da taxa depende do salário, conforme tabela discriminada
?   abaixo;
?    Sindicato: taxa fixa de 3%; e
?    Instituto Nacional de Seguridade Social (INSS): o valor da taxa depende do salário,
?   conforme tabela discriminada abaixo.
?   Além disso, seu algoritmo deverá calcular também o valor do Fundo de Garantia por Tempo de
?   Serviço (FGTS) que corresponde a 11% do salário, mas não é descontado, pois é a empresa que
?   realiza o depósito. Para determinar o valor do salário bruto é necessário conhecer o valor da hora
?   de trabalho e a quantidade de horas trabalhadas no mês.
?   Tabela de Desconto do Imposto de Renda:
?    Salário Bruto até R$ 1.903,98 (inclusive) – isento;
?    Salário Bruto até R$ 2.826,65 (inclusive) – desconto de 7,5%;
?    Salário Bruto até R$ 3.751,05 (inclusive) – desconto de 15%;
?    Salário Bruto até R$ 4.664,68 (inclusive) – desconto de 22,5%; e
?    Salário Bruto acima de R$ 4.664,68 – desconto de 27,5%.
?   Tabela do INSS:
?    Salário Bruto até R$ 1.212.00 (inclusive) – 7,5%;
?    Salário Bruto até R$ 2.427,35 (inclusive) – desconto de 9%;
?    Salário Bruto até R$ 3.641,03 (inclusive) – desconto de 12%; e
?    Salário Bruto acima de R$ 3.641,03 – desconto de 14%.
?   Por fim, seu programa deverá imprimir na tela todos dados exibidos no exemplo abaixo,
?   observando inclusive, a ordem e organização dos dados na tela.  
*/



#include <iostream>
#include <string>
#include <iomanip> // Para std::fixed, std::setprecision e std::setw
#include <locale>  // Para setlocale



int main() {
    setlocale(LC_ALL, "Portuguese");   

    // Variáveis para armazenar os dados do funcionário
    double valorHora, horasTrabalhadas;
    std::string nomeFuncionario;
    std::cout << " " << std::endl; // Espaço em branco para melhorar a legibilidadeno no terminal
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "--- Cálculo da Folha de Pagamento ---" << std::endl;
    std::cout << "Nome do Funcionário: ";
    std::getline(std::cin, nomeFuncionario);
    std::cout << "Valor da hora de trabalho: R$ ";
    std::cin >> valorHora;
    std::cout << "Quantidade de horas trabalhadas no mês: ";
    std::cin >> horasTrabalhadas;

    double salarioBruto = valorHora * horasTrabalhadas;

    // Variáveis para armazenar as strings das porcentagens para exibição
    std::string irPercentualDisplay;
    std::string inssPercentualDisplay;
    std::string sindicatoPercentualDisplay = "3.0%"; 
    std::string fgtsPercentualDisplay = "11.0%";   


    // Cálculo do Imposto de Renda (IR)
    double irPercentualValorNumerico = 0.0; // Variável para o cálculo
    double descontoIR = 0.0;

    if (salarioBruto <= 1903.98) {
        irPercentualValorNumerico = 0.0;
        irPercentualDisplay = "Isento";
    } else if (salarioBruto <= 2826.65) {
        irPercentualValorNumerico = 7.5;
        irPercentualDisplay = "7.5%";
    } else if (salarioBruto <= 3751.05) {
        irPercentualValorNumerico = 15.0;
        irPercentualDisplay = "15.0%";
    } else if (salarioBruto <= 4664.68) { 
        irPercentualValorNumerico = 22.5;
        irPercentualDisplay = "22.5%";
    } else { 
        irPercentualValorNumerico = 27.5;
        irPercentualDisplay = "27.5%";
    }
    descontoIR = salarioBruto * (irPercentualValorNumerico / 100.0);

    // Cálculo do INSS
    double inssPercentualValorNumerico = 0.0; // Variável para o cálculo
    double descontoINSS = 0.0;

    if (salarioBruto <= 1212.00) { 
        inssPercentualValorNumerico = 7.5;
        inssPercentualDisplay = "7.5%";
    } else if (salarioBruto <= 2427.35) { 
        inssPercentualValorNumerico = 9.0;
        inssPercentualDisplay = "9.0%";
    } else if (salarioBruto <= 3641.03) { 
        inssPercentualValorNumerico = 12.0;
        inssPercentualDisplay = "12.0%";
    } else { // Acima de R$ 3.641,03
        inssPercentualValorNumerico = 14.0;
        inssPercentualDisplay = "14.0%";
    }
    descontoINSS = salarioBruto * (inssPercentualValorNumerico / 100.0);

    // Cálculo do Sindicato
    double descontoSindicato = salarioBruto * (3.0 / 100.0); 

    // Cálculo do FGTS
    double valorFGTS = salarioBruto * (11.0 / 100.0); 

    double totalDescontos = descontoIR + descontoINSS + descontoSindicato;
    double salarioLiquido = salarioBruto - totalDescontos;

    // --- Impressão da Folha de Pagamento ---
    std::cout << "\n--- FOLHA DE PAGAMENTO ---" << std::endl;
    std::cout << "--- " << nomeFuncionario << " ---" << std::endl;
    std::cout << std::fixed << std::setprecision(2); // Configura para 2 casas decimais para valores monetários

    // Usando std::right para alinhar os valores R$ à direita e std::left para os textos
    // O setw para o texto inclui o espaço para a string da porcentagem
    std::cout << std::left << std::setw(25) << "Salário Bruto.....:" << "R$ " << std::right << std::setw(10) << salarioBruto << std::endl;

    if (irPercentualValorNumerico == 0.0) {
        std::cout << std::left << std::setw(25) << "(-) IR (Isento).....:" << "R$ " << std::right << std::setw(10) << descontoIR << std::endl;
    } else {
        std::cout << std::left << std::setw(25) << "(-) IR (" + irPercentualDisplay + ").....:" << "R$ " << std::right << std::setw(10) << descontoIR << std::endl;
    }

    std::cout << std::left << std::setw(25) << "(-) INSS (" + inssPercentualDisplay + ")....:" << "R$ " << std::right << std::setw(10) << descontoINSS << std::endl;
    std::cout << std::left << std::setw(25) << "(-) Sindicato (3.0%)..:" << "R$ " << std::right << std::setw(10) << descontoSindicato << std::endl; // Sindicato é fixo 3%
    std::cout << std::left << std::setw(25) << "FGTS (11.0%)........:" << "R$ " << std::right << std::setw(10) << valorFGTS << std::endl;       // FGTS é fixo 11%
    std::cout << "----------------------------------------" << std::endl;
    std::cout << std::left << std::setw(25) << "Total de Descontos:" << "R$ " << std::right << std::setw(10) << totalDescontos << std::endl;
    std::cout << std::left << std::setw(25) << "Salário Líquido...:" << "R$ " << std::right << std::setw(10) << salarioLiquido << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    return 0;
}