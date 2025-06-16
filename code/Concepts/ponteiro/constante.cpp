// Inclui a biblioteca de entrada e saída, necessária para usar 'std::cout'.
#include <iostream> 

// --- Declaração da Função ---
// A função 'imprimirValor' não retorna nenhum valor (por isso 'void').
// Ela recebe dois parâmetros, e aqui está o ponto-chave:
// Mesmo com o 'const', ambos estão sendo passados POR VALOR.
void imprimirValor(const std::string nome, const int idade) { 
    // PARÂMETRO 1: 'nome' é do tipo 'std::string'. Ao ser passado por valor, 
    // uma CÓPIA COMPLETA da string original é criada para ser usada apenas DENTRO desta função.
    
    // PARÂMETRO 2: 'idade' é do tipo 'int'. Da mesma forma, uma CÓPIA do valor 
    // da idade original é criada para uso local. Para um 'int', isso é muito rápido.

    // O 'const' aqui significa que as CÓPIAS 'nome' e 'idade' não podem ser alteradas
    // dentro desta função. É uma segurança adicional, mas não muda o fato de serem cópias.
    
    // Imprime os valores das CÓPIAS na tela.
    std::cout << "nome: " << nome << std::endl;
    std::cout << "idade: " << idade << std::endl;
}

// A única mudança é o '&' depois de std::string
void imprimirValorOtimizado(const std::string &nome1, const int idade) {
    // Agora, 'nome' não é uma cópia, mas uma referência (um "atalho")
    // para a string original na função main.
    // Isso evita a cópia, deixando o programa mais rápido.
    // O 'const' garante que a função não pode modificar o 'nome' original. É o melhor dos dois mundos!
    
    // Para 'idade', manter por valor está perfeito, pois 'int' é um tipo pequeno.
    std::cout << "nome: " << nome1 << std::endl;
    std::cout << "idade: " << idade << std::endl;
}

// A função 'main' é o ponto de entrada de todo programa C++.
int main() {
    
    // Criamos a variável ORIGINAL 'nome' e alocamos memória para ela.
    std::string nome = "guilherme"; 
    std::string nome1 = "matheus"; 
    // Criamos a variável ORIGINAL 'idade'.
    int idade = 18;

    // --- A CHAMADA DA FUNÇÃO ---
    // Neste momento, acontece a passagem por valor:
    // 1. O conteúdo de 'nome' ("guilherme") é COPIADO para o parâmetro 'nome' da função.
    // 2. O valor de 'idade' (18) é COPIADO para o parâmetro 'idade' da função.
    imprimirValor(nome, idade);
    imprimirValor(nome1, idade);

    // O programa termina com sucesso.
    return 0; 
}