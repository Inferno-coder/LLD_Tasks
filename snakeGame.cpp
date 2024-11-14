#include<bits/stdc++.h>
using namespace std;

class Player{
public:
    int id;
    string playerName;
    Player(int _id,int _playerName){
        id=_id;
        playerName=_playerName;
    }
};

class Jumper{
public:
    int from,to;
    Jumper(int start,int end){
        from=start;
        to=end;
    }
};

class Dice{
public:
   int numberOfDices;
   Dice(totalDices){
       numberOfDices=totalDices;
   }
   int rollDice(){
    int min = 1, max = 6;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    int sum=0;
    for(int i=0;i<numberOfDices;i++)sum+=dis(gen);
   }
};

class Board{
    Dice dice;
    queue<Player>nextTurn;
    vector<Jumper>snakes;
    vector<Jumper>ladders;
    map<string,int>playerCurrentPosition;
    Board(){
        
    }
};

int main(){

    return 0;
}




