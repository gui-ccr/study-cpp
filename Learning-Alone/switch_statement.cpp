#include <iostream>

main(){

    int month;

    std::cout << "enter the month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "it's January";
        break;
    case 2:
        std::cout << "it's February";
        break;
    case 3:
        std::cout << "it's March";
        break;
    case 4:
        std::cout << "it's April";
        break;
    case 5:
        std::cout << "it's May";
        break;
    case 6:
        std::cout << "it's June";
        break;
    case 7:
        std::cout << "it's July";
        break;
    case 8:
        std::cout << "it's August";
        break;
    case 9:
        std::cout << "it's September";
        break;
    case 10:
        std::cout << "it's October";
        break;
    case 11:
        std::cout << "it's November";
        break;
    case 12:
        std::cout << "it's December";
        break;
    default:
        std::cout << "please enter in only number between (1-12)";
        break;
}
}