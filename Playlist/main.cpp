#include<iostream>
#include<string>
#include"songs.h"
using namespace std;

   int main(){
    Favourite_Songs song(4);
   
           int choice;
           string S;
           string oldS;
           string newS;
            while(1)
            {
                 cout<<"1. Add a song 2.Update a song  3. Delete  4. Print  5.Backup "<<endl;
                 cin>>choice;
                      if (choice ==1)
                        {
                            cout<<"Enter the name of new song "<<endl;
                        cin>>S;
                        song.addSong(S);
                        }
                    else  if(choice == 2)
                        
                        { cout<< "Enter song name you want to update :"<<endl;
                        cin>>oldS;
                        cout<<"Enter new song name :"<<endl;
                        cin>>newS;
                            song.updateSong(oldS,newS);
                        }

                        else if(choice == 3)
                        {   cout<<"Enter the song name you want to delete "<<endl;
                            string s2;
                            cin>>s2;
                            song.deleteSong(s2);

                        }
                    else  if(choice == 4)
                        {
                            song.printSongs();
                        }

                    else if(choice == 5 )
                    {
                       Favourite_Songs song2(song);
                      song2.printSongs();
                    }
                    else 

                    break;
                        }

    }