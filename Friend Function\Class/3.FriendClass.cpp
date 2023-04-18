/*Modify task 2 by using a friend class instead of declaring multiple friend functions.*/
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
    friend class Operations;
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
