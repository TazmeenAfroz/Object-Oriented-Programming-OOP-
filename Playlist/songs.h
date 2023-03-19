#include<iostream>
#include<string>
using namespace std;

class Favourite_Songs{

    int size;
    string* songs;
       
       public:
    
    Favourite_Songs(int) ;
    Favourite_Songs(const Favourite_Songs& );
    ~Favourite_Songs();
    void addSong(string );
    void deleteSong(string );
    void updateSong(string , string );
    void printSongs();

};