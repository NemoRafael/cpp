#include <iostream>
#include <cmath>

int main()
{
    double radio;
    std::cout<< "Ingrese el radio de la circunferencia:";
    std::cin >> radio; 

    if (radio < 0)
    {
        std:: cout<< "Ingrese un radio positivo";
        return 1;
    }
     
    std::cout<<"El radio es:"<< M_PI *pow(radio,2);
    return 0;

}