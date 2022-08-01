//
//  Polynomial.cpp
//  PROJECT_1
//
//  Created by Artem Gerasimov on 01/08/2022.
//

#include <iostream>
#include "Polynomial.h"

unsigned int Polynomial::maxDegree = 0;
unsigned int Polynomial::getMaxDegree() {return maxDegree;}
Polynomial::Polynomial(int degree)
{
    this->degree = degree;
    arr = new double[degree];
    assert (arr);
    this->arr[degree] = {0};
}
Polynomial::Polynomial(double *arr, int degree)
{
    this->degree = degree;
    arr = new double[degree];
    assert(arr);
}

void Polynomial::setCoeff(int degree, double value)
{
    if (degree <= this->degree)
        arr[degree] = value;
    else cout << "Degree is not in range" << endl;
}


double Polynomial::getCoeff(int index) const // to be implemented
{
    return 1.0;
}

double Polynomial::getDegree(bool flag) const // to be implemented
{
    return degree;
}

void Polynomial::print() const // to be implemented
{
    if (degree == 0) cout << "0" << endl;
    else
    {
        for (int i = 0; i < degree; i++)
        {
            cout << arr[i];
            if (i != 0) cout << "X^" << i;
            cout << (i == degree - 1 ? "" : "+");
        }
        cout << endl;
    }
}
