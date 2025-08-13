#include <iostream>
using namespace std;

int main()
{

    int alturaCubo = 0;
    int larguraCubo = 0;

    cout << "digite ate qual largura do cubo: ";
    cin >> alturaCubo;
    cout << "digite ate qual altura do cubo: ";
    cin >> larguraCubo;

    for (int i = 0; i < alturaCubo; i++)
    {
        cout << '*';
        for (int j = 0; j < larguraCubo; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}