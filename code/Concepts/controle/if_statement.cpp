#include <iostream>;

main(){

    int age;

    std::cout << "enter your age: ";
    std::cin >> age;

    if(age >= 80){
        std::cout << "you are to old to enter!";
    }
    else if(age >= 18){
        std::cout << "Welcome to this site!";

    }
    else if(age <= 0){
        std::cout << "you haven't been born yet!";
    }
    else{
        std::cout << "you are too young too enter in this site!";
    }
}