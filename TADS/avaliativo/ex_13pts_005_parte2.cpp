// ? Uma clínica médica precisa de um programa de computador que calcule o Índice de
// ? Massa Corporal de um grupo de pessoas (indeterminado). Para cada pessoa é necessário
// ? conhecer seu nome completo, seu peso e sua altura. Este programa deverá conter dois módulos,
// ? sendo:
// // Um primeiro módulo chamado ObterIMC(<parâmetros>) que deverá exclusivamente
// // calcular o IMC da pessoa, através da fórmula IMC = Peso/Altura2
// // • Um segundo módulo chamado SituacaoIMC(<parâmetros>) que deverá exclusivamente
// // exibir a situação em que a pessoa se enquadra

// ! Observação: (a) não utilizar variáveis globais; (b) utilizar o laço FOR na parte determinada.
#include <iostream>
#include <string>
using namespace std;

// Função para calcular o IMC
int ObterIMC(double peso, double altura)
{
    return peso / (altura * altura);
}

//? Função para exibir a situação do IMC
void SituacaoIMC(double imc, string nome)
{

    //* sera exibido o nome da pessoa, o IMC dela e a situação em que se encaixa
    cout << nome << " - IMC: " << imc << " - Situacao: ";
    if (imc <= 20)
        cout << "Magro";
    else if (imc <= 25)
        cout << "Normal";
    else if (imc <= 30)
        cout << "Sobrepeso";
    else
        cout << "Obesidade";
    cout << endl;
}

int main()
{
    //* variavel de controle para meu for
    int n;

    //? codigo principal para fazer a pergunta ao usuario

    //* aqui o usuario informa quantas pessoas ele vai querer calcular o IMC
    cout << "---- CALCULADORA DE IMC ----" << endl;
    cout << "Quantas pessoas deseja calcular o IMC? ";
    cin >> n;
    cin.ignore();

    //* uso do for para uma situação determinada, agora que sabemos a quantidade de pessoas a serem cadastradas
    for (int i = 0; i < n; i++)
    {
        string nome;
        double peso, altura;

        cout << "Digite o nome completo da pessoa: ";
        getline(cin, nome);

        cout << "Digite o peso (kg): ";
        cin >> peso;

        cout << "Digite a altura (m): ";
        cin >> altura;

        //* o programa vai exibir a situação da pessoa que acabou de ser especifica, nao foi especificado se deveria ser informado todos juntos em uma tabela no final, entao fiz do jeito mais simples mesmo, exibindo 1 a 1
        double imc = ObterIMC(peso, altura);
        SituacaoIMC(imc, nome);
    }

    //* o fim do programa so vai ser executado quando sair do loop for
    cout << endl
         << "Fim do programa....." << endl;
    cout << "----------------------------";
    cin.ignore();

    return 0;
}