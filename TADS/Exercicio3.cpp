#include <iostream>
using namespace std;


/*
5. Em um posto de combustíveis, além do abastecimento de gasolina (R$ 5,80 por litro), o cliente pode comprar produtos da loja (água R$ 3,00 a unidade, chocolate R$ 4,50 a unidade). Elabore um algoritmo EM c++ que leia a quantidade de litros abastecidos, o número de águas e chocolates comprados, calcule o total do abastecimento, o total da loja e o valor total da compra.
*/
main(){

float gasolina, agua, gastoGasolina, gastoAgua, total;
int chocolate, gastoChocolate;

cout << "";
cout << "********************* CALCULADORA DE GASTOS **********************" << endl;
cout << "digite o valor em litros que foi abastecido: ";
cin >> gasolina;


cout << "informe quantos chocolates e aguas voce comprou " << endl;
cout << "Chocolates: ";
cin >> chocolate;
cout << "Aguas: ";
cin >> agua;


gastoAgua = agua * 3;
gastoChocolate = chocolate * 4.5;
gastoGasolina = gasolina * 5.8;

total = gastoAgua + gastoChocolate + gastoGasolina;
cout << "O total gasto foi: " << " R$" << total << " reais" << endl;

cout << "*************************************************************";
cout << "";












}