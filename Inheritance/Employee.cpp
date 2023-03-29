/*Imagine you are working on a project for a company that wants to manage their
Employees data. Your task is to create a program that can handle different types of
employees such as hourly employees and salaried employees. Each employee has a
name, and a salary.
To achieve this task, you need to create a class hierarchy that uses inheritance to
represent the different types of employees. You should start by creating a base class
called "Employee" that contains common attributes(“Employee name”) and
methods(constructor, getters, setters, and calcSalary()) for all types of employees.
Next, create derived classes for each type of employee (HourlyEmployee and
SalariedEmployee), which inherit from the base class. These derived classes should
include additional attributes and methods that are specific to each type of employee.
For example, the HourlyEmployee class might have attributes for its hourly rate and
hours worked, while the SalariedEmployee class might have an attribute for its
annual salary. Each derived class should also have a constructor that initializes its
specific attributes and calls the base class constructor.

Finally, you should override the method "calcSalary()" for each derived class. The
"calcSalary()" method should calculate the salary for each type of employee based
on its specific attributes.
For Hourly Employee salary calculation:
Salary= no of hours worked * hourly rate

For Salaried Employee salary calculation:
Salary= annual salary/12

To test your program, you should create one instance of each type of employee and
call the "calcSalary()" method to ensure that your program is working correctly.
Note: Input the employee data from user in main and pass them to the constructor.
The salary will be calculated based on the info user has entered.*/
#include<iostream>
#include<string>

using namespace std;

class Employee
{
    string name;

   public :

   Employee(string name)
   {
    this->name = name;
   }

   string getName()
   {
    return name;
   }

   void setName(string n){
    name = n;
   }

   float calcSalary()
   {
     return 0;
   }
  
};


class HourlyEmployee : public Employee
{
   float hourlyRate;
   int hours;

   public :
   HourlyEmployee(string name,float rate,int hrs):Employee(name)
   {
      hourlyRate = rate;
      hours = hrs;
   }

   float calcSalary(){
    
     return hours * hourlyRate;
   }
   
    void display()
    {
        cout<<"Name : "<<getName()<<endl;
    }
};


class SalariedEmployee : public Employee 
{
  float annualSalary;

   public :
   SalariedEmployee(string n,float salary):Employee(n)
   {
    annualSalary = salary;
   }

  float calcSalary(){
    
     return annualSalary/12;
   }
    void display()
    {
        cout<<"Name : "<<getName()<<endl;
    }
};

    int main()
    { 
    string Hname,Sname;
    int h;
    float rate,Asalary;

    cout<<"Enter Hourly employee name :";
    getline(cin,Hname);
    cout<<endl;
    cout<<"Enter Hourly Rate : ";
    cin>>rate;
    cout<<endl;
    cout<<"Enter the number of hours worked : ";
    cin>>h;
    HourlyEmployee h1(Hname,rate,h);

     h1.display();
    cout<<"Hourly Salary = $ "<<h1.calcSalary()<<endl;
    cout<<endl;

    cout<<"Enter Salaried employee name :";
    cin.ignore();
    getline(cin,Sname);
    cout<<endl;
    cout<<"Enter annual salary : ";
    cin>>Asalary;
    cout<<endl;
    SalariedEmployee S1(Sname,Asalary);
    
   
    S1.display();
    cout<<"Annual Salary = $ "<<S1.calcSalary()<<endl;
    
    return 0; 
    }
