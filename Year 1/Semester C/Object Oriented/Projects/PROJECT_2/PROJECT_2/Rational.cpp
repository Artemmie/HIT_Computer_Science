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
    if (this->p2.getDegree(false) == 0)
        this->p2.setCoeff(0,1);
}

Polynomial Rational::getNom() const
{
    return this->p1;
}
Polynomial Rational::getDenom() const
{
    return this->p2;
}
void Rational::print() 
{
    this->p1.print();
    cout << "---------------" << endl;
    this->p2.print();
}

Rational Rational::operator*(const Rational & r) const
{
    Rational temp;
    temp.p1 = this->p1 * r.p1;
    temp.p2 = this->p2 * r.p2;
    return temp;
}
Rational Rational::operator+(const Rational & r) const
{
    Rational temp;
    temp.p1 = this->p1 * r.p2;
    temp.p2 = this->p2 * r.p1;
    return  temp;
}
Rational& Rational::operator=(const Rational & r)
{
    if (&r != this)
    {
        this->p1 = r.p1;
        this->p2 = r.p2;
    }
    return *this;
}
ostream &operator<<(ostream &output, const Rational &r)
{
    output << "numerator=" << r.p1;
    output << "---------------" << endl;
    output << "denominator=" << r.p2;
    return output;
}
