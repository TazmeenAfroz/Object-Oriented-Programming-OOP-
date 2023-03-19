#include<iostream>
#include<string>
#include"songs.h"
using namespace std;



Favourite_Songs :: Favourite_Songs(int s){
        s = size;
        songs = new string[s];
    }

Favourite_Songs :: Favourite_Songs(const Favourite_Songs& other) {
        size = other.size;
        songs = new string[size];
        for (int i = 0; i < size; i++) {
            songs[i] = other.songs[i];
        }
    }

Favourite_Songs ::~Favourite_Songs() {
        delete[] songs;
    }

 void Favourite_Songs::addSong(string song) {
        string* Songs = new string[size + 1];
        for (int i = 0; i < size; i++) {
           Songs[i] = songs[i];
        }
        Songs[size] = song;
        delete[] songs;
        songs = Songs;
        size++;
    }

  void Favourite_Songs::deleteSong(string song) {
        
        string* Songs = new string[size - 1];
        int j = 0;
        for (int i = 0; i < size; i++) {
            if (songs[i] != song) {
               Songs[j] = songs[i];
                j++;
            }
        }
        delete[] songs;
        songs = Songs;
        size--;
    }

     void Favourite_Songs :: updateSong(string Song, string Song2) {
        for (int i = 0; i < size; i++) {
            if (songs[i] == Song) {
                songs[i] = Song2;
            }
        }
    }

    void Favourite_Songs :: printSongs() {
        for (int i = 0; i < size; i++) {
            cout << songs[i] << endl;
        }
    }