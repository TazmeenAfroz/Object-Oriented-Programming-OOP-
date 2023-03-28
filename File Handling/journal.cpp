/*Design a program in C++ that simulates a Journal (diary). The program should allow
the user to enter data from the console, which will be saved in a text file representing
the journal. If the program is opened again, the user should be able to see the
previously saved journal entries.
The program should be menu-driven, with the following options:
Add an entry to the journal: When the user selects this option, they should be
prompted to enter the text for the journal entry. The program should append this new
entry to the end of the journal file, without deleting any previously saved entries.
Display the journal: When the user selects this option, the program should read the
entire contents of the journal file and display them on the console.*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int num;

    while(1)
    {
    cout<<"Please choose an option :"<<endl;
    cout<<"1. Add an entry to the journal"<<endl;
    cout<<"2. Display the journal"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>num;

    
       if(num == 1)
       {
    
        fstream journal;
        journal.open("journal.txt", ios::app);
        
    
        cout << "Enter the entry:" << endl;
        cin.ignore(); 
        string entry;
        getline(cin, entry);
        journal << entry << endl;
        cout << "Entry added to the journal" << endl;
        journal.close();
            
       }
    

        else if(num == 2)
        { 
          
        fstream journal;
        journal.open("journal.txt", ios::in);
        
        if (!journal) {
          cout << "File does not exist" << endl;
                      } 
                      else {
   
        string line;
        while (getline(journal, line)) {
        cout << line << endl;
         }
    journal.close();
                          }

        }
        else if(num == 3)
            {
              break;
            }
        else
        {
         cout<<"Invalid option"<<endl;
        }
    }
}
