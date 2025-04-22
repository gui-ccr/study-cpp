#include <iostream>
#include <cmath>
namespace resultado {
    double calcular(double a, double b) {
       return std::pow(a, 2) + std::pow(b,2);
    } 
}
main(){

    double a;
    double b;
    double c;

    std::cout << "digite o valor de a: ";
    std::cin >> a;
    std::cout << "digite o valor de b: ";
    std::cin >> b;

    c = std::sqrt(resultado::calcular(a, b)); 

    std::cout << "o valor da hipotenusa e: " << c << " cm";


}