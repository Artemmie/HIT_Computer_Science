//
//  Rational.h
//  PROJECT_1
//
//  Created by Artem Gerasimov on 01/08/2022.
//

#ifndef Rational_h
#define Rational_h
#include "Polynomial.h"
using std::ostream;

class Rational{
    friend ostream &operator<<(ostream &, const Rational &);
public:
    //Constructor
    Rational(Polynomial = 0, Polynomial = 0);
    
    //Operatorts
    Rational operator*(const Rational &) const;
    Rational operator+(const Rational &) const;
    Rational& operator=(const Rational &);
    //GET
    Polynomial getNom() const;
    Polynomial getDenom() const;
    //Functions
    void print();
private:
    Polynomial p1;
    Polynomial p2;
    
};
#endif /* Rational_h */
