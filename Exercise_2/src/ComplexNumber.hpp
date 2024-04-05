#pragma once
#include <iostream>
using namespace std;

namespace cn{

class ComplexNumber{
public:
    double re;
    double im;
    ComplexNumber()=default;
    ComplexNumber (const double& a, const double& b);

} ;

ComplexNumber conjugate(ComplexNumber& c);

ComplexNumber operator + (const ComplexNumber& c1, const ComplexNumber& c2);

ComplexNumber operator + (const ComplexNumber& c1, const ComplexNumber& c2);

bool operator == (const ComplexNumber& c1, const ComplexNumber& c2);

ostream& operator<<(ostream& os, const ComplexNumber& c);
}
