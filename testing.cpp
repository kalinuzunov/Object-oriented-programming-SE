#include <iostream>
#include "Polynomial.h"

int main() {
    Polynomial p1(3);
    p1.setCoeffOnIndex(0, 2); 
    p1.setCoeffOnIndex(1, 3); 
    p1.setCoeffOnIndex(2, 0);
    p1.setCoeffOnIndex(3, 5);

    std::cout << "Polynomial P1: ";
    p1.print();

    std::cout << p1.calculateResult(2) << std::endl;


    Polynomial constPoly = Polynomial::createConstant(10.5);
    std::cout << "Constant Polynomial: ";
    constPoly.print();

    return 0;
}