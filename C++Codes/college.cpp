#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;
bool exitGame;
bool gameOver;

bool isMoving;
bool bombExplode;
bool dead;
int height;
int width;
int life = 5;
int speed;
int score;
int myCarX;
int myCarY;
int highScore;
int highestScore[5];
int enemyX[4];
int enemyY[4] = {-8, -18, -28, -38};
int enemyPositionX;
int enemyPositionY;
int enemyNum;

string bombParticle1[4] = {"o   o", " ooo ", " ooo ", "o   o"};
string bombParticle2[4] = {" ooo ", "o   o", "o   o", " ooo "};
string myCar[4] = { // This is our car which we are going to control in the game,
    " * ",
    "* *",
    " * ",
    "* *"

};

void gotoxy(int x, int y) // A function which helps to print to any place we wanted.
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void hideCursor()
{
    CONSOLE_CURSOR_INFO cursor;
    cursor.dwsize = 100;
    cursor.bVisible = false;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}
void startUp()
{
    srand(time(NULL));
    exitGame = false;
    isMoving = false;
    gameOver = false;
    dead = false;
    height = 20;
    width = 19;
    myCarX = 8;
    myCarY = 16;
    speed = 1;
    enemyNum = 4;
    score = 0;

    for (int i = 0; i < enemyNum; i++)
    {
        /* code */
        enemyPositionX = rand()
    }
}

int main(void)
{
}