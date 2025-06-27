/*
3) (4,0 pto) A academia MAIS SAÚDE está realizando um levantamento de dados para conhecer o
perfil dos clientes que frequentam o espaço. Para essa análise devem ser coletados os seguintes
dados como nome do cliente, sexo (F para feminino, M para masculino), peso, altura e estado civil
(C para casados(as), S para solteiros(as), D para divorciados(as) e V para viúvos(as)). Para agilizar
a coleta de dados e também as análises, a academia precisa de um programa de computador que
apresente uma interface onde cada cliente preencha o formulário com seus dados e no final
apresente os seguintes resultados: (OBS: utilize o laço FOR)

a) (1,0 pto) a quantidade de mulheres que participaram da pesquisa;
b) (1,0 pto) o peso médio entre todos os homens casados;
c) (1,0 pto) a altura média entre todas as mulheres solteiras.

! Obs: esse algoritmo é determinado, portanto, é necessário conhecer a quantidade total de pessoas.

*/

#include <iostream>
using namespace std;

int main()
{

    string nomeCliente, sexualidade, estadoCivilFinal;
    char sexo, estadoCivil;
    double peso, altura, somaPesoHomensCasados = 0, somaAlturaMulheresSolteiras = 0;
    int qtdHomensCasados = 0, qtdMulheresSolteiras = 0, quantidadePessoas = 0, mulheres = 0;

    cout << "digite a quantidade de pessoas que seram cadastrada: ";
    cin >> quantidadePessoas;
    cin.ignore();

    for (int i = 0; i < quantidadePessoas; i++)
    {
        cout << endl<< "================SISTEMA DE CADASTRO====================" << endl;
        cout << "Bem vindo ao sistema de cadastro de novos cliente! " << endl
             << "digite os seus dados no campo a baixo!!!!" << endl;

        cout << "Nome: ";
        getline(cin, nomeCliente);

        cout << "sexo (M = Masculino | F = Feminino ): ";
        cin >> sexo;

        if (sexo == 'M' || sexo == 'm')
        {
            sexualidade = "Masculino";
        }
        if (sexo == 'F' || sexo == 'f')
        {
            sexualidade = "Feminino";
            mulheres++;
        }
        cout << "Estado Civil (S = Solteiro | C = Casado | V = Viuvo(a) | D = Divorciado(a) ): ";
        cin >> estadoCivil;
        if (estadoCivil == 'S' || estadoCivil == 's')
        {
            estadoCivilFinal = "Solteiro";
        }
        if (estadoCivil == 'C' || estadoCivil == 'c')
        {
            estadoCivilFinal = "Casado";
        }
        if (estadoCivil == 'D' || estadoCivil == 'd')
        {
            estadoCivilFinal = "Divorciado";
        }
        if (estadoCivil == 'V' || estadoCivil == 'v')
        {
            estadoCivilFinal = "Viuvo";
        }
        cout << "peso: ";
        cin >> peso;
        cout << "altura: ";
        cin >> altura;
        cout << endl << "============================================" << endl;

        if ((sexo == 'M' || sexo == 'm') && (estadoCivil == 'C' || estadoCivil == 'c'))
        {
            somaPesoHomensCasados += peso;
            qtdHomensCasados++;
        }

        if ((sexo == 'F' || sexo == 'f') && (estadoCivil == 'S' || estadoCivil == 's'))
        {
            somaAlturaMulheresSolteiras += altura;
            qtdMulheresSolteiras++;
        }
    }

    if (qtdHomensCasados > 0)
    {
        cout << "Peso medio dos homens casados: " << somaPesoHomensCasados / qtdHomensCasados << endl;
    }
    else
    {
        cout << "Nenhum homem casado participou da pesquisa." << endl;
    }
    if (qtdMulheresSolteiras > 0)
    {
        cout << "Altura medio das mulheres solteiras: " << somaAlturaMulheresSolteiras / qtdMulheresSolteiras << endl;
    }
    else
    {
        cout << "Nenhuma mulher solteira participou da pesquisa." << endl;
    }
}
