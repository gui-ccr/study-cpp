#include <iostream>

int main()
{
    char unit;
    double temp;

    std::cout << "********** Conversor de temperaturas ************" << '\n';
    std::cout << "C = Celcius" << '\n';
    std::cout << "F = Farenheit" << '\n';
    std::cout << "Para qual medida de temperatura gostaria de converter: ";
    std::cin >> unit;
    if (unit == 'C' || unit == 'c'){

        std::cout << "digite a temperatura em farenheit: ";
        std::cin >> temp;

        temp = (temp  - 32 ) / 1.8;
        
        std::cout << "a sua temperatura em graus celsius e: " << temp << "C"<< '\n';

    }else if(unit == 'F' || unit == 'f'){
        std::cout << "digite a temperatura em celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        
        std::cout << "a sua temperatura em graus farenheit e: " << temp << "F" << '\n';

    }else{
        std::cout << "selecione uma das temperaturas informadas!" << '\n';
    }
    
    std::cout << "*************************************************";

    return 0;
}
