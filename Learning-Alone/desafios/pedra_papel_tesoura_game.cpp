#include <iostream>
#include <ctime>
using namespace std;

/*

?   Esse é um jogo simples de Pedra, Papel e Tesoura entre um jogador e o computador.
?   O jogador escolhe entre pedra, papel ou tesoura, e o computador faz uma escolha aleatória.
?   O vencedor é determinado com base nas regras do jogo:
?   - Pedra vence Tesoura
?   - Tesoura vence Papel
?   - Papel vence Pedra
?   - Se ambos escolherem a mesma opção, é um empate


*/

//* chamei as funções de GetUserChoice, GetComputerChoice, ShowChoice e ChosseWinner

char GetUserChoice();
char GetComputerChoice();
void ShowChoice(char choice);
void ChosseWinner(char player, char computer);

main()
{

    char player;
    char computer;

    player = GetUserChoice();
    cout << "Escolha do jogador: " << player << endl;
    ShowChoice(player);

    cout << "Escolha do computador: " << endl;
    computer = GetComputerChoice();
    ShowChoice(computer);

    ChosseWinner(player, computer);
    //TODO Chama a função ChosseWinner para determinar o vencedor com base nas escolhas do jogador e do computador
    //TODO A função imprime o resultado do jogo, indicando se houve empate ou quem venceu
}

/*
* criei as funções GetUserChoice, GetComputerChoice, ShowChoice e ChosseWinner
*/

//* GetUserChoice: função para obter a escolha do jogador

char GetUserChoice()
{

    char player;
    cout << "jogo de Pedra-Papel-Tesoura" << endl;

    do
    {
        cout << "Escolha entre 1 das opcoes: " << endl;
        cout << "****************************" << endl;
        cout << "digite 'p' para escolher pedra" << endl;
        cout << "digite 'a' para escolher papel " << endl;
        cout << "digite 't' para escolher tesoura" << endl;
        cout << "digite 's' para sair do jogo" << endl;
        cout << "****************************" << endl;
        cin >> player;
        cout << "****************************" << endl;

    } while (player != 'p' && player != 'a' && player != 't' && player != 's'); //TODO Enquanto o jogador não escolher uma opção válida, continua pedindo a entrada
    if (player == 's') //TODO Se o jogador escolher 's', o jogo termina
    {
        cout << "Saindo do jogo..." << endl;
        exit(0); //TODO Encerra o programa
    }
    cout << "****************************" << endl;

    return player;

    //TODO A função retorna a escolha do jogador, que deve ser 'p', 'a' ou 't'
    //TODO Se o jogador não digitar uma dessas opções, a função continua pedindo a entrada
}

//TODO GetComputerChoice: função para obter a escolha do computador
char GetComputerChoice()
{

    srand(time(0)); //TODO Inicializa o gerador de números aleatórios com o tempo atual
    //TODO Gera um número aleatório entre 1 e 3
    int num = rand() % 3 + 1;

    switch (num) //TODO A função retorna a escolha do computador com base no número gerado
    //TODO 1 = pedra, 2 = tesoura, 3 = papel
    {
    case 1:
        return 'p';
    case 2:
        return 't';
    case 3:
        return 'a';
    }
}

//* ShowChoice: função para mostrar a escolha do jogador ou computador
//TODO A função recebe um caractere como argumento e imprime a escolha correspondente
void ShowChoice(char choice)
{
    switch (choice)
    {
    case 'p':
        cout << "Pedra" << endl;
        break;
    case 'a':
        cout << "Papel" << endl;
        break;
    case 't':
        cout << "Tesoura" << endl;
        break;
    }
}

//* ChosseWinner: função para determinar o vencedor do jogo
//TODO A função recebe as escolhas do jogador e do computador como argumentos e imprime o resultado
void ChosseWinner(char player, char computer)
{
    switch (player)
    {
    case 'p':
        if (computer == 'p')
        {
            cout << "Empate!" << endl;
        }
        else if (computer == 't')
        {
            cout << "Jogador venceu!" << endl;
        }
        else if (computer == 'a')
        {
            cout << "Computador venceu!" << endl;
        }
        break;
    case 'a':
        if (computer == 'a')
        {
            cout << "Empate!" << endl;
        }
        else if (computer == 'p')
        {
            cout << "Jogador venceu!" << endl;
        }
        else if (computer == 't')
        {
            cout << "Computador venceu!" << endl;
        }
        break;
    case 't':
        if (computer == 't')
        {
            cout << "Empate!" << endl;
        }
        else if (computer == 'a')
        {
            cout << "Jogador venceu!" << endl;
        }
        else if (computer == 'p')
        {
            cout << "Computador venceu!" << endl;
        }
        break;
    default:
        cout << "Escolha inválida!" << endl;
        break; //TODO Caso o jogador faça uma escolha inválida, imprime uma mensagem de erro
    }
}