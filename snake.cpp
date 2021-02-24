#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
bool gameIsOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int lenTail;
enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
eDirection dir;

void Setup()
{
    gameIsOver = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}
void Draw()
{
    system("cls");
    for(int i = 0; i< width ; ++i)
        cout<< "#";
    cout<< endl;

    for(int i = 0; i< height; ++i)
    {
        for(int j=0; j< width; ++j)
        {
            if(j == 0 || j == width-1)
                cout<<"#";
            if(i == y && j == x)
                cout<<"O";
            else if(i == fruitY && j == fruitX)
            {
                cout<< "F";
            }
            else
                {
                    bool print = false;
                    for(int k = 0; k< lenTail; k++ )
                    {
                        if(tailX[k] == j && tailY[k] ==i)
                        {
                            cout<< "o";
                            print = true;
                        }
                    }
                    if(!print)
                        cout<<" ";
                }
        }
        cout<<endl;
    }

    for(int i = 0; i< width ; ++i)
        cout<< "#";
    cout<< endl;
    cout<<"Score: "<< score << endl;

}
void Input()
{
    if(_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameIsOver = true;
            break;
        }
    }
}
void Logic()
{
        int previousX= tailX[0];
        int previousY = tailY[0];
        int previous2X, previous2Y;
        tailX[0] = x;
        tailY[0] = y;
        for(int i= 1; i< lenTail; ++i)
        {
            previous2X = tailX[i];
            previous2Y = tailY[i];

            tailX[i] = previousX;
            tailY[i] = previousY;

            previousX = previous2X;
            previousY = previous2Y;
        }
        switch(dir)
        {case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
        break;
        default:
            break;}
        if(x >  width || x < 0)
            gameIsOver = true;
        if(y > height || y < 0)
            gameIsOver = true;
        for(int i = 0; i< lenTail; ++i)
            if(tailX[i] == x && tailY[i] == y)
        {
            gameIsOver = true;
        }
        if(x == fruitX && y == fruitY)
        {
            score +=10;
            fruitX = rand() % width;
            fruitY = rand() % height;
            lenTail ++;
        }
}

int main()
{
    Setup();
    while(!gameIsOver)
    {
        Draw();
        Input();
        Logic();
        Sleep(10);//sleep(10)
    }
    return 0;
}
