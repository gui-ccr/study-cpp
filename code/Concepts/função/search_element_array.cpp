#include <iostream>
using namespace std;

int procurarElemento(string lista[], int tamanho, string elemento);

main()
{
    // declaração dos dados
    string Listacomida[] = {"pizza" , "hamburguer", "strogonoff", "pudim"}; // lista de elementos 
    int size = sizeof(Listacomida)/sizeof(Listacomida[0]); // aqui é calculado o tamanho da lista
    string comida;
    int indice;


    // exibição 
    cout << "digite qual comida voce quer procurar na lista (pizza, hamburguer, strogonoff, pudim): ";
    getline(cin, comida);

    // processamento de dados

    indice = procurarElemento(Listacomida, size, comida);

    if(indice != -1){
        cout << comida << " esta no indice " << indice;
    }
    else{
        cout << comida << " nao esta na lista";
    }

    


    return 0;
}


// função para procurar o elemento na lista
int procurarElemento(string lista[], int tamanho, string elemento){

    for(int i = 0; i < tamanho; i++){ // Loop principal
        if (lista[i] == elemento)    // Verificação
        {
            return i;                // Encontrou! Retorna o índice.
        }
    }
    return -1;                       // Não encontrou após o loop.
}