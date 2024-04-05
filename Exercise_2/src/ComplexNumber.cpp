#include "ComplexNumber.hpp"
#include <iostream>
#include <limits>

using namespace std;

namespace cn{



    ComplexNumber::ComplexNumber (const double& a, const double& b){
        re=a;
        im=b;
    }

    ComplexNumber conjugate(ComplexNumber& c)
    {
        ComplexNumber cc;
        cc.re = c.re;
        cc.im  = (-1)*c.im;
        return cc;
    }

    ostream& operator<<(ostream& os, const ComplexNumber& c)
    {
        if(c.im>=0)
            os << c.re<<"+"<<c.im<<"i";
        else
            os << c.re  << c.im<<"i";
        return os;

    }

ComplexNumber operator + (const ComplexNumber& c1, const ComplexNumber& c2)
{
    double re = c1.re + c2.re;
    double im = c1.im + c2.im;
    ComplexNumber c(re,im);
    return c;
}

bool operator == (const ComplexNumber& c1, const ComplexNumber& c2)
{
    double diff_re = abs(c1.re-c2.re);
    double diff_im = abs(c1.im-c2.im);
    bool return_b;
    if (diff_re <= numeric_limits<double>::epsilon() && diff_im < numeric_limits<double>::epsilon() )
    {
       return_b=true;
    }
    else { return_b=false;}

    return return_b;
}

}

