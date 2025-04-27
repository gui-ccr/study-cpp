#include <iostream>
using namespace std;

main()
{

    int rows;
    int columns;
    char symbol;

    cout << "how many rows: ";
    cin >> rows;

    cout << "how many columns: ";
    cin >> columns;

    cout << "how many symbols: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <+ columns; j++)
        {
            cout << symbol;
        }
        cout << '\n';
    }
}