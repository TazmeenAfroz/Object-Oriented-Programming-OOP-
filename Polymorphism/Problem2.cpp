/*Task 02
Now make changes to existing code in a way that in the main, create an array of pointers to the
Animal class and populate it with objects of different derived classes. Pass this array to a
function named displayAll(). In that function call the display() method with each array element.
Finally, in main, at the end destroy the objects and release the memory. Make sure that the
child’s class objects should be destroyed.*/

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

void displayAll(Animal *a[])
{
    a[0]->display();
    a[1]->display();
}

int main()
{
    Animal *a[2];
  a[0] = new Deer("Deer1", "Brown", true);
  a[1] = new Zebra("Zebra1", "Black and White", "Vertical");
  displayAll(a);

  delete a[0];
  delete a[1];
    return 0;
    
}
