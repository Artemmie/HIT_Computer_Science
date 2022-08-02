//
//  Rational.h
//  PROJECT_1
//
//  Created by Artem Gerasimov on 01/08/2022.
//

#ifndef Rational_h
#define Rational_h
#include "Polynomial.h"

class Rational{
public:
    Rational(Polynomial = 0, Polynomial = 0);
    
    void print();
private:
    Polynomial p1;
    Polynomial p2;
    
};
#endif /* Rational_h */
