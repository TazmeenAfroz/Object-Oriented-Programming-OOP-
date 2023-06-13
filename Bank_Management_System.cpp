#include <iostream>
#include <string>
#include<vector>
using namespace std;

/*a. Define the class bankAccount to store a bank customer’s account number and balance. 
Suppose that account number is of type int, and balance is of type double. 
Your class should, at least, provide the following operations: set the account number, retrieve the account
number, retrieve the balance, deposit and withdraw money, 
and print account information. Add appropriate constructors.*/
class bankAccount
{
    protected:

 int accountNumber;
    double balance;
public:

bankAccount(int accountNumber = 0, double balance = 0.0)
{
    this->accountNumber = accountNumber;
    this->balance = balance;
}
void setAccountNumber(int accountNumber)
{
    this->accountNumber = accountNumber;
}
int retrieveAccountNumber()
{
    return accountNumber;
}
void setBalance(double balance)
{
    this->balance = balance;
}
double retrieveBalance()
{
    return balance;
}

void deposit(double amount)
{
    balance += amount;
}
void withdraw(double amount)
{
    balance -= amount;
}
void printAccountInfo()
{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
}
};


/*
 
b. Every bank offers a checking account.
 Derive the class checkingAccount from the class bankAccount (designed in part (a)).
  This class inherits members to store the account number
and the balance from the base class.
 A customer with a checking account typically receives interest, maintains a minimum balance, 
 and pays service charges if the balance falls below the minimum balance. 
 Add member variables to store this additional information.
  In addition to the operations inherited from the base class, this class should provide the following operations: 
  set interest rate, retrieve interest rate, set minimum balance, retrieve minimum balance, set
service charges, retrieve service charges, post interest,
 verify if the balance is less than the minimum balance, write a check, withdraw 
 (override the method of the base class), and print account information. Add appropriate constructors.*/
class checkingAccount : public bankAccount
{
    double interestRate;
    double minimumBalance;
    double serviceCharges;
public:

checkingAccount(double interestRate = 0.0, double minimumBalance = 0.0, double serviceCharges = 0.0)
{
    this->interestRate = interestRate;
    this->minimumBalance = minimumBalance;
    this->serviceCharges = serviceCharges;
}
void setInterestRate(double interestRate)
{
    this->interestRate = interestRate;
}
double retrieveInterestRate()
{
    return interestRate;
}
void setMinimumBalance(double minimumBalance)
{
    this->minimumBalance = minimumBalance;
}

double retrieveMinimumBalance()
{
    return minimumBalance;
}

void setServiceCharges(double serviceCharges)
{
    this->serviceCharges = serviceCharges;
}


double retrieveServiceCharges()
{
    return serviceCharges;
}

void postInterest()
{
    double interest = retrieveBalance() * interestRate;
     deposit(interest);
}
bool verifyBalance()
{
    if (retrieveBalance() < minimumBalance)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void writeCheck(double amount)
{
    withdraw(amount);
}
void withdraw(double amount)
{
    if (verifyBalance())
    {
        amount += serviceCharges;
    }
    bankAccount::withdraw(amount);
}

void printAccountInfo()
{
    bankAccount::printAccountInfo();
    cout << "Interest Rate: " << interestRate << endl;
    cout << "Minimum Balance: " << minimumBalance << endl;
    cout << "Service Charges: " << serviceCharges << endl;
}
};

/*
c. Every bank offers a savings account. 
Derive the class savingsAccount from the class bankAccount (designed in part (a)). Th
is class inherits members to store the account number and the balance from the base class.
 A customer with a savings account typically receives interest, makes deposits, and withdraws money. 
 In addition to the operations inherited from the base class, this class should provide the following operations: 
 set interest rate, retrieve interest rate, post interest, withdraw (override the method of the base class), 
 and print account information. Add appropriate constructors.

*/

class savingsAccount : public bankAccount
{
    double interestRate;
public:

savingsAccount(double interestRate = 0.0)
{
    this->interestRate = interestRate;
}
void setInterestRate(double interestRate)
{
    this->interestRate = interestRate;
}
double retrieveInterestRate()
{
    return interestRate;
}
void postInterest()
{
    double interest = retrieveBalance() * interestRate;
    deposit(interest);
}
void withdraw(double amount)
{
    bankAccount::withdraw(amount);
}
void printAccountInfo()
{
    bankAccount::printAccountInfo();
    cout << "Interest Rate: " << interestRate << endl;
}
};

/*
d. Write a program to test your classes designed in parts (b) and (c).

*/
int main()
{
    
checkingAccount c1(0.05, 1000, 10);
c1.setAccountNumber(34356);
c1.setBalance(1000);
c1.printAccountInfo();
c1.postInterest();
c1.printAccountInfo();
c1.writeCheck(100);
c1.printAccountInfo();
c1.withdraw(100);
c1.printAccountInfo();

savingsAccount s1(0.05);
s1.setAccountNumber(67893);
s1.setBalance(1000);
s1.printAccountInfo();
s1.postInterest();
s1.printAccountInfo();
s1.withdraw(100);
s1.printAccountInfo();

return 0;

}