/*Modify the first program by defining another class named Operations, that contains the methods
for adding and subtracting the complex numbers. In main create two objects of the complex class
and using the methods defined in the Operaions class, add and subtract those numbers, and
display the results.*/
#include<iostream>
using namespace std;
class Complex;
class Operations
{   public:
    Complex addComplex(Complex c1, Complex c2);
    Complex subComplex(Complex c1, Complex c2);
    

};

class Complex{
    int real;
    int imag;
    public:
    Complex(int r=0, int i=0){
        real = r;
        imag = i;
    }
    friend Complex Operations::addComplex(Complex c1, Complex c2);
     friend Complex Operations::subComplex(Complex c1, Complex c2);
    void  display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};



Complex Operations:: addComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
    
   
}

Complex Operations:: subComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real - c2.real;
    c3.imag = c1.imag - c2.imag;
    return c3;
    
   
}


int main()
{
    Complex c1(6,5),c2(4,3);
    Operations op;
    
    
    op.addComplex(c1,c2).display();
    op.subComplex(c1,c2).display();
    return 0;

}
