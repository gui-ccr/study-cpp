#include <iostream>
#include <vector>  // Precisa incluir para usar vetores
#include <string>
using namespace std;

// Vamos imaginar que temos uma classe Pizza bem simples por enquanto
class Pizza {
public:
    string sabor;
    Pizza(string s) : sabor(s) {} // Construtor
};

int main() {
    // 1. Criando a mesa de pizzas (um vetor vazio para guardar objetos Pizza)
    vector<Pizza> mesaDePizzas;
    cout << "A mesa comecou com " << mesaDePizzas.size() << " pizzas." << endl;

    // 2. Criando algumas pizzas
    Pizza pizza_calabresa("Calabresa");
    Pizza pizza_margherita("Margherita");

    // 3. Adicionando as pizzas na mesa (no final da lista)
    cout << "\nChegou a pizza de Calabresa!" << endl;
    mesaDePizzas.push_back(pizza_calabresa);
    cout << "Agora a mesa tem " << mesaDePizzas.size() << " pizza." << endl;

    cout << "\nChegou a pizza de Margherita!" << endl;
    mesaDePizzas.push_back(pizza_margherita);
    cout << "Agora a mesa tem " << mesaDePizzas.size() << " pizzas." << endl;

    // 4. Olhando as pizzas que estao na mesa
    cout << "\nPizzas na mesa:" << endl;
    // Um loop para passar por cada pizza na 'mesaDePizzas'
    for (Pizza p : mesaDePizzas) {
        cout << "- Pizza de " << p.sabor << endl;
    }

    return 0;
}