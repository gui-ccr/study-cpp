#include <iostream>

main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << " ************ CALCULATOR ************ " << '\n';

    std::cout << "enter a operator between (= - * /): ";
    std::cin >> op;
    std::cout << "enter number1: ";    
    std::cin >> num1;
    std::cout << "enter number2: ";
    std::cin >> num2;



    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "result: " << result << '\n';
        break;

    case '-':
        result = num1 - num2;
        std::cout  << "result: " << result << '\n';
        break;

    case '*':
        result = num1 * num2;
        std::cout << "result: " << result << '\n';
        break;

    case '/':
        result = num1 / num2;
        std::cout << "result: " << result<< '\n';
        break;

    default:
        std::cout << "result: " << result << '\n';
        break;
    }

    std::cout << " ************************************ ";
    return 0;
}