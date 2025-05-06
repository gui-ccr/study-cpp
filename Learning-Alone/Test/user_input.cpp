#include <iostream>

main(){

    std::string nome;
    int idade;

    // std::cout << "digite seu nome: ";
    // std::cin >> nome;

    // porem quando se tenta colocar qualquer coisa com espaço 
    //ele não executa a proxima linha de codigo 
    // pra isso temos que usar uma função e vai ficar assim

    // std::cout << "Digite seu nome completo: ";
    // std::getline(std::cin, nome);

    // porem se tiver qualquer input antes do getline() ele iria interpretar como 
    // sendo um linha vazia e ira imprimir qualquer coisa
    // pra previnir isso temos que adicionar o >> std::ws (white space) dps do cin


    std::cout << "digite sua idade: ";
    std::cin >> idade;

    
    std::cout << "Digite seu nome completo: ";
    std::getline(std::cin >> std::ws, nome);

    std::cout << "seu nome e " << nome << '\n';
    std::cout << "e sua idade e " << idade;

    return 0;

}