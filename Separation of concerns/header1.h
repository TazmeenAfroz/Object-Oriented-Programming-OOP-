#include<string>
#include<iostream>
using namespace std;
class Item
{
  int ID;
string name;
  double price;
  int quantity;

public:
 
  Item();
  Item(int ID1, string name1, double price1, int quantity1);
    int getID();
     string getName(); 
     double getPrice();
      int getQuantity();
       void setID(int id); 
        void setName(string name); 
         void setPrice(double price); 
          void setQuantity(int quantity);
           void displayItemDetails();
           ~Item();
 
};
