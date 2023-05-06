/*Task 2:
Modify the task 4 in such a way that both the operator functions should be declared outside the
class and declared as friend with the Complex class.*/
#include<iostream>
using namespace std;

class Complex{
    int real;
    int imag;
    friend Complex operator+(Complex  const&,Complex const &);
    friend void operator++(Complex  & ,int );
    public:
    Complex(int r=0, int i=0){
        real = r;
        imag = i;
    }
  void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

};

void  operator++(Complex &c ,int x){
    c.real++;
    c.imag++;
    
}
Complex operator+(Complex const &c1,Complex const &c2)
{
    Complex  c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;

 
    return c3;

}



int main()
{
    Complex c1(4,2),c2(4,3),c3;
    c1++;
    c1.display();
    c3 = c1 + c2;
    c3.display();


    
    return 0;

}
