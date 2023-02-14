#include<iostream>
#include<string>
using namespace std;

class Account{
string name;
float balance;

public:

void setName(string n){
 name = n;

}

void setBalance(float b)
{
    balance = b;
}

string getName()
{
return name;
}

float getBalance()
{
return balance;
}

void depositAmount(int amount)
  {
    balance += amount;
  }
  
  void withdrawAmount(int amount)
  {
    if (balance >= amount)
      balance -= amount;
    else
      cout << "Insufficient balance" << endl;
  }
};



Account createAccount(){
   Account a;
   string n;
   float b;
   cout<<"Enter the name of Account Holder : ";
   cin>>n;
   cout<<"Enter the balance amount :";
   cin>>b;
   a.setName(n);
   a.setBalance(b);

   return a;
}
 
 int main(){
    Account a = createAccount();
    int choice;

while (true)
  {
    cout << "1. Display Balance" << endl;
    cout << "2. Deposit Amount" << endl;
    cout << "3. Withdraw Amount" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice)
    {
      case 1:
        cout << "Balance: " << a.getBalance() << endl;
        break;
        
      case 2:

        int amount;

        cout << "Enter the amount to deposit: ";
        cin >> amount;
        a.depositAmount(amount);
        break;
        
      case 3:
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        a.withdrawAmount(amount);
        break;
        
      case 4:
        cout << "Exiting..." << endl;
        return 0;
        
      default:
        cout << "Invalid choice" << endl;
    }
  }
}
 
