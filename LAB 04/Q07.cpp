
#include <iostream>
#include <string>
using namespace std;

class Player{
    string p_name;
    int health;
    int score;
    int level;
    public:
    //constructor to initialize the Player object
    Player(string name, int h , int s,int l){
        p_name = name;
        health = h;
        score = s;
        level = l;
    }
    //declare Gamemanager as a friend class
    friend class GameManager;
};

class GameManager{
 public:
    void displayDetails( Player &player){
        cout<<"--------Player Details ------------"<<endl;
        cout<<"Player Name: "<<player.p_name<<endl;
        cout<<"Health: "<<player.health<<endl;
        cout<<"Score: "<<player.score<<endl;
        cout<<"Level: "<<player.level<<endl;
    }
    void checkAliveStatus( Player &player){
        if(player.health > 0){
            cout<<"Player is Alive"<<endl;
        }else if(player.health > 0 && player.health <= 20){
            cout<<"Player is in Critical Condition"<<endl;
        }
        else if(player.health == 0){
            cout<<"Player is Dead"<<endl;
        }
        else{
            cout<<"Invalid Health Value"<<endl;
        }
    }

     void display_level_and_score( Player &player){
        cout<<"Player's Current Level: "<<player.level<<endl;
        cout<<"Player's Current Score: "<<player.score<<endl;
     }
};


int main(){
    string name;
    int health, score, level;

    cout << "Enter the player name: ";
    getline(cin, name); 
    cout << "Enter the health: ";
    cin >> health;      
    cout << "Enter the score: ";
    cin >> score;
    cout << "Enter the level: ";
    cin>> level;

    Player player(name , health, score, level);
    GameManager gm;
    gm.displayDetails(player);
    gm.checkAliveStatus(player);
    gm.display_level_and_score(player);


    return 0;
}