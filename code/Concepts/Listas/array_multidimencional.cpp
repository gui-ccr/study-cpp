#include <iostream>
using namespace std;

int main(){

    string carros[][3]{{"Mustang", "Ferrari", "Lamborguini",},
                       {"Corvette", "Porshe", "Audi"  }, 
                       { "Fusca", "Formula 1", "BMW"}};

    // cout << carros[0][2] << " " << endl; // com o [][] eu seleciono primeiro qual a coluna, e o segundo eu seleciono qual elemento
    // cout << carros[1][1] << " " << endl;
    // cout << carros[0][0] << " " << endl;
    // cout << carros[1][2] << " " << endl;
    // cout << carros[2][2] << " " << endl;

    int linhas = sizeof(carros)/sizeof(carros[0]); 
    int colunas = sizeof(carros[0])/sizeof(carros[0][0]);
    
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            
            cout << carros[i][j] << " ";
        }
        cout << endl;
        
    }
    
    



    return 0;
}