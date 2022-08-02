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
    this->trueDegree = 0;
    this->arr = new double[degree];
    assert(arr != 0);
    for (int i = 0; i < degree; i++)
        this->arr[i] = 0;
}
Polynomial::Polynomial(double *arr, int degree)
{
    this->degree = degree;
    this->arr = new double[degree];
    assert(arr != 0);
    this->arr = arr;
    this->trueDegree = setDegree(this->arr, degree);
}

void Polynomial::setCoeff(int degree, double value)
{
    if (degree <= this->degree)
    {
        this->arr[degree] = value;
        this->trueDegree = setDegree(this->arr, this->degree);
    }
    else cout << "Degree is not in range" << endl;
}


double Polynomial::getCoeff(int index) const
{
    return this->arr[index];
}

double Polynomial::getDegree(bool flag) const
{
    if (!flag) return this->degree;
    else return this->trueDegree;
}
void Polynomial::print() const
{
    cout << "Polynomial = ";
    if (this->degree == 0) cout << "0" << endl;
    else
    {
        for (int i = 0; i <= this->trueDegree; i++)
        {
            cout << this->arr[i];
            if (i != 0) cout << "X^" << i;
            cout << (i == this->trueDegree ? "" : "+");
        }
        cout << endl;
    }
}
int Polynomial::setDegree(double *arr, int degree)
{
    int trueDegree = 0;
    for (int i = 0; i < degree; i++)
        if (arr[i] != 0) trueDegree = i;
    if (maxDegree < trueDegree) maxDegree = trueDegree;
    return trueDegree;
}
