#include <iostream>
using namespace std;
main(){

    string name;
    int num;

    do{
        cout << "enter a positive number: ";
        cin >> num;
    }while(num < 0);

    
    // while(1 == 1){
    //     cout << "Help i'am in infinite Loop ";
    // }
    // while(name.empty()){
    //     cout << "enter your name: ";
    //     std::getline(cin, name);
    //     cout << "Hello " << name;
    // }
}