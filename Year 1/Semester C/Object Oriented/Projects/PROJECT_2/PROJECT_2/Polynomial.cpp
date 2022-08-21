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
    this->arr = new double[this->degree + 1];
    assert(this->arr != 0);
    for (int i = 0; i <= this->degree; i++)
        this->arr[i] = 0;
}
Polynomial::Polynomial(double *arr, int degree)
{
    this->degree = degree;
    this->arr = new double[this->degree + 1];
    assert(this->arr != 0);
    for (int i = 0; i <= degree; i++)
        this->arr[i] = arr[i];
    this->trueDegree = setDegree(this->arr, this->degree);
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
    if (index >= 0 && index <= this->degree) return this->arr[index];
    else return 0;
}

double Polynomial::getDegree(bool flag) const
{
    if (!flag) return this->degree;
    else return this->trueDegree;
}
Polynomial operator*(double val, const Polynomial& p)
{
    Polynomial temp(p.degree);
    for (int i = 0; i <= p.degree; i++)
        temp.arr[i] = p.arr[i] * val;
    temp.trueDegree = temp.setDegree(temp.arr, temp.degree);
    return temp;
}
Polynomial Polynomial::operator*(const Polynomial & p) const
{
    Polynomial temp(this->degree + p.degree);
    for (int i = 0; i <= this->degree; i++)
    {
        if (this->arr[i] == 0) continue;
        for (int j = 0; j <= p.trueDegree; j++)
            temp.arr[i + j] += p.arr[j] * this->arr[i];
    }
    temp.trueDegree = temp.setDegree(temp.arr, temp.degree);
    return temp;
}
Polynomial Polynomial::operator+(const Polynomial & p) const
{
    int maxDeg = this->trueDegree <= p.trueDegree ? p.trueDegree : this->trueDegree;
    int minDegree = this->trueDegree <= p.trueDegree ? this->trueDegree : p.trueDegree;
    int i;
    Polynomial temp(maxDeg);
    for (i = 0; i <= minDegree; i++)
        temp.arr[i] = this->arr[i] + p.arr[i];
    if (i <= this->degree)
        for (; i <= this->degree;i++)
            temp.arr[i] = this->arr[i];
    else if (i <= p.degree)
        for (; i <= p.degree;i++)
            temp.arr[i] = p.arr[i];
    temp.trueDegree = temp.setDegree(temp.arr, temp.degree);
    return temp;
}
Polynomial Polynomial::operator-(const Polynomial & p) const
{
    int maxDeg = this->degree <= p.trueDegree ? p.trueDegree : this->trueDegree;
    int minDegree = this->degree <= p.trueDegree ? this->trueDegree : p.trueDegree;
    int i;
    Polynomial temp(maxDeg);
    for (i = 0; i <= minDegree; i++)
        temp.arr[i] = this->arr[i] - p.arr[i];
    if (i <= this->trueDegree)
        for (; i <= this->trueDegree;i++)
            temp.arr[i] = this->arr[i];
    else if (i <= p.trueDegree)
        for (; i <= p.trueDegree;i++)
            temp.arr[i] = (-1 * p.arr[i]);
    temp.trueDegree = temp.setDegree(temp.arr, temp.degree);
    return temp;
}
Polynomial& Polynomial::operator=(const Polynomial & p)
{
    if (&p != this)
    {
        if ( this->degree != p.degree )
        {
            delete [] this->arr;
            this->degree = p.degree;
            this->trueDegree = p.trueDegree;
            this->arr = new double [this->degree + 1];
            assert(this->arr != 0);
        }
        for (int i = 0; i <= this->degree;i++)
            this->arr[i] = p.arr[i];
        this->trueDegree = this->setDegree(this->arr, this->degree);
    }
    return *this;
}
ostream &operator<<(ostream &output, const Polynomial &p)
{
    output << "Polynomial = ";
    int size = p.getDegree(true);
    for (int i = 0; i <= size; i++)
    {
        if (i == 0) output << p.arr[i];
        else output << "(" << p.arr[i] << ")*X^" << i;
        output << (i == size ? "" : "+");
    }
    output << endl;
    return output;
}

void Polynomial::print() const
{
    cout << "Polynomial = ";
    for (int i = 0; i <= this->trueDegree; i++)
    {
        cout << this->arr[i];
        if (i != 0) cout << "X^" << i;
        cout << (i == this->trueDegree ? "" : "+");
    }
    cout << endl;
}
int Polynomial::setDegree(double *arr, int degree)
{
    int trueDegree = 0;
    for (int i = degree; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            if (maxDegree < i) maxDegree = i;
            return i;
        }
    }
    return trueDegree;
}
