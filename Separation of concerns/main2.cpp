#include<iostream>
#include<string>
#include "header2.h"
using namespace std;


int main(){
int id;
string Name;
string JobTitle;
int Hours;
int num;
cout<<"Enter number of employees :"<<endl;
cin>>num;
Employee arr[num];

for(int i=0 ; i<num ;i++)
{
    cout<<"Enter id of employee "<<(i+1)<<": "<<endl;
    cin>>id;
    cout<<"Enter name : "<<endl;
    cin>>Name;
    cout<<"Enter JobTitle : "<<endl;
    cin>>JobTitle;
    cout<<"Enter no of hours you worked : "<<endl;
    cin>>Hours;
    arr[i].setID(id);
    arr[i].setName(Name);
    arr[i].setJobTitle(JobTitle);
    arr[i].setHours(Hours);
}

for(int i=0 ; i<num ;i++)
{
    cout<<" SALARY OF EMPLOYEE  "<<(i+1)<<" : "<<arr[i].calculateSalary()<<endl;
}
return 0;
}
