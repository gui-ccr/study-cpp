#include <iostream>
#include <string>
using namespace std;

/*
    ? Uma clinica medica precisa de um programa de computador que calcule o Indice de Massa Corporal de um grupo de pessoas (indeterminado).
    ? Para cada pessoa e necessario conhecer seu nome completo, seu peso e sua altura. Este programa devera conter dois modulos, sendo:
    todo • Um primeiro modulo chamado ObterIMC(<parametros>) que devera exclusivamente calcular o IMC da pessoa, atraves da formula IMC = Peso/Altura^2;
    todo • Um segundo modulo chamado SituacaoIMC(<parametros>) que devera exclusivamente exibir a situacao em que a pessoa se enquadra, conforme tabela abaixo:
    * IMC         Situacao
    * ate 20      Magro
    * 20 ate 25   Normal
    * 25 ate 30   Sobrepeso
    * acima de 30 Obesidade
    ! Observacao: (a) nao utilizar variaveis globais; (b) utilizar o laco FOR na parte determinada.
*/
#include <iostream>
#include <string>
using namespace std;

//? Função para calcular o IMC
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

    //? Codigo principal para fazer a pergunta ao usuario

    //* aqui o usuario informa quantas pessoas ele vai querer calcular o IMC
    cout << "---- CALCULADORA DE IMC ----" << endl;
    cout << "Quantas pessoas deseja calcular o IMC? ";
    cin >> n;
    cin.ignore();

    //? uso do for para uma situação determinada, agora que sabemos a quantidade de pessoas a serem cadastradas
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