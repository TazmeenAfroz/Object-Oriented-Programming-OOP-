#include<iostream>
#include<vector>
using namespace std;

class Item 
{
  string name;
  float price;

  public:
  Item(string n = "",float p = 0)
  {
    name = n;
    price = p;
  }

    string getName()
    {
        return name;
    }

    float getPrice()
    {
        return price;
    }

 

};

int main()
{
    int choice;
    vector<Item> items;
    while(1)
    {
        cout<<endl;
       cout<<"1. Add Items "<<endl;
       cout<<"2. View Items "<<endl;
       cout<<"3. Remove Items "<<endl;
       cout<<"4. Clear the cart "<<endl;
      cout<<"5. Exchange the Item"<<endl;
      cout<<"6. Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        if(choice == 1)
        {   cout<<" Add Items "<<endl;
            cout<<"1. IceCream    Price = 80"<<endl;
            cout<<"2. Pizza       Price = 2000"<<endl;
            cout<<"3. Burger      Price = 500"<<endl;
            cout<<"4. Fries       Price = 100"<<endl;
         
         cout<<"Enter Item no :";
            int itemNo;
            cin>>itemNo;
            if(itemNo == 1)
            {
                Item item1("IceCream",80);
                items.push_back(item1);
            }
            else if(itemNo == 2)
            {
                Item item2("Pizza",2000);
                items.push_back(item2);
            }
            else if(itemNo == 3)
            {
                Item item3("Burger",500);
                items.push_back(item3);
            }
            else if(itemNo == 4)
            {
                Item item4("Fries",100);
                items.push_back(item4);
            }
            else
            {
                cout<<"Invalid Item No"<<endl;
            }
        }
           
       if(choice == 2)
       {
            cout<<"View Items"<<endl;
            for(int i = 0 ; i < items.size() ; i++)
            {
                cout<< i+1<< ". "<< items[i].getName()<<" "<<items[i].getPrice()<<endl;
            }
       }
            
        if(choice == 3)
        {
            if(items.empty())
             cout<<"Cart is empty"<<endl;
             else 
             {
                cout<<"Remove Items "<<endl;
                
            for(int i = 0 ; i < items.size() ; i++)
            {
                cout<< i+1 << ". "<<items[i].getName()<<" "<<items[i].getPrice()<<endl;
            }
            cout<<"Enter Item no :";
            int itemNo;
            cin>>itemNo;
            items.erase(items.begin()+itemNo-1);

             }
        }
        if(choice == 4)
        {
            cout<<"Clear the cart "<<endl;
            items.clear();
        }

        if(choice == 5)
         {
            cout<<"Exchange the Item"<<endl;
             for(int i = 0 ; i < items.size() ; i++)
            {
                cout<< i+1 << ". "<< items[i].getName()<<" "<<items[i].getPrice()<<endl;
            }
            cout<<"Enter Item no you want to exchange  :"<<endl;
            int itemNo;
            cin>>itemNo;
              cout<<" Add Items "<<endl;
            cout<<"1. IceCream    Price = 80"<<endl;
            cout<<"2. Pizza       Price = 2000"<<endl;
            cout<<"3. Burger      Price = 500"<<endl;
            cout<<"4. Fries       Price = 100"<<endl;
            
            cout<<"Enter Item no you want to exchange with :"<<endl;
            int itemNo2;
            cin>>itemNo2;
           
             if(itemNo2 == 1)
            {
                Item item1("IceCream",80);
                items.at(itemNo-1) = item1;
            }
            else if(itemNo2 == 2)
            {
                Item item2("Pizza",2000);
                 items.at(itemNo-1) = item2;
            }
            else if(itemNo2 == 3)
            {
                Item item3("Burger",500);
                items.at(itemNo-1) = item3;
            }
            else if(itemNo2 == 4)
            {
                Item item4("Fries",100);
                items.at(itemNo-1) = item4;
            }
            else
            {
                cout<<"Invalid Item No"<<endl;
            }
        }
        
        else if(choice == 6)
        {
            cout<<"Exit"<<endl;
            break;

         }

    }
       return 0; 
}
  
