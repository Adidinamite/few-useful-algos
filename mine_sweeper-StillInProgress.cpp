#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
#define EASY_SIZE 10
#define MEDIUM_SIZE 17
#define HARD_SIZE 25
char difficulty[10];
int choice;
char difficulty_sure;
bool player_chooses = true;
int table_size;
    void refresh()
    {
        system("cls");
    }

    void game_difficulty()
    {
     while(player_chooses){
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
            player_chooses=false;
        else refresh();
    }
    }
    void create_matrix(char *difficulty)
    {
        if(difficulty == "EASY")
        {
            table_size = EASY_SIZE;
            int playerBoard[EASY_SIZE][EASY_SIZE];
            int realBoard[EASY_SIZE][EASY_SIZE];
        }
        if(difficulty == "MEDIUM")
        {
            table_size = MEDIUM_SIZE;
            int playerBoard[MEDIUM_SIZE][MEDIUM_SIZE];
            int realBoard[MEDIUM_SIZE][MEDIUM_SIZE];
        }
        if(difficulty == "HARD")
        {
            table_size = HARD_SIZE;
            int playerBoard[HARD_SIZE][HARD_SIZE];
            int realBoard[HARD_SIZE][HARD_SIZE];
            
        }
    }
    void Start()
    {
        create_matrix(difficulty);
    }
int main()
{
    game_difficulty();
    refresh();
    Start();
    return 0;
}
