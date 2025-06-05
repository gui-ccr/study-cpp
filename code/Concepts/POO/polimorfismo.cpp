#include <iostream>
#include <string>
#include <vector>

using namespace std;

// --- CLASSE BASE ---
class Pizza {
protected:
    string sabor;

public:
    Pizza(string s) : sabor(s) {}

    string getSabor() {
        return sabor;
    }

    // Metodo VIRTUAL. Ele pode ser sobrescrito pelas classes filhas.
    virtual void preparar() {
        cout << "Preparando a base da pizza de " << sabor << " (massa + molho + queijo)." << endl;
    }
};

// --- CLASSES DERIVADAS ---
class PizzaCalabresa : public Pizza {
public:
    PizzaCalabresa() : Pizza("Calabresa") {} // Chama o construtor da base com o sabor

    // Sobrescrevendo o metodo virtual da base.
    // 'override' e opcional, mas ajuda a garantir que voce esta sobrescrevendo corretamente.
    void preparar() override {
        cout << "Preparando a pizza de " << sabor << ": adicionando calabresa fatiada sobre a base." << endl;
    }
};

class PizzaMargherita : public Pizza {
public:
    PizzaMargherita() : Pizza("Margherita") {}

    // Sobrescrevendo o metodo virtual
    void preparar() override {
        cout << "Preparando a pizza de " << sabor << ": adicionando rodelas de tomate e folhas de manjericao sobre a base." << endl;
    }
};

// --- O GARCOM POLIMORFICO ---
// Esta funcao recebe QUALQUER tipo de pizza, desde que seja uma Pizza.
void prepararPizzaParaCliente(Pizza* pizzaPtr) {
    cout << "\nPara o cliente:" << endl;
    pizzaPtr->preparar(); // A MAGIA ACONTECE AQUI!
}

int main() {
    // 1. Criando as pizzas especificas
    PizzaCalabresa calabresa1;
    PizzaMargherita margherita1;
    Pizza pizzaGenerica("Queijo Simples"); // Uma pizza base

    // 2. Usando nossa funcao polimorfica (o "garcom")
    prepararPizzaParaCliente(&calabresa1);       // Passando o endereco de uma PizzaCalabresa
    prepararPizzaParaCliente(&margherita1);      // Passando o endereco de uma PizzaMargherita
    prepararPizzaParaCliente(&pizzaGenerica);    // Passando o endereco de uma Pizza base

    cout << "\n============================================\n";
    cout << "A festa vai comecar! Colocando todas as pizzas em um unico pedido!" << endl;

    // 3. Usando um VETOR para agrupar todas as pizzas atraves de ponteiros
    vector<Pizza*> pedidoCompleto;
    pedidoCompleto.push_back(&calabresa1);
    pedidoCompleto.push_back(&margherita1);
    pedidoCompleto.push_back(&pizzaGenerica);

    // 4. Um unico loop para preparar TODAS as pizzas do pedido, sem se importar com o tipo de cada uma
    for (Pizza* pizzaDaVezPtr : pedidoCompleto) {
        cout << "\nProxima pizza do pedido:" << endl;
        pizzaDaVezPtr->preparar(); // Polimorfismo em acao! Chama o metodo correto para cada tipo de pizza.
    }

    return 0;
}