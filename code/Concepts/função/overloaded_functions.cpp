#include <iostream>
using namespace std;

void CozinharPizza();
void CozinharPizza(string condimento1);
void CozinharPizza(string condimento1, string condimento2);

main(){

    CozinharPizza();
    CozinharPizza("calabresa");
    CozinharPizza("calabresa", "bacon");

    return 0;

}


void CozinharPizza(){
    cout << "aqui esta sua pizza! " << endl;
}
void CozinharPizza(string condimento1){
    cout << "aqui esta sua pizza com " << condimento1 << "!! " << endl;
}
void CozinharPizza(string condimento1, string condimento2){
    cout << "aqui esta sua pizza de " << condimento1 << " com " << condimento2 << "!! " << endl;
}
