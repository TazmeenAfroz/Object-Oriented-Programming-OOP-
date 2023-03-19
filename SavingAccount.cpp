#include<iostream>
using namespace std;

class savingAccountType{

static float rate;
float balance;

public:

void calculateMonthlyInterest();
static void setInterestRate(float );
savingAccountType(float balance = 0.0);
void print();

};

float savingAccountType :: rate = 0.0;

void savingAccountType :: calculateMonthlyInterest()
{

double interest = (balance * rate ) / 12.0;
        balance += interest;

}
void savingAccountType :: setInterestRate(float r ){
 
 rate = r;

}

savingAccountType :: savingAccountType(float b){

balance = b;

}
void savingAccountType :: print() {
   
    cout << "Current balance: $" << balance << endl;
}



int main()
{
    savingAccountType saver1(2000.00),saver2(3000.00);

    savingAccountType ::setInterestRate(0.03);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout<<" After 1 month "<<endl;
    saver1.print();
    saver2.print();

    savingAccountType ::setInterestRate(0.04);
   
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout<<" After 2 month "<<endl;
    saver1.print();
    saver2.print();

return 0;
}