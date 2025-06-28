#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    string perguntas[3]{"Quanto e 20 + 10?: ", "Quem e foi presidente dos EUA em 2025?: ", "Quem foi o presidente do Brasil em 2025?: "};
    string respostasCorretas[3]{"30", "trump", "lula"}; // Respostas já no formato padrão (minúsculas)

    int opcao;
    string respostaUsuario;
    cout << "------Quiz Game------" << endl;
    cout << "Selecione uma das opcoes abaixo!" << endl;
    cout << "1. Comecar o quiz" << endl;
    cout << "2. Sair do quiz" << endl;
    cout << "---------------------" << endl;
    cin >> opcao;

    switch (opcao)
    {
    case 1:
    for (int i = 0; i < 3; i++)
    {
        cout << perguntas[i];
        cin >> respostaUsuario;
        transform(respostaUsuario.begin(), respostaUsuario.end(), respostaUsuario.begin(), ::tolower);
        while (respostaUsuario != respostasCorretas[i])
        {
            cout << "Resposta errada tente novamente" << endl;
            cout << perguntas[i];
            cin >> respostaUsuario;
            transform(respostaUsuario.begin(), respostaUsuario.end(), respostaUsuario.begin(), ::tolower);
        }
        
    }
        cout << "Voce completou o quiz com sucesso!" << endl;

        break;

    case 2:
        cout << "Saindo do programa.....";

        break;
    }

    return 0;
}
