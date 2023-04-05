#include<iostream>
using namespace std;

class Boat
{
protected:
 int BoatLength;
 public:
 Boat(int BoatLength = 0)
 {
    this->BoatLength = BoatLength;
 }
 void swim()
 {
    cout<<"Iam swimming"<<endl;
 }

};

class Plane{
  protected:
  int maxAltitude;
  public:
  Plane(int maxAltitude = 0)
  {
    this->maxAltitude = maxAltitude;
  }
  void fly()
  {
    cout<<"Iam flying"<<endl;
  }
};

class Skimmer:protected Boat,protected Plane{
    string name;
    int numPassengers;
    public:
    Skimmer(int BoatLength,int maxAltitude,string name,int numPassengers = 0):Boat(BoatLength),Plane(maxAltitude)
    { 
        this->name = name;
        this->numPassengers = numPassengers;
    }
    void flyandswim()
    {
        swim();
        fly();
    }
    void display(){
        cout<<"Skimmer name is : "<<name << ", Length is : "<<BoatLength<<"px,"<<" Max Altitude is : "<<maxAltitude<<"ft,"<<" Number of Passengers is : "<<numPassengers<<endl;
    }
};

int main()
{
    Skimmer s(40,13000,"Swim and fly",2);
    s.display();
    s.flyandswim();
    return 0;
}