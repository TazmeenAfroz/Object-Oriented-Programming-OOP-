#include<iostream>

using namespace std;

class Animal
{
   public:
   string name;
   int age;
   Animal(string name = " ",int age = 0 )
   {
       this->name=name;
       this->age=age;
   }
   
   void speak()
    {

    }

};

class Bird:private Animal
{
    int wingLength;
     public:
    Bird(string name =" ",int age = 0,int wingLength = 0):Animal(name,age)
    {
        this->wingLength = wingLength;
    }
    void speak()
    {
        cout<<"My name is "<<name<<" and my age is "<<age<<endl;
        cout<<"Iam a Bird and I can sing....."<<endl;
        cout<<"My wing length is "<<wingLength<<endl;
    }
};

class Reptile:private Animal{
    string habitat;
    public:
    Reptile(string name = " ",int age = 0,string habitat = " "):Animal(name,age)
    {
        this->habitat = habitat;
    }
    void speak()
    {
        cout<<"My name is "<<name<<" and my age is "<<age<<endl;
        cout<<"Iam a Reptile and I can creep....."<<endl;
        cout<<"My habitat is "<<habitat<<endl;
        
    }
};

int main()
{
    Bird b("Parrot",2,10);
    
    b.speak();
    
    Reptile r("Crocodile",5,"Sea");
 
    r.speak();

    return 0;

}