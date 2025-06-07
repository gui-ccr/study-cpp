/*
 * Tópico: Polimorfismo
 * O que eu aprendi aqui:
 * Eu aprendi o que e Polimorfismo: a capacidade de tratar objetos de diferentes classes filhas
 * atraves de uma unica interface, que e um ponteiro (ou referencia) da classe mae.
 * A chave para isso e a palavra-chave 'virtual' no metodo da classe mae. Isso permite que
 * a versao correta do metodo (a da classe filha) seja chamada em tempo de execucao.
 * O 'override' na classe filha e uma seguranca para garantir que estou sobrescrevendo corretamente.
 */
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

    // --- Metodo VIRTUAL ---
    // 'virtual' e a palavra magica que permite o polimorfismo para este metodo.
    // Significa: "classes filhas podem fornecer suas proprias versoes deste metodo".
    virtual void preparar() {
        cout << "Preparando a base da pizza de " << sabor << " (massa + molho + queijo)." << endl;
    }
};

// --- CLASSES DERIVADAS ---
class PizzaCalabresa : public Pizza {
public:
    PizzaCalabresa() : Pizza("Calabresa") {}

    // --- Sobrescrita (Override) ---
    // Eu estou fornecendo uma implementacao especifica de 'preparar' para esta classe.
    // 'override' e uma palavra de seguranca que confirma ao compilador minha intencao.
    void preparar() override {
        cout << "Preparando a pizza de " << sabor << ": adicionando calabresa fatiada sobre a base." << endl;
    }
};

class PizzaMargherita : public Pizza {
public:
    PizzaMargherita() : Pizza("Margherita") {}
    
    // Outra sobrescrita, especifica para Margherita.
    void preparar() override {
        cout << "Preparando a pizza de " << sabor << ": adicionando rodelas de tomate e folhas de manjericao sobre a base." << endl;
    }
};

// Esta funcao demonstra o polimorfismo com um unico objeto.
// Ela aceita um PONTEIRO para QUALQUER coisa que "e uma" Pizza.
void prepararPizzaParaCliente(Pizza* pizzaPtr) {
    cout << "\nPara o cliente:" << endl;
    // A seta '->' e usada para acessar metodos atraves de um ponteiro.
    pizzaPtr->preparar(); // O metodo correto (da Calabresa ou Margherita) e chamado aqui.
}

int main() {
    // 1. Meus objetos concretos.
    PizzaCalabresa calabresa1;
    PizzaMargherita margherita1;
    Pizza pizzaGenerica("Queijo Simples");

    // 2. Testando o polimorfismo um a um.
    // O '&' pega o endereco de memoria do objeto para o ponteiro guardar.
    prepararPizzaParaCliente(&calabresa1);
    prepararPizzaParaCliente(&margherita1);
    prepararPizzaParaCliente(&pizzaGenerica);

    cout << "\n============================================\n";
    cout << "A festa vai comecar! Colocando todas as pizzas em um unico pedido!" << endl;

    // 3. Usando um vetor de PONTEIROS da classe base para agrupar tudo.
    vector<Pizza*> pedidoCompleto;
    pedidoCompleto.push_back(&calabresa1);
    pedidoCompleto.push_back(&margherita1);
    pedidoCompleto.push_back(&pizzaGenerica);

    // 4. Um unico loop generico que funciona para TODOS os tipos de pizza.
    // 'pizzaDaVezPtr' e um ponteiro para Pizza que, a cada iteracao, aponta para um item do vetor.
    for (Pizza* pizzaDaVezPtr : pedidoCompleto) {
        cout << "\nProxima pizza do pedido:" << endl;
        // Esta e a chamada polimorfica. O C++ descobre qual e o tipo real da pizza
        // e chama a versao correta (sobrescrita) do metodo 'preparar()'.
        pizzaDaVezPtr->preparar();
    }

    return 0;
}