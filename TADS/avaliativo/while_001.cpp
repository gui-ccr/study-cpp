/*
2) (4,0 pto) Uma empresa deseja analisar as vendas de seus produtos ao longo de N meses (onde N
é informado pelo usuário). Para cada mês, o programa deve receber o valor total de vendas (um
número decimal positivo). Seu programa deverá imprimir os seguintes resultados: (Obs: utilize o
laço WHILE)

a) (0,5 pto) O total geral de vendas;
b) (0,5 pto) A média mensal de vendas;
c) (1,0 pto) A maior venda entre todos os meses;
d) (1,0 pto) A menor venda entre todos os meses.

*/

#include <iostream>
using namespace std;

int main()
{
    int mes, i = 0;
    double valor = 0, total = 0, maiorVenda = 0, menorVenda = 0;

    cout << "Digite quantos meses gostaria de avaliar :" << endl;
    cin >> mes;

    while (i < mes)
    {
        cout << "digite o valor total de vendas do mes #" << i + 1 << ": ";
        cin >> valor;

        total += valor;

        if (i == 0)
        {
            maiorVenda = valor;
            menorVenda = valor;
        }

        if (valor > maiorVenda)
        {
            maiorVenda = valor;
        }
        if (valor < menorVenda)
        {
            menorVenda = valor;
        }

        i++;
    }
    cout << "o total e: " << total << endl;
    cout << "a media e: " << total / mes << endl;
    cout << "a maior venda foi: " << maiorVenda << endl;
    cout << "a menor venda foi: " << menorVenda << endl;
}