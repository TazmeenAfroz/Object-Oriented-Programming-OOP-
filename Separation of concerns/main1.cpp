#include <iostream>
#include "header1.h"
#include<string>
using namespace std;
void display_items(Item arr[], int size);
void update_item(Item &item);
void search_item_by_ID(Item arr[], int size, int ID_NO);

void display_items(Item arr[], int size)
{
  cout << "List of items:" << endl;
  for (int i = 0; i < size; i++)
  {
    arr[i].displayItemDetails();
    cout << endl;
  }
}

void update_item(Item &item)
{
  int choice;
  cout << "Select an option to update:" << endl;
  cout << "1) Price" << endl;
  cout << "2) Quantity" << endl;
  cout << "Enter choice: ";
  cin >> choice;

  if (choice == 1)
  {
    double price;
    cout << "Enter new price: ";
    cin >> price;
    item.setPrice(price);
  }
  else if (choice == 2)
  {
    int quantity;
    cout << "Enter new quantity: ";
    cin >> quantity;
    item.setQuantity(quantity);
  }
  else
  {
    cout << "Invalid choice!" << endl;
  }
}

void search_item_by_ID(Item arr[], int size, int ID_NO)
{
  bool found = false;
  for (int i = 0; i < size; i++)
  {
    if (arr[i].getID() == ID_NO)
    {
      found = true;
      arr[i].displayItemDetails();
    }
  }
  if (!found)
    cout << "Item not found." << endl;
}

int main()
{
  int size;
  cout << "Enter the total no of items to store: ";
  cin >> size;

  Item arr[size];

 
  for (int i = 0; i < size; i++)
  {
    int ID, quantity;
    string name;
    double price;
    cout << "Enter item " << i + 1 << " details:" << endl;
    cout << "ID: ";
    cin >> ID;
    cout << "Name: ";
    cin >> name;
    cout << "Price: ";
    cin >> price;
    cout << "Quantity: ";
    cin >> quantity;
    
    arr[i].setID(ID);
    arr[i].setName(name);
    arr[i].setPrice(price);
    arr[i].setQuantity(quantity);
  }

  int choice;
  do
  {
    cout << "Menu:" << endl;
    cout << "1) Display Items" << endl;
    cout << "2) Update Item" << endl;
    cout << "3) Search for Items by ID" << endl;
    cout << "4) Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      display_items(arr, size);
      break;
    case 2:
      int item_id;
      cout << "Enter item ID to update: ";
      cin >> item_id;
      for (int i = 0; i < size; i++)
      {
        if (arr[i].getID() == item_id)
        {
          update_item(arr[i]);
        }
      }
      break;
    case 3:
      int ID_NO;
      cout << "Enter item ID to search: ";
      cin >> ID_NO;
      search_item_by_ID(arr, size, ID_NO);
      break;
    case 4:
      break;
    default:
      cout << "Invalid choice!" << endl;
      break;
    }
  } while (choice != 4);


  return 0;
}
