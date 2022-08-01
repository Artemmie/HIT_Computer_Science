//
//  Polynomial.h
//  PROJECT_1
//
//  Created by Artem Gerasimov on 01/08/2022.
//

#ifndef Polynomial_h
#define Polynomial_h

using namespace std;

class Polynomial{
public:
    Polynomial(int = 0); //default
    Polynomial(double *, int); //constructor with parameters
    //~Polynomial(); //deconstructor - To be implemented
    
    // GET
    static unsigned int getMaxDegree();
    double getDegree(bool) const;
    double getCoeff(int) const;
    
    
    //SET
    void setCoeff(int, double);
    
    //functions
    void print() const;
private:
    double *arr;
    int degree;
    static unsigned int maxDegree;
};

#endif /* Polynomial_h */
