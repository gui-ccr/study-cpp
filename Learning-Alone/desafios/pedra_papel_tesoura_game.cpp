#include <iostream>
using namespace std;

// chamei as funções de GetUserChoice, GetComputerChoice, ShowChoice e ChosseWinner
// para organizar o código e facilitar a leitura, mas não são obrigatórias

char GetUserChoice();
char GetComputerChoice();
void ShowChoice(char choice);
void ChosseWinner(char player, char computer);


main(){

    char player;
    char computer;


    player = GetUserChoice();
    cout << "Escolha do jogador: " << player << endl;
    ShowChoice(player);


}


/*
criei as funções GetUserChoice, GetComputerChoice, ShowChoice e ChosseWinner
*/


// GetUserChoice: função para obter a escolha do jogador

char GetUserChoice(){

    char player;
    cout << "jogo de Pedra-Papel-Tesoura" << endl;
    
    do
    {
        cout << "Escolha entre 1 das opcoes: " << endl;
        cout << "****************************" << endl;
        cout << "digite 'p' para escolher pedra" << endl;
        cout << "digite 'a' para escolher papel " << endl;
        cout << "digite 't' para escolher tesoura" << endl;
        cin >> player;
        cout << player;
        
    }while(player != 'p' && player != 'a' && player != 't' );

    return player;
    
}

// GetComputerChoice: função para obter a escolha do computador
char GetComputerChoice(){
    
}

// ShowChoice: função para mostrar a escolha do jogador ou computador
// A função recebe um caractere como argumento e imprime a escolha correspondente
void ShowChoice(char choice) {
    switch (choice) {
        case 'p': cout << "Pedra" << endl; break;
        case 'a': cout << "Papel" << endl; break;
        case 't': cout << "Tesoura" << endl; break;
    }
}

// ChosseWinner: função para determinar o vencedor do jogo
// A função recebe as escolhas do jogador e do computador como argumentos e imprime o resultado
void ChosseWinner(char player, char computer){
    if (player == computer) {
        cout << "Empate!" << endl;
    } else if ((player == 'p' && computer == 't') ||
               (player == 'a' && computer == 'p') ||
               (player == 't' && computer == 'a')) {
        cout << "Vencedor: Jogador!" << endl;
    } else {
        cout << "Vencedor: Computador!" << endl;
    }
}