#include <iostream>
using namespace std;

void FelizAniversario(string nomeDoAniversariante, int idadeDoAniversariante){
 
    cout << "Feliz Aniversario " << nomeDoAniversariante << " hoje voce faz " << idadeDoAniversariante << " anos"<< endl;
    cout << "Feliz Aniversario " << endl;
    cout << "Feliz Aniversario pra voce " << endl;
    cout << "Feliz Aniversario " << endl << endl;
}

main(){

    string nome  = "guilherme";
    int idade = 19;


    cout << " " << endl; // fiz isso pra que o codigo n fique colado junto ao terminal de comando assim fica mais facil de ler

    FelizAniversario(nome, idade);
    FelizAniversario(nome, idade);
    // FelizAniversario(idade, nome);

    return 0;

}
