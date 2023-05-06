/*Task 1:
Modify the task 1 code (which we did last week) by overloading the unary operator ++, that will
increment the real part of
the complex number by one. Similarly overload the binary operator + that will perform the addition
of two complex numbers when the user writes the following statement:
Compelx c3=c1+c2
Note: In this case the operator function should be declared inside the class.*/


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
  
 void operator++(int x)
 {
   real++;
    imag++;
  }
   Complex operator+( Complex const &c)
{
    Complex c3;
    c3.real = real + c.real;
    c3.imag = imag + c.imag;
    return c3;
}
    void  display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};



int main()
{
    Complex c1(4,2),c2(4,3),c3;
    c1++;
   
   c1.display();
   
    c3 = c1 + c2;
    c3.display();

    return 0;

}
