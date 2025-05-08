#include <iostream>
using namespace std;

double GetTotal(double prices[], int size);
// A função GetTotal recebe um array de preços e seu tamanho como argumentos.

main(){

    double prices[] = {10.5, 20.0, 15.75, 30.99, 25.0};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = GetTotal(prices, size);

    cout << "Total: " << total << endl;
    cout << "------------------------" << endl;

    return 0;

}

double GetTotal(double prices[], int size){
    // A função GetTotal recebe um array de preços e seu tamanho como argumentos.

    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
    // A função retorna o total dos preços somados.

}