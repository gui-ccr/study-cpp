#include <iostream>
using namespace std;

// Função para ordenar a lista (usando Bubble Sort)
void sort(int lista[], int tamanho)
{
    int temp; // Variável temporária para ajudar na troca de elementos
    // Loop externo: controla quantas vezes passamos pela lista
    for (int i = 0; i < tamanho - 1; i++)
    {
        // Loop interno: compara e troca os elementos adjacentes
        for (int j = 0; j < tamanho - i - 1; j++)
        {
            // Se o elemento atual é maior que o próximo
            if (lista[j] > lista[j + 1])
            {
                // Troca os elementos de lugar
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
}

main()
{
    int lista[] = {1, 5, 6, 9, 8, 30, 55, 120, 12, 7, 10, 2, 3, 4};
    int tamanho = sizeof(lista) / sizeof(lista[0]); // Calcula o tamanho do array
    
    sort(lista, tamanho); // Chama a função para ordenar o array 'lista'
    
    // Loop para imprimir os elementos da lista já ordenada
    for (int elemento : lista) 
    {
        cout << elemento << " ";
    }
    return 0;
}
