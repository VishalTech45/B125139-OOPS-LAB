//  Music Playlist
// Create a class named Song containing the following private data members:
// • Song Name
// • Artist Name
// • Duration
// Create two Song objects. Write a friend function named compareSongs() that compares
// the duration of the two songs and displays which song is longer. If both songs have the
// same duration, display an appropriate message.
// Hint: The friend function should receive both Song objects as arguments

#include <iostream>
#include <string>
using namespace std;

class Song{  
    string songName;
    string artistName;
    float duration; // in minutes
    public:
    // constructor to initialize the Song object
    Song(string sn, string an, float d) {
        songName = sn;
        artistName = an;
        duration = d;
    }

    friend void compareSongs(const Song &song1, const Song &song2);
};

void compareSongs(const Song &song1, const Song &song2) {
    cout << "--------Song Details ------------" << endl;
    cout << "Song 1: " << song1.songName << " by " << song1.artistName << ", Duration: " << song1.duration << " minutes" << endl;
    cout << "Song 2: " << song2.songName << " by " << song2.artistName << ", Duration: " << song2.duration << " minutes" << endl;

    if (song1.duration > song2.duration) {
        cout << song1.songName << " is longer than " << song2.songName << endl;
    } else if (song1.duration < song2.duration) {
        cout << song2.songName << " is longer than " << song1.songName << endl;
    } else {
        cout << "Both songs have the same duration." << endl;
    }
}

int main(){
    string songName1, artistName1, songName2, artistName2;
    float duration1, duration2;

    cout << "Enter the name of the first song: ";
    getline(cin, songName1);
    cout << "Enter the artist name of the first song: ";
    getline(cin, artistName1);
    cout << "Enter the duration of the first song (in minutes): ";
    cin >> duration1;
    cin.ignore(); // To consume the newline character after reading duration1

    cout << "Enter the name of the second song: ";
    getline(cin, songName2);
    cout << "Enter the artist name of the second song: ";
    getline(cin, artistName2);
    cout << "Enter the duration of the second song (in minutes): ";
    cin >> duration2;

    Song song1(songName1, artistName1, duration1);
    Song song2(songName2, artistName2, duration2);

    compareSongs(song1, song2);

     

    return 0;
}