#include <iostream>
using namespace std;
#define IMPOSTO 45.0 / 100.0
#define PERCENTAGEM_REVENDEDOR 28.0 / 100.0
main()
{
    string marcasValidas[] = {"honda", "yamaha", "suzuki", "kawasaki"};
    string marca;
    int precoFabrica = 0;
    bool marcaValida = false;

    cout << "Digite a marca da moto: ";
    cin >> marca;

    for (int i = 0; i < 4; i++)
    {
        if (marca == marcasValidas[i])
        {
            marcaValida = true;
            break;
        }
    }

    if (!marcaValida)
    {
        cout << "Marca invalida!" << endl;
        return 0;
    }

    cout << "Digite o preco de fabrica da moto: ";
    cin >> precoFabrica;

    double precoFinalMoto = precoFabrica + (precoFabrica * IMPOSTO);

    int precoFinal = precoFinalMoto + (precoFinalMoto * PERCENTAGEM_REVENDEDOR);

    cout << "A marca da moto e: " << marca << ", e preco de fabrica e: " << "R$" << precoFabrica << ", com os impostos e o percentual do revendedor, o preco final da moto e: " << "R$" << precoFinal << " reais " << endl;
}