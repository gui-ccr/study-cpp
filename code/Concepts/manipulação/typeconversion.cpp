#include <iostream>

main()
{

    // conversão de tipos = mudar o tipo x para o tipo y
    //                  implicito = automatico
    //                  explicito = valor precedente com um tipo novo de dado

    // double x = (int) 3.15;

    // char x = 100;

    // std::cout << (char) 100;

    // um exemplo de quando usar a conversão

    // algoritmo que ve a porcentagem de acerto de questões

    int acertos = 8;
    int questionario = 10;
    double resultado = acertos / (double)questionario * 100;

    // aqui tive que usar a conversão porque se não seria uma divisão de inteiros
    // sendo que ele o resultado da divisão seria 0.8 * 100 e ele n iria exibir 0.8
    // e sim 0 x 0

    std::cout << resultado << "%" << '\n';

    return 0;
}