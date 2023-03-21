#include <iostream>
#include <string>
using namespace std;


class DateOfBirth {

    int day;
    int month;
    int year;
public:
    DateOfBirth(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    int getDay() const
    { 
        return day; 
    }

    int getMonth() const
    {
         return month; 
    }

    int getYear() const 
    { 
    return year; 
    }


};


class Contact {

    string name;
    string phone_no;
    string email;
    DateOfBirth dob;
public:
    Contact(int d = 0,int m = 0 ,int y = 0 ,string n = "",string N = "",string e = "") : dob(d,m,y)
    {name = n ;
     phone_no = N ;
      email = e ;
    }
    string getName() const
    {
     return name; 
     }
    string getPhoneNo() const 
    { return phone_no; 
    }
    string getEmail() const 
    { return email;
    }
  DateOfBirth getDOB() const 
  { return dob; 
  }

};


class ContactBook {

 Contact contacts[5];
    int size;
public:
    ContactBook() {
        size = 0;
    }
    void addContact() {
        int day, month, year;
        string name, no, email;
        size = 3;
        for(int i = 0 ; i < size ; i++ ){
        
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter date of birth: " << endl;
        cin >> day;
        cin.ignore();
        cin >> month;
        cin.ignore();
        cin >> year;
        cout << "Enter the email: " << endl;
        cin >> email;
        cout << "Enter the phone no: " << endl;
        cin >> no;

       

        
          contacts[i] = Contact(day, month, year, name, no, email);
       }
        
    }
     void printBirthdaysInMonth() const {
         int m;
    
    cout<<"Enter the birthday month : "<<endl;
    cin>>m;
       cout << "Contacts with birthdays in month " << m << ":" <<endl;
        for (int i = 0; i < size; i++) {
            if (contacts[i].getDOB().getMonth() == m) {
               cout << contacts[i].getName() << endl;
            }
        }
    }

};

int main() {

 ContactBook book;

book.addContact();
 
book.printBirthdaysInMonth();


    return 0;
}