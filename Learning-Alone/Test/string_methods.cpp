#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "enter your name: ";
    std::getline(cin, name);
    
    name.erase(0, 3);
    cout << name;


    cout << name.find(" ");

    name.clear();
    name.append("@gmail.com");
    cout << "Hello now your username is " << name;

    cout << name.at(1);

    name.insert(0, "@");
    cout << name;

    if (name.length() > 12){
        cout << "your name can't be over 12 caracters!";

    }else if(name.empty()){
        cout << "you didn't enter your name!";

    }else{
        cout << "Welcome " << name;
    }
    


    return 0;
}
