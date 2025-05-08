#include <iostream>
using namespace std;

main()
{

    // foreach é um loop que itera sobre cada elemento de uma coleção, como um vetor ou uma lista.
    // O loop foreach é uma maneira conveniente de percorrer os elementos de uma coleção sem precisar usar um índice ou um iterador explícito.
    // Ele é especialmente útil quando você deseja aplicar uma operação a cada elemento da coleção.
    // O loop foreach é mais legível e menos propenso a erros do que um loop tradicional com índice.
    // Ele é frequentemente usado em linguagens de programação modernas, como C++, Python e JavaScript.

    string alunos[] = {"Lucas", "Ana", "Pedro", "Maria"};

    for (string aluno : alunos)
    {
        cout << aluno << endl;
    }

    cout << "------------------------" << endl;

    int notas[] = {10, 8, 9, 7, 30, 4, 5, 7, 20};

    for (int nota : notas)
    {
        cout << nota << endl;
    }

    cout << "------------------------" << endl;

    double valores[] = {25.5, 30.0, 15.75, 20.98, 10.2};

    
    for (double valor : valores)
    {
        cout << valor << endl;
    }
    cout << "------------------------" << endl;
}