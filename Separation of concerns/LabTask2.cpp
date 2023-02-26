#include "header2.h"
#include<iostream>
using namespace std;

Employee::Employee(){
     ID = 0;
    name = "";
    jobTitle = "";
     hours = 0;

}

Employee::Employee(int id,string n,string title,int hour){
      ID = id;
    name = n;
    jobTitle = title;
     hours = hour;
}
void Employee::setID(int id)
{
    ID = id;
}
void Employee::setName(string n)
{
    name = n;
}
void Employee::setJobTitle(string title){
    jobTitle = title;
}
void Employee::setHours(int hour){
     hours = hour;
}
int Employee::getID()
  {
    return ID;
  }
string Employee::getName()
{
    return name;
}
string Employee::getJobTitle()
{
    return jobTitle;
}
int Employee::getHours()
{
    return hours;
}

float Employee::calculateSalary() {
    float hourlyRate = 10.0;
    float basePay = 0.0;
    float overtimePay = 0.0;
    float totalPay = 0.0;

    if (hours <= 40) {
        basePay = hours * hourlyRate;
        totalPay = basePay;
    }
    else {
        basePay = 40 * hourlyRate;
        overtimePay = (hours - 40) * (hourlyRate * 2);
        totalPay = basePay + overtimePay;
    }
    return totalPay;
}
