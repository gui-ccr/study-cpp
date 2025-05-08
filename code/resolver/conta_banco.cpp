#include <iostream>
#include <iomanip>
using namespace std;

/*
DESAFIO: crie um programa que simule um aplicativo de banco com deposito e saque
*/

void MostrarSaldo(double saldo);
double deposito();
double saque(double saldo);

int main() {
    double saldo = 0;
    int escolha = 0;

    do {
        cout << " " << endl;
        cout << "********************************* BEM VINDO AO SEU BANCO*********************************" << endl;
        cout << "Digite sua escolha" << endl;
        cout << "*********************************" << endl;
        cout << "1. Mostrar Saldo" << endl;
        cout << "2. Realizar Deposito" << endl;
        cout << "3. Realizar Saque" << endl;
        cout << "4. Sair da conta" << endl;
        cin >> escolha;

        std::cin.clear(); // Limpa o buffer de entrada
        fflush(stdin); // Limpa o buffer de entrada

        switch (escolha) {
        case 1:
            MostrarSaldo(saldo);
            break;
        case 2:
            saldo += deposito();
            break;
        case 3:
            saldo -= saque(saldo);
            break;
        case 4:
            cout << "Obrigado por ter visitado!!! " << endl;
            break;
        default:
            cout << "Escolha invalida! " << endl;
        }

    } while (escolha != 4);

    return 0;
}

void MostrarSaldo(double saldo) {
    cout << "Seu saldo é R$" << std::setprecision(2) << std::fixed << saldo << endl;
}    
double deposito() {
    double valor = 0;
    cout << "Digite o valor que deseja depositar em R$: ";
    cin >> valor;

    if (valor <= 0) {
        cout << "Valor invalido!" << endl;
        return 0; // Não realiza o deposito
    } else
    {
        cout << "Deposito realizado com sucesso!" << endl;
        cout << "Valor depositado: R$" << std::setprecision(2) << std::fixed << valor << endl;
    }
    

    return valor;
}

double saque(double saldo) {
    double valor = 0;
    cout << "Digite o valor que deseja sacar em R$: ";
    cin >> valor;

    if (valor > saldo) {
        cout << "Saldo insuficiente!" << endl;
        return 0; // Não realiza o saque
    }else if (valor <= 0) {
        cout << "Valor invalido!" << endl;
        return 0; // Não realiza o saque
    } else
    cout << "Saque realizado com sucesso!" << endl;
    cout << "Valor sacado: R$" << std::setprecision(2) << std::fixed << valor << endl;
    return valor; // Retorna o valor a ser sacado
    {
}
}