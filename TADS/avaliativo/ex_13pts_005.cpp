#include <iostream>
using namespace std;

/*
? A Análise Combinatória é a parte da Matemática que estuda métodos e     técnicas que
? permitem resolver problemas relacionados a contagem. Nesse contexto, temos  as Combinações,
? que são subconjuntos onde a ordem dos elementos não é importante, porém,    são caracterizadas
? pela natureza dos mesmos. Um tipo de cálculo muito utilizado na Combinação  Simples é o cálculo
? Fatorial, que representado pelo símbolo de exclamação !, corresponde à  multiplicação de um
? numero inteiro N pelos seus antecessores maiores ou iguais a 1, conforme    fórmula e exemplo a seguir: Se N = 4, então o fatorial de N! é:
*        o 4! = 4 x 3 x 2 x 1! = 24.
*        Sabe-se ainda que:
*        o 1! = 1.
*        o 0! = 1.
?Portanto, desenvolva um programa de computador em C++ capaz de calcular o fatorial de um numero inteiro N e exibir seu resultado. Seu programa deverá conter dois módulos, sendo:
todo • Um primeiro módulo chamado FATORIAL(<parâmetros>) que deverá exclusivamente calcular o fatorial de um numero inteiro positivo;
todo • Um segundo módulo chamado RESULTADO(<parâmetros>) que deverá exclusivamente exibir o resultado do fatorial.

! Observação: não utilizar variáveis globais
*/
#include <iostream>
using namespace std;

//? Função que calcula o fatorial de um numero inteiro positivo
int FATORIAL(int numeroFatorial)
{
    if (numeroFatorial < 0)
    {
        //* Se o numero for negativo, retorna -1 para indicar erro
        return -1;
    }
    else if (numeroFatorial == 0 || numeroFatorial == 1)
    {
        //* 0! = 1 e 1! = 1
        return 1;
    }
    else
    {
        int resultado = 1;
        for (int i = 2; i <= numeroFatorial; i++)
        {
            resultado *= i;
        }
        return resultado;
    }
}

//? Função que exibe o resultado do fatorial
void RESULTADO(int numeroFatorial, int resultadoFatorial)
{
    if (numeroFatorial < 0 || resultadoFatorial == -1)
    {
        cout << endl
             << "Informe um numero positivo!..." << endl;
        cout << "---------------------------------------------" << endl;
    }
    else
    {
        cout << "O fatorial de " << numeroFatorial << "! = (" << resultadoFatorial << ")" << endl;
        cout << "Fim do programa....." << endl;
        cout << "---------------------------------------------" << endl;
        cout << " ";
    }
}

int main(int argc, char const *argv[])
{
    int numero = 0;
    cout << " " << endl;
    cout << "------- CALCULADORA DE FATORIAL ------" << endl;
    cout << "Digite um numero para ver o fatorial dele: ";
    cin >> numero;
    cout << " " << endl;

    int resultado = FATORIAL(numero);

    RESULTADO(numero, resultado);

    return 0;
}
