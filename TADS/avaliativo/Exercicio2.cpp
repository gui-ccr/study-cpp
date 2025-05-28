/*
Sr. Antônio é um representante comercial e precisa realizar uma viagem para atender um dos seus clientes em uma cidade vizinha. Como sempre gosta de planejar suas viagens, deseja saber quanto irá gastar (R$) em combustível para realizar essa viagem. Para agilizar esse cálculo, ele precisa de um programa de computador que calcule rapidamente o valor a ser gasto. A distância total a ser percorrida é medida em KM, o consumo do combustível é medido em LITROS e o valor do litro do combustível em R$. Portanto, elabore esse programa para auxiliar o Sr. Antônio nesta e nas futuras viagens. 

(Obs: identifique as entradas de dados, realize o processamento e proponha as saídas de dados).

*/

#include <iostream>
using namespace std;

main(){


    float distancia_total_KM, combustivel, gasto_total; // distancia total em KM 
    int consumo_litro; // consumo de combustivel, 
    int valor_combustivel; //valor do litro do combustivel 



    cout <<" ************************CALCULADOR DE GASTOS DE COMBUSTIVEL************************ " << endl;
    cout << "informe a distancia ate o seu destino em Km: ";
    cin >> distancia_total_KM;

    cout << "informe o consumo de combustivel em Litros: ";
    cin >> consumo_litro;

    cout << "informe o valor do combustivel em reais: ";
    cin >> valor_combustivel;

    combustivel =  distancia_total_KM / consumo_litro ;

    cout <<"o consumo total de combusivel sera de: " << combustivel << "km/l" << endl; 

    gasto_total = combustivel * valor_combustivel;

    cout << "o valor total a ser gasto sera de: " << "R$" << gasto_total << endl; 
    cout <<" **************************************************************************** " << endl;

}