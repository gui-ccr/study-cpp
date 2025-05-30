/*
Ponteiros (* e &) 📌
Ponteiros são variáveis que armazenam endereços de memória de outras variáveis.

O operador & (endereço de) retorna o endereço de memória de uma variável.
O operador * (ponteiro para ou desreferência) declara um ponteiro ou acessa o valor no endereço de memória apontado.
Por que usar ponteiros?

Alocação dinâmica de memória: Criar variáveis em tempo de execução.
Passagem de arrays e objetos para funções de forma eficiente: Evita copiar grandes blocos de dados.
Manipulação direta de memória: Útil em programação de baixo nível e para certas estruturas de dados.

*/
#include <iostream>

int main() {
    int numero = 10;     // 'numero' é uma gaveta (digamos, no endereço 1001) com o valor 10 dentro.
    int* ptrNumero;      // 'ptrNumero' é uma gaveta especial para guardar endereços de inteiros.

    ptrNumero = &numero; // 'ptrNumero' agora guarda o endereço de 'numero' (1001).
                         // Dizemos: 'ptrNumero' aponta para 'numero'.

    // O que temos?
    std::cout << "Valor de numero: " << numero << std::endl; // Mostra o que tem em 'numero' (10).
    std::cout << "Endereço de numero (&numero): " << &numero << std::endl; // Mostra o endereço da gaveta 'numero' (1001).
    std::cout << "Valor de ptrNumero (o endereço que ele guarda): " << ptrNumero << std::endl; // Mostra o que tem em 'ptrNumero' (1001).
    std::cout << "Valor apontado por ptrNumero (*ptrNumero): " << *ptrNumero << std::endl; // Vá ao endereço que 'ptrNumero' guarda (1001) e pegue o valor lá (10).

    // Modificando 'numero' através do ponteiro
    *ptrNumero = 20;     // Vá ao endereço que 'ptrNumero' guarda (1001) e coloque 20 lá.
                         // A gaveta 'numero' (no endereço 1001) agora contém 20.

    std::cout << "Novo valor de numero: " << numero << std::endl; // Mostra o novo valor de 'numero' (20).

    return 0;
}

/*
 Analogia dos Ponteiros com Gavetas:

 1. Variável Normal (ex: int numero = 10;):
    - É como uma GAVETA que guarda um VALOR diretamente (o número 10).
    - Cada gaveta tem um ENDEREÇO único na memória (como o número de um apartamento).

 2. Ponteiro (ex: int* ptr;):
    - É uma GAVETA ESPECIAL que não guarda um valor comum, mas sim o ENDEREÇO de outra gaveta.
    - É como um "bilhete" que diz onde encontrar a gaveta original.

 3. Operador '&' (Endereço de - ex: &numero):
    - Pergunta: "Qual é o ENDEREÇO da gaveta 'numero'?"
    - Retorna o endereço da memória onde 'numero' está guardado.
    - Ex: ptr = &numero;  // O ponteiro 'ptr' agora contém o endereço da gaveta 'numero'.

 4. Operador '*' (Valor Apontado Por / Desreferência - ex: *ptr):
    - Pergunta: "Qual é o VALOR que está DENTRO da gaveta cujo endereço está no 'ptr'?"
    - Acessa o valor da variável original para a qual o ponteiro aponta.
    - Ex: std::cout << *ptr; // Mostra o valor guardado na gaveta 'numero'.
    - Ex: *ptr = 20;        // Muda o valor DENTRO da gaveta 'numero' para 20, usando o ponteiro.

 Resumindo:
 - Variável: Guarda o dado.
 - Ponteiro: Guarda o endereço de onde o dado está.
 - '&' pega o endereço.
 - '*' acessa o dado através do endereço.
*/