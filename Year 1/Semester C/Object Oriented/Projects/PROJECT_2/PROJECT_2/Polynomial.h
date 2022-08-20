//
//  Polynomial.h
//  PROJECT_1
//
//  Created by Artem Gerasimov on 01/08/2022.
//

#ifndef Polynomial_h
#define Polynomial_h
#include <cassert>

using namespace std;
using std::ostream;
using std::istream;
class Polynomial{
    friend istream &operator>>(istream &, Polynomial &);
    friend ostream &operator<<(ostream &, const Polynomial &);
    friend Polynomial operator*(double, const Polynomial &);
    
public:
    //BUILDERS
    Polynomial(int = 0); //default
    Polynomial(double *, int); //constructor with parameters
    
    //OPERATORS
    Polynomial operator*(const Polynomial &) const;
    Polynomial operator+(const Polynomial &) const;
    Polynomial operator-(const Polynomial &) const;
    Polynomial &operator=(const Polynomial &);
    
    // GET
    static unsigned int getMaxDegree();
    double getDegree(bool) const;
    double getCoeff(int) const;
    
    
    //SET
    void setCoeff(int, double);
    int setDegree(double *, int);
    
    //functions
    void print() const;
private:
    double *arr;
    int degree;
    int trueDegree;
    static unsigned int maxDegree;
};

#endif /* Polynomial_h */
