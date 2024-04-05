#include <iostream>
#include "ComplexNumber.hpp"
using namespace std;
using namespace cn;

int main()
{

    ComplexNumber c1(1.0,2.0);
    ComplexNumber c2(1.0,-3.0);
    ComplexNumber c3, c4,c5(2-1,4/2);

    cout <<"c1 = "<<c1<<"\nc2 = " << c2<<"\nc5 = " << c5<<endl;

    c3 = conjugate(c1);

    c4=c1+c2;

    cout<<"conj c1= "<<c3<<"\nsum c1+c2 = "<<c4<<endl;

    bool test = c1==c5;
    cout<<"test : "<<test<<endl;


    return 0;
}
