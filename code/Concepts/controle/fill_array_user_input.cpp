#include <iostream>
using namespace std;

main()
{

    string comidas[5];
    int size = sizeof(comidas) / sizeof(comidas[0]);
    string temp;

    for (int i = 0; i < size; i++)
    {
        cout << "Digite suas comidas favoritas ou 's' para sair: ";
        getline(cin, temp);
        if (temp == "s" || temp == "S")
        {
            break;
        }
        else
        {
            comidas[i] = temp;
        }
    }

    cout << "estas sao suas comidas favoritas: ";
    for (int i = 0; !comidas[i].empty(); i++)
    {
        cout << endl
             << comidas[i];
    }
}