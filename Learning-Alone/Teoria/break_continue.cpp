#include <iostream>
using namespace std;
main()
{

    // break = para o loop
    // continue = pula a interação definida

    for (int i = 0; i < 20; i++)
    {
        if (i == 13)
        {
            continue;
        }

        cout << i << '\n';
    }
}