#include <iostream> 
#include <ctime>
using namespace std;

main(){

    srand(time(0));
    int randNum = rand() % 5 + 1;
    
    switch (randNum)
    {
    case 1: cout << "voce ganhou 1 mouse!";
            break;
    case 2: cout << "voce ganhou 1 teclado!";
            break;
    case 3: cout << "voce ganhou 1 gift card!";
            break;
    case 4: cout << "voce ganhou 1 ingresso pra um show!";
            break;
    case 5: cout << "voce ganhou 1 jantar !";
            break;
    }



}