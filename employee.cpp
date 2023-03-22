#include <iostream>
#include <iomanip>
using namespace std;

struct dateType {
int month;
int day;
int year;
};

enum etype { laborer, secretary, manager, accountant, executive, researcher };

class employeeType {
public:
string employeeName;
double grossAmount, federalTax, stateTax, socialSecurityTax, medicareTax, pensionPlan,healthInsurance, netPay;
struct dateType date;
enum etype type;
void calculatePaycheck();
void findType();
void printPaycheck();
};

void employeeType::calculatePaycheck() {
federalTax = grossAmount * 0.15;
stateTax = grossAmount * 0.035;
socialSecurityTax = grossAmount * 0.0575;
medicareTax = grossAmount * 0.0275;
pensionPlan = grossAmount * 0.05;
healthInsurance = 75.00;
netPay = grossAmount - federalTax - stateTax - socialSecurityTax - medicareTax - pensionPlan - healthInsurance;
}

void employeeType::findType(){
char letter;
cin >> letter;

switch (letter) {
case 'l':
type = laborer;
break;
case 's':
type = secretary;
break;
case 'm':
type = manager;
break;
case 'a':
type = accountant;
break;
case 'e':
type = executive;
break;
case 'r':
type = researcher;
break;
default:
cout << "Invalid input. Exiting program." << endl;

}
}

void employeeType :: printPaycheck() {
cout << fixed << setprecision(2);
cout << endl << employeeName << endl;
cout << "Gross Amount: " << setw(18) << setfill('.') << "$" << grossAmount << endl;
cout << "Federal Tax: " << setw(21) << "$" << federalTax << endl;
cout << "State Tax: " << setw(23) << "$" << stateTax << endl;
cout << "Social Security Tax: " << setw(10) << "$" << socialSecurityTax << endl;
cout << "Medicare/Medicaid Tax: " << setw(6) << "$" << medicareTax << endl;
cout << "Pension Plan: " << setw(20) << "$" << pensionPlan << endl;
cout << "Health Insurance: " << setw(17) << "$" << healthInsurance << endl;
cout << "Net Pay: " << setw(24) << "$" << netPay << endl;

cout << "\nDate of first employment: " << setfill('0') << setw(2) << date.month << "/"
<< setfill('0') << setw(2) << date.day << "/" << date.year << endl;

switch (type) {
case laborer:
cout << "Employee type is laborer." << endl;
break;
case secretary:
cout << "Employee type is secretary." << endl;
break;
case manager:
cout << "Employee type is manager." << endl;
break;
case accountant:
cout << "Employee type is accountant." << endl;
break;
case executive:
cout << "Employee type is executive." << endl;
break;
case researcher:
cout << "Employee type is researcher." << endl;
break;
}

}

int main() {
employeeType e1, e2, e3;

cout << "Enter information for Employee 1" << endl;
cout << "Enter employee name: ";
getline(cin, e1.employeeName);
cout << "Enter gross amount: $";
cin >> e1.grossAmount;

cout << "Enter date of first employment (mm dd yyyy): ";
cin >> e1.date.month >> e1.date.day >> e1.date.year;
cout << "Enter employee type (first letter only) laborer, secretary, manager, accountant, executive,researcher:";
e1.findType();
e1.calculatePaycheck();
e1.printPaycheck();

cout << "\nEnter information for Employee 2" << endl;
cout << "Enter employee name: ";
cin.ignore();
getline(cin, e2.employeeName);
cout << "Enter gross amount: $";
cin >> e2.grossAmount;

cout << "Enter date of first employment (mm dd yyyy): ";
cin >> e2.date.month >> e2.date.day >> e2.date.year;
cout << "Enter employee type (first letter only) laborer, secretary, manager, accountant, executive,researcher:";
e2.findType();
e2.calculatePaycheck();
e2.printPaycheck();

cout << "\nEnter information for Employee 3" << endl;
cout << "Enter employee name: ";
cin.ignore();
getline(cin, e3.employeeName);
cout << "Enter gross amount: $";
cin >> e3.grossAmount;
cout << "Enter date of first employment (mm dd yyyy): ";
cin >> e3.date.month >> e3.date.day >> e3.date.year;
cout << "Enter employee type (first letter only) laborer, secretary, manager, accountant, executive,researcher:";
e3.findType();
e3.calculatePaycheck();
e3.printPaycheck();

return 0;

}

