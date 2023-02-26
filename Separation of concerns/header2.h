#include<iostream>
using namespace std;

class Employee{

int ID;
string name;
string jobTitle;
int hours;
public :
Employee();
Employee(int id,string n,string title,int hour);

void setID(int id);
void setName(string n);
void setJobTitle(string title);
void setHours(int hour);

int getID();
string getName();
string getJobTitle();
int getHours();

float calculateSalary();


};