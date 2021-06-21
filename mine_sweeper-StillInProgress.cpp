#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
char difficulty[10];
int choice;
char difficulty_sure;
bool player_decision = true;
    void game_difficulty()
    {
     while(player_decision){
         cout<<setw(25)<<"CHOOSE YOUR DIFFICULTY:\n1.EASY\n2.MEDIUM\n3.HARD\n";
         cin >> choice;
        switch(choice)
        {
        case 1:
            strcpy(difficulty, "EASY");
            break;
        case 2:
            strcpy(difficulty, "MEDIUM");
            break;
        case 3:
            strcpy(difficulty, "HARD");
            break;
        }
        cout<<"ARE YOU SURE: "<<difficulty<<"\n";
        cout<<"y/n\n";
        cin >> difficulty_sure;
        if(difficulty_sure == 'y')
            player_decision=false;
    }
    }
int main()
{
    game_difficulty();

    cout<< difficulty;
    return 0;
}
