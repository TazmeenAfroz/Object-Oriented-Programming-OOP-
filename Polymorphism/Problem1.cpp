// You are required to design a program for a zoo where there are different types and categories of animals.Use Inheritance and polymorphism to write a maintainable code.
//Animal is an abstract class with two protected data members name and color, destructor, and a pure virtual function display().
/* Deer is derived from Animal and has an additional boolean data member hasAntlers, indicating
whether or not the deer has antlers. Deer overrides the display() function to print information
about the deer's name, color, and whether or not it has antlers.
Zebra is derived from Animal and has an additional string data member stripe_pattern,
indicating the pattern of stripes on the zebra's body. Zebra overrides the display() function to
print information about the zebra's name, color, and stripe pattern.
In main, using polymorphism create child’s class objects and call their display() methods.*/

#include<iostream>
using namespace std;

class Animal 
{
    protected:
    string name;
    string color;
    public:
    Animal(string n, string c)
    {
        name=n;
        color=c;
    }
    virtual ~Animal()
    {
        cout<<"Animal Destructor"<<endl;
    }
   
   virtual void display()=0;
};

class Deer: public Animal
{
bool hasAntlers;
public:
void display()
{
cout<<"Deer"<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Color: "<<color<<endl;
cout<<"Has Antlers: "<<hasAntlers<<endl;
}
Deer(string n, string c, bool a): Animal(n,c)
{
 hasAntlers=a;
}

~Deer()
{
cout<<"Deer Destructor"<<endl;
}

};

class Zebra: public Animal
{
    string stripe_pattern;
    public:
    void display()
    {
        cout<<"Zebra"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Stripe Pattern: "<<stripe_pattern<<endl;
    }
    Zebra(string n, string c, string s): Animal(n,c)
    {
        stripe_pattern=s;
    }
    ~Zebra()
    {
        cout<<"Zebra Destructor"<<endl;
    }
};

int main()
{
    Animal *a = new Deer("Deer1", "Brown", true);
    a->display();

    Animal *b = new Zebra("Zebra1", "Black and White", "horizontal");
    b->display();

    return 0;
    
}
