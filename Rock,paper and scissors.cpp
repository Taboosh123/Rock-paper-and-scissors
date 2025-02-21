#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playerMove(char &player);
void computerMove(char &computer);
bool checkWinner(char player,char computer);

int main(){

    char player;
    char computer;
    bool running = true;

    while(running){
        playerMove(player);
        computerMove(computer);
        if(checkWinner(player,computer)){
            running = false;
        }

    }

    return 0;
}


void playerMove(char &player){

    int number;
    cout << "Please pick as: Rock as 1, Paper as 2, Scissors as 3: " << '\n';
    cin >> number;

    while(number < 1 || number > 3){
        cout << "Its invalid, Please pick from 1 to 3: "<< '\n';
        cin >> number;
    }

    number--;

    if(number == 0){
        player = 'R';
        cout << "Player Picked as Rock"<< '\n';
    }else if(number == 1){
        player = 'P';
        cout << "Player Picked as Paper"<< '\n';
    }else{
        player = 'S';
        cout << "Player Picked as Scissors"<< '\n';
    }


}
void computerMove(char &computer){


    srand(time(NULL));

    int number = rand() % 3;

    if(number == 0){
        computer = 'R';
        cout << "computer Picked as Rock"<< '\n';
    }else if(number == 1){
        computer = 'P';
         cout << "computer Picked as Paper"<< '\n';
    }else{
        computer = 'S';
        cout << "computer Picked as Scissors"<< '\n';
    }

}


bool checkWinner(char player,char computer){

    if(player == computer){
        cout << "Its a tie"<< '\n';
        return false;
    }else if((player == 'R' && computer == 'S')|| (player == 'P' && computer == 'R') || (player == 'S' && computer == 'P')){
             cout << "player win";
             return true;
             }
             else {
             cout << "computer win";
             return true;
             }
}

