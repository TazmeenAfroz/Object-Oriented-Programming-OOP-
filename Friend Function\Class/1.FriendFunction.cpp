/*Task 1
Scenario: You are working on a project that involves complex numbers in C++. You have created
a class called "Complex" that represents a complex number. You want to implement a friend
function that adds two complex numbers together and returns the result.
Define a "Complex" class with the following private data members:
int real: the real part of the complex number
int imag: the imaginary part of the complex number
Define a friend function called "addComplex" that takes two "Complex" objects as arguments
and returns a new "Complex" object representing the sum of the two complex numbers. The
friend function should have the following signature:
Complex addComplex(Complex c1, Complex c2)
In the "Complex" class, define a public member function called "display" that displays the
complex number in the format a + bi, where a is the real part and b is the imaginary part.
In the main function, create two "Complex" objects and add them together using the
"addComplex" function. Display the result using the "display" function.*/
#include<iostream>
using namespace std;

class Complex{
    int real;
    int imag;
    public:
    Complex(int r=0, int i=0){
        real = r;
        imag = i;
    }
    friend Complex addComplex(Complex c1, Complex c2);
    void  display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

Complex addComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

int main()
{
    Complex c1(4,2),c2(4,3),c3;
    c3 = addComplex(c1,c2);
    c3.display();
    return 0;

}
