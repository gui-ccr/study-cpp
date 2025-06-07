/*
 * Tópico: Ponteiros
 * O que eu aprendi aqui:
 * Eu aprendi o que e' um ponteiro: uma variavel especial que nao guarda um valor comum,
 * mas sim um ENDERECO DE MEMORIA de outra variavel.
 * Usei a analogia da "gaveta": a variavel normal e' a gaveta com o dado, e o ponteiro
 * e' um "bilhete" que tem o numero (endereco) daquela gaveta.
 *
 * Operadores que eu aprendi:
 * - '&' (Operador "endereco de"): Eu uso para descobrir qual e' o endereco de uma variavel.
 * - '*' (Operador de "desreferencia"): Eu uso para duas coisas:
 * 1. Para DECLARAR que uma variavel e' um ponteiro (ex: int* ptr;).
 * 2. Para ACESSAR o valor que esta guardado no endereco para o qual o ponteiro aponta.
 */
#include <iostream>

int main() {
    // Aqui eu crio minha variavel normal. E a "gaveta" que guarda o valor 10.
    int numero = 10;
    
    // Aqui eu declaro um ponteiro. 'ptrNumero' e' minha variavel especial (o "bilhete")
    // que pode guardar o endereco de uma variavel do tipo 'int'.
    // O '*' aqui indica que 'ptrNumero' e' um ponteiro.
    int* ptrNumero;

    // --- Acao de Apontar ---
    // Eu pego o endereco da gaveta 'numero' usando o operador '&'
    // e guardo esse endereco dentro do meu ponteiro 'ptrNumero'.
    // A partir de agora, 'ptrNumero' esta' "apontando para" 'numero'.
    ptrNumero = &numero;

    // --- Verificando os Valores e Enderecos ---
    std::cout << "--- Investigando as Variaveis ---" << std::endl;
    
    // Imprimindo o valor direto da variavel 'numero'.
    std::cout << "Valor guardado em 'numero': " << numero << std::endl;
    
    // Usando '&' para ver qual e' o endereco de memoria real da variavel 'numero'.
    std::cout << "Endereco de 'numero' na memoria (&numero): " << &numero << std::endl;
    
    // Imprimindo o que esta guardado DENTRO do meu ponteiro. E o endereco de 'numero'.
    // O resultado desta linha deve ser o mesmo da linha de cima.
    std::cout << "Valor de 'ptrNumero' (o endereco que ele guarda): " << ptrNumero << std::endl;
    
    // Usando '*' para "desreferenciar" o ponteiro.
    // Isso significa: "Vá para o endereco que 'ptrNumero' esta apontando e me mostre o VALOR que esta la."
    std::cout << "Valor no endereco apontado por 'ptrNumero' (*ptrNumero): " << *ptrNumero << std::endl;

    
    // --- Modificacao Indireta ---
    std::cout << "\n--- Modificando o valor atraves do ponteiro ---" << std::endl;
    
    // Aqui eu uso o '*' novamente para acessar o valor no endereco apontado e modifica-lo.
    // Estou dizendo: "Va para a gaveta cujo endereco esta no meu bilhete e troque o valor la dentro para 20."
    *ptrNumero = 20;

    // Agora eu verifico o valor da minha variavel ORIGINAL 'numero'.
    // Mesmo que eu nao tenha mexido em 'numero' diretamente, o valor dela mudou
    // porque eu mudei o valor na memoria atraves do ponteiro.
    std::cout << "O novo valor da variavel original 'numero' e: " << numero << std::endl;

    return 0; // Fim do programa.
}