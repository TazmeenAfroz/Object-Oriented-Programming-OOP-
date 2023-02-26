#include <iostream>
#include<string>
#include "header1.h"
using namespace std;

Item::Item()
  {
    ID = 0;
    name = "";
    price = 0.0;
    quantity = 0;
  }
 
 Item::Item(int ID1, string name1, double price1, int quantity1)
  {
   ID = ID1;
   name = name1;
   price= price1;
   quantity = quantity1;
  }

  
  int Item :: getID() { return ID; }
  string Item :: getName() { return name; }
  double Item :: getPrice() { return price; }
  int Item :: getQuantity() { return quantity; }

 
  void Item :: setID(int id) { ID = id; }
  void Item :: setName(string name1) { name = name1; }
  void Item :: setPrice(double price1) { price = price1; }
  void Item :: setQuantity(int quantity1) {quantity = quantity1; }

  void Item :: displayItemDetails()
  {
    cout << "ID: " << ID << endl;
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
  }
Item :: ~Item()
  {
    cout << "Object Destroyed" << endl;
  }

 
