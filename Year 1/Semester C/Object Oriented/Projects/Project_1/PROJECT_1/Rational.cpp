//
//  Rational.cpp
//  PROJECT_1
//
//  Created by Artem Gerasimov on 02/08/2022.
//

#include <iostream>
#include "Rational.h"
#include "Polynomial.h"

Rational::Rational(Polynomial p1, Polynomial p2)
{
    this->p1 = p1;
    this->p2 = p2;
}

Polynomial Rational::getNom() const //To implement
{
    return this->p1;
}
Polynomial Rational::getDenom() const //To implement
{
    return this->p1;
}
void Rational::print() // To implement
{
    this->p1.print();
    cout << "---------------" << endl;
    this->p2.print();
}
