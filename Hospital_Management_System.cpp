#include <iostream>
#include <string>
#include<vector>
using namespace std;

class personType
{
public:
void print() const;
//Function to output the first name and last name
//in the form firstName lastName.
void setName(string first, string last);
//Function to set firstName and lastName according
//to the parameters.
//Postcondition: firstName = first; lastName = last;
string getFirstName() const;
//Function to return the first name.
//Postcondition: The value of firstName is returned.
string getLastName() const;
//Function to return the last name.
//Postcondition: The value of lastName is returned.
personType(string first = "", string last = "");
//Constructor
//Sets firstName and lastName according to the parameters.
//The default values of the parameters are null strings.
//Postcondition: firstName = first; lastName = last;
private:
string firstName; //variable to store the first name
string lastName; //variable to store the last name
};

personType::personType(string first, string last)
{
firstName = first;
lastName = last;
}

void personType::print() const
{
cout << firstName << " " << lastName;
}

void personType::setName(string first, string last)
{
firstName = first;
lastName = last;
}

string personType::getFirstName() const
{
return firstName;
}

string personType::getLastName() const
{
return lastName;
}


class dateType
{
public:
void setDate(int month, int day, int year);
//Function to set the date.
//The member variables dMonth, dDay, and dYear are set
//according to the parameters.
//Postcondition: dMonth = month; dDay = day;
// dYear = year
int getDay() const;
//Function to return the day.
//Postcondition: The value of dDay is returned.
int getMonth() const;
//Function to return the month.
//Postcondition: The value of dMonth is returned.
int getYear() const;
//Function to return the year.
//Postcondition: The value of dYear is returned.
void printDate() const;
//Function to output the date in the form mm-dd-yyyy.
dateType(int month = 1, int day = 1, int year = 1900);
//Constructor to set the date
//The member variables dMonth, dDay, and dYear are set
//according to the parameters.
//Postcondition: dMonth = month; dDay = day; dYear = year;
// If no values are specified, the default
// values are used to initialize the member
// variables.
private:
int dMonth; //variable to store the month
int dDay; //variable to store the day
int dYear; //variable to store the year
};
dateType::dateType(int month, int day, int year)
{
dMonth = month;
dDay = day;
dYear = year;
}

void dateType::setDate(int month, int day, int year)
{
dMonth = month;
dDay = day;
dYear = year;
}

int dateType::getDay() const
{
return dDay;
}

int dateType::getMonth() const
{
return dMonth;
}

int dateType::getYear() const
{

return dYear;
}

void dateType::printDate() const
{
cout << dMonth << "/" << dDay << "/" << dYear;
}
/*
1. In this exercise, you will design various classes and write a program to computerize the billing system of a hospital.

a. Design the class doctorType, inherited from the class personType given below, 
with an additional data member to store a doctor’s speciality.
 Add appropriate constructors and member functions to initialize, access, and manipulate the data members.



d. Write a program to test your classes.*/
class doctorType: public personType
{
public:
void print() const;

void setSpeciality(string speciality);

string getSpeciality() const;

doctorType(string first = "", string last = "", string speciality = "");

void setDoctor(string first, string last, string speciality);


private:
string speciality;
};
doctorType::doctorType(string first, string last, string speciality)
: personType(first, last)
{
this->speciality = speciality;
}

void doctorType::setDoctor(string first, string last, string speciality)
{
setName(first, last);
this->speciality = speciality;
}

void doctorType::print() const
{
personType::print();
cout << " " << speciality;
}

void doctorType::setSpeciality(string speciality)
{
this->speciality = speciality;
}

string doctorType::getSpeciality() const
{
return speciality;
}
/*
b. Design the class billType with data members to store a patient’s ID and a patient’s hospital charges,
 such as pharmacy charges for medicine, doctor’s fee, and room charges.
  Add appropriate constructors and member functions to initialize and access and manipulate the data
members.
*/
class billType
{
    string patientID;
    double pharmacyCharges;
    double doctorFee;
    double roomCharges;
    double totalCharges;
public:
billType(string patientID = "", double pharmacyCharges = 0, double doctorFee = 0, double roomCharges = 0);
void setPatientID(string patientID);
void setPharmacyCharges(double pharmacyCharges);
void setDoctorFee(double doctorFee);
void setRoomCharges(double roomCharges);
void setTotalCharges(double totalCharges);
string getPatientID() const;
double getPharmacyCharges() const;
double getDoctorFee() const;
double getRoomCharges() const;
double getTotalCharges() const;
void print() const;
};

billType::billType(string patientID, double pharmacyCharges, double doctorFee, double roomCharges)
{   
    this->patientID = patientID;
    this->pharmacyCharges = pharmacyCharges;
    this->doctorFee = doctorFee;
    this->roomCharges = roomCharges;
    totalCharges = pharmacyCharges + doctorFee + roomCharges;
}

void billType::setPatientID(string patientID)
{
    this->patientID = patientID;
}

void billType::setPharmacyCharges(double pharmacyCharges)
{
    this->pharmacyCharges = pharmacyCharges;
}

void billType::setDoctorFee(double doctorFee)
{
    this->doctorFee = doctorFee;
}

void billType::setRoomCharges(double roomCharges)
{
    this->roomCharges = roomCharges;
}

void billType::setTotalCharges(double totalCharges)
{
    this->totalCharges = totalCharges;
}

string billType::getPatientID() const
{
    return patientID;
}

double billType::getPharmacyCharges() const
{
    return pharmacyCharges;
}

double billType::getDoctorFee() const
{
    return doctorFee;
}

double billType::getRoomCharges() const
{
    return roomCharges;
}

double billType::getTotalCharges() const
{
    return totalCharges;
}

void billType::print() const
{
    cout << "Patient ID: " << patientID << endl;
    cout << "Pharmacy Charges: " << pharmacyCharges << endl;
    cout << "Doctor Fee: " << doctorFee << endl;
    cout << "Room Charges: " << roomCharges << endl;
    cout << "Total Charges: " << pharmacyCharges + doctorFee + roomCharges << endl;
}

/*c. Design the class patientType, inherited from the class personType,
 with additional data members to store a patient’s ID, age, date of birth, attending physician’s name,
  the date when the patient was admitted in the hospital, 
  and the date when the patient was discharged from the hospital.
   (Use the class dateType to store the date of birth, admit date, discharge date, and
the class doctorType to store the attending physician’s name). 
Add appropriate constructors and member functions to initialize, access, and manipulate the data members.*/

class patientType: public personType
{
    string patientID;
    int age;
    dateType dateOfBirth;
    dateType admitDate;
    dateType dischargeDate;
    doctorType attendingPhysician;
    billType patientBill;
public:
void print() const;
patientType(string first = "", string last = "", string patientID = "", int age = 0);
void setPatientID(string patientID);
void setAge(int age);
void setDateOfBirth(int month, int day, int year);
void setAdmitDate(int month, int day, int year);
void setDischargeDate(int month, int day, int year);
void setAttendingPhysician(string first, string last, string speciality);
void setPatientBill(string patientID, double pharmacyCharges, double doctorFee, double roomCharges);
string getPatientID() const;
int getAge() const;
dateType getDateOfBirth() const;
dateType getAdmitDate() const;
dateType getDischargeDate() const;

doctorType getAttendingPhysician() const;
billType getPatientBill() const;


};

patientType::patientType(string first, string last, string patientID, int age): personType(first, last)
{
    this->patientID = patientID;
    this->age = age;

}

void patientType::setPatientID(string patientID)
{
    this->patientID = patientID;
}

void patientType:: setAge(int age)
{
    this->age = age;
}

void patientType:: setDateOfBirth(int month, int day, int year)
{
    dateOfBirth.setDate(month, day, year);
}

void patientType::setAdmitDate(int month, int day, int year)
{
    admitDate.setDate(month, day, year);
}

void patientType::setDischargeDate(int month, int day, int year)
{
    dischargeDate.setDate(month, day, year);
}


void patientType:: setAttendingPhysician(string first, string last, string speciality)
{
    attendingPhysician.setDoctor(first, last, speciality);
}

void patientType::setPatientBill(string patientID, double pharmacyCharges, double doctorFee, double roomCharges)
{
    patientBill.setPatientID(patientID);
    patientBill.setPharmacyCharges(pharmacyCharges);
    patientBill.setDoctorFee(doctorFee);
    patientBill.setRoomCharges(roomCharges);
}

string patientType:: getPatientID() const
{
    return patientID;
}

int patientType:: getAge() const
{
    return age;
}


dateType patientType:: getDateOfBirth() const
{
    return dateOfBirth;
}

dateType patientType:: getAdmitDate() const
{
    return admitDate;
}

dateType patientType:: getDischargeDate() const
{
    return dischargeDate;
}

doctorType patientType::getAttendingPhysician() const
{
    return attendingPhysician;
}

billType patientType::  getPatientBill() const
{
    return patientBill;
}


void patientType:: print() const
{
    cout << "Patient Name: "<< getFirstName() << " " << getLastName() << endl;
    
    cout << "Patient ID: " << patientID << endl;
    cout << "Age: " << age << endl;
    cout << "Date of Birth: ";
    dateOfBirth.printDate();
    cout << endl;
    cout << "Admit Date: ";
    admitDate.printDate();
    cout << endl;
    cout << "Discharge Date: ";
    dischargeDate.printDate();
    cout << endl;
    cout << "Attending Physician: ";
    attendingPhysician.print();
    cout << endl;
    cout << "Patient Bill: " << endl;
    patientBill.print();
    cout << endl;
}

int main()
{
    vector<patientType> patients;
    cout<<"Welcome to the Hospital Management System"<<endl;
    while(true)
    {
        int choice;
        cout<<"1. Add a new patient"<<endl;
        cout<<"2. View all patients"<<endl;
        cout<<"3. Search for a patient"<<endl;
        cout<<"4. Delete a patient"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
     
     switch(choice)
     {
         case 1:
         {
             string first, last, patientID, speciality, first1, last1;
             int age, month, day, year;
             double pharmacyCharges, doctorFee, roomCharges;
             cout<<"Enter the first name of the patient: ";
             cin>>first;
             cout<<"Enter the last name of the patient: ";
             cin>>last;
             cout<<"Enter the patient ID: ";
             cin>>patientID;
             cout<<"Enter the age of the patient: ";
             cin>>age;
             cout<<"Enter the date of birth of the patient (mm dd yyyy): ";
             cin>>month>>day>>year;
             cout<<"Enter the admit date of the patient (mm dd yyyy): ";
             cin>>month>>day>>year;
             cout<<"Enter the discharge date of the patient (mm dd yyyy): ";
             cin>>month>>day>>year;
             cout<<"Enter the attending physician's first name: ";
             cin>>first1;
             cout<<"Enter the attending physician's last name: ";
             cin>>last1;
             cout<<"Enter the attending physician's speciality: ";
             cin>>speciality;
             cout<<"Enter the pharmacy charges: ";
             cin>>pharmacyCharges;
             cout<<"Enter the doctor fee: ";
             cin>>doctorFee;
             cout<<"Enter the room charges: ";
             cin>>roomCharges;
             patientType patient(first, last, patientID, age);
             patient.setDateOfBirth(month, day, year);
             patient.setAdmitDate(month, day, year);
             patient.setDischargeDate(month, day, year);
             patient.setAttendingPhysician(first1, last1, speciality);
             patient.setPatientBill(patientID, pharmacyCharges, doctorFee, roomCharges);
             patients.push_back(patient);
             break;
         }
         case 2:
         {
             for(int i = 0; i < patients.size(); i++)
             {
                 patients[i].print();
             }
             break;
         }
         case 3:
         {
             string patientID;
             cout<<"Enter the patient ID: ";
             cin>>patientID;
             for(int i = 0; i < patients.size(); i++)
             {
                 if(patients[i].getPatientID() == patientID)
                 {
                     patients[i].print();
                     break;
                 }
             }
             break;
         }
         case 4:
         {
                string patientID;
                cout<<"Enter the patient ID: ";
                cin>>patientID;
                for(int i = 0; i < patients.size(); i++)
                {
                    if(patients[i].getPatientID() == patientID)
                    {
                        patients.erase(patients.begin() + i);
                        break;
                    }
                }
                break;
            }
            case 5:
            {
                return 0;
            }
            default:
            {
                cout<<"Invalid choice"<<endl;
                break;
            }

    }

}
return 0;
}