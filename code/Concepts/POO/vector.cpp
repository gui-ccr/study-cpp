/*
 * Tópico: Vetor (std::vector)
 * O que eu aprendi aqui:
 * Eu aprendi a usar o 'std::vector', que e como uma lista ou array que cresce e diminui
 * de tamanho automaticamente. E muito mais flexivel que um array normal de tamanho fixo.
 * Para usa-lo, eu preciso incluir a biblioteca <vector>.
 */
#include <iostream>
#include <vector>  // Eu preciso incluir esta biblioteca para poder usar vetores.
#include <string>
using namespace std;

// Uma classe simples para o meu exemplo.
class Pizza {
public:
    string sabor;
    // Eu usei a lista de inicializadores aqui, que e' uma forma mais eficiente de escrever o construtor.
    Pizza(string s) : sabor(s) {} 
};

int main() {
    // 1. Declaracao do Vetor: Eu crio um vetor vazio chamado 'mesaDePizzas' que vai guardar objetos 'Pizza'.
    vector<Pizza> mesaDePizzas;
    
    // O metodo .size() me diz quantos itens existem no vetor atualmente.
    cout << "A mesa comecou com " << mesaDePizzas.size() << " pizzas." << endl;

    // 2. Criando alguns objetos que vou colocar no vetor.
    Pizza pizza_calabresa("Calabresa");
    Pizza pizza_margherita("Margherita");

    // 3. Adicionando itens ao Vetor
    cout << "\nChegou a pizza de Calabresa!" << endl;
    // O metodo .push_back() adiciona um item ao FINAL do vetor. O vetor cresce automaticamente.
    mesaDePizzas.push_back(pizza_calabresa);
    cout << "Agora a mesa tem " << mesaDePizzas.size() << " pizza." << endl;

    cout << "\nChegou a pizza de Margherita!" << endl;
    mesaDePizzas.push_back(pizza_margherita);
    cout << "Agora a mesa tem " << mesaDePizzas.size() << " pizzas." << endl;

    // 4. Acessando os itens do Vetor
    cout << "\nPizzas na mesa:" << endl;
    // Este e um "range-based for loop". E uma forma facil de passar por cada item da colecao.
    // 'p' sera uma copia de cada Pizza dentro de 'mesaDePizzas', uma por vez.
    for (Pizza p : mesaDePizzas) {
        cout << "- Pizza de " << p.sabor << endl;
    }

    return 0;
}