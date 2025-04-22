#include <iostream>
#include <vector>
// typedef std::vector<std::pair<std::string, int>> pairlist_t; 

// typedef std::string text_t;
// typedef int numero_t;

using text_t = std::string;
using numero_t = int; 
main(){
// typedef = palavra-chave reservada para criar um nome adicional (alias)
// (alias) para outro nome de um dado | novo identificador para um tipo ja existente
// porem usar o "using" funciona melhor com templates, então é melhor usar ele do que typedef

// pairlist_t pairlist; 


text_t nome = "Guilherme ";
numero_t idade = 18;

std::cout << nome << idade << '\n';
return 0;
}