#include <iostream>
#include<cmath>


float a_cuadrado(float lado1)
{
    return pow(lado1,2);
 
}

float a_rectangulo(float lado1, float lado2)
{
    return  lado1*lado2;
}

float a_rombo(float lado1, float lado2)
{
    return (lado1*lado2)/2;
}

int main()
{
    int option;
    float lado1, lado2;
    
std::cout<<"Elija el número de la figura que quiere calcular: \n 1. Cuadrado\n 2.Rectandulo \n 3.Rombo\n\n";
std::cin>>option;

switch (option)
{
    case 1:
    std::cout << "Ingrese el lado del cuadrado en cm: ";
    std::cin>>lado1;
    std::cout <<"El área del cuadrado es: "<< a_cuadrado(lado1) <<std::endl;
    break;

    case 2:
    std::cout << "Ingrese la base del rectángulo en cm: ";
    std::cin>>lado1;
    std::cout << "Ingrese la altura del rectángulo en cm: ";
    std::cin>>lado2;
    std::cout <<"El área del rectangulo es: "<< a_rectangulo(lado1, lado2) <<std::endl;
    break;

    case 3:
    std::cout << "Ingrese la diagonal mayor del rombo  en cm: ";
    std::cin>>lado1;
    std::cout << "Ingrese la diagonal menor del rombo  en cm: ";
    std::cin>>lado2;
    std::cout <<"El área de cuadrado es: "<< a_rombo(lado1, lado2) <<std::endl;
    break;

    default:
    std::cout << "Opción no válida, por favor seleccione 1, 2 o 3\n";
    break;

}

return 0;

}