#include <iostream>
using namespace std;

main(){

string nome[] = {"pedro", "joao", "maria", "jose", "ana"}; // array de strings

for (int i = 0; i < sizeof(nome)/sizeof(string); i++)
{
    cout << nome[i] << endl; // imprime cada elemento do array
}


}