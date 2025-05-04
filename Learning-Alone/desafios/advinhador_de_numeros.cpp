#include <iostream>
#include <ctime>
using namespace std;

main()
{

    int num;
    int chute;
    int tentativas = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;   

    cout << "************** JOGO DE ADVINHAR O NUMERO***************" << endl;

    do
    {
        cout << "digite um numero entre (1-100): ";
        cin >> chute;
        tentativas++;

        if (chute < num)
        {
            cout << "voce chutou muito baixo!" << endl;
        }
        else if (chute > num)
        {
            cout << "voce chutou muito alto!" << endl;
        }
        else
        {
            cout << "ACERTOU PARABENS!!!" << "# tentativas: " << tentativas << endl;
        }
    } while (chute != num);

    cout << "**************************************************" << endl;
}