#include <iostream>
using namespace std;

// ? Portanto, desenvolva um programa de computador em C++ capaz de calcular o fatorial de um
//? número inteiro N e exibir seu resultado. Seu programa deverá conter dois módulos, sendo:
// // Um primeiro módulo chamado FATORIAL(<parâmetros>) que deverá exclusivamente
// // calcular o fatorial de um número inteiro positivo;
// // • Um segundo módulo chamado RESULTADO(<parâmetros>) que deverá exclusivamente
// // exibir o resultado do fatorial.
// * Observação: não utilizar variáveis globais

int Fatorial(int numeroFatorial)
{
    if (numeroFatorial < 0)
    {
        cout << endl
             << "O numero digitado e negativo" << endl;
    }
    else
    {


        int fatorial = numeroFatorial;
        int resultado = 0;

        for (int i = fatorial - 1; i > 0; i--)
        {
            int temp = fatorial * i;

            resultado = resultado + temp;
        }

        return resultado;
    }

}

void resultadoFatorial(int numeroFatorial, int resultadoFatorial)
{
    if (numeroFatorial < 0)
    {
        cout << endl << "informe um numero positivo!...";
        cout << "---------------------------------------------";
    }
    else{
        cout << "o fatorial de " << numeroFatorial << "! = (" << resultadoFatorial << ")" << endl;
        cout << "fim do programa....." << endl;
        cout << "---------------------------------------------" << endl;
        cout << " ";
        
    }
}

int main(int argc, char const *argv[])
{
    int numero = 0;
    cout << " " << endl;
    cout << "------- CALCULADORA DE FATORIAL ------" << endl;
    cout << "digita um numero para ver o fatorial dele: ";
    cin >> numero;
    cout << " " << endl;

    int resultado = Fatorial(numero);

    resultadoFatorial(numero, resultado);

    return 0;
}
