#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

char maze[24][70];
int pR = 9;  // R Coordinate of Pacman
int pC = 31; // C Coordinate of Pacman
int score = 0;
int gR = 19; // R Coordinate of Ghost
int gC = 25; // C Coordinate of Ghost

char previousItem = ' ';
bool gameRunning = true;

void loadmaze();
void printmaze();
void movePacmanLeft();
void movePacmanRight();
void movePacmanUp();
void movePacmanDown();
bool ghostMovement();
int ghostDirection();
void printScore();
void gotoxy(int x, int y);
// Main Function
main()
{
    loadmaze();
    // printScore();
    printmaze();

    while (gameRunning)
    {
        Sleep(100);

        gameRunning = ghostMovement();

        if (GetAsyncKeyState(VK_LEFT))
        {
            movePacmanLeft(); // Function call to move Pacman towards left
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePacmanRight(); // Function call to move Pacman towards right
        }

        if (GetAsyncKeyState(VK_UP))
        {
            movePacmanUp(); // Function call to move Pacman towards up
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePacmanDown(); // Function call to move Pacman towards down
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false; // Stop the game
        }
    }
}

void printmaze()
{
    for (int x = 0; x < 24; x++)
    {
        for (int y = 0; y < 70; y++)
        {
            cout << maze[x][y];
        }
        cout << endl;
    }
}

void loadmaze()
{
    string line;
    fstream file;
    int c = 0;
    file.open("maze.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        c++;
    }
    file.close();

    file.open("maze.txt", ios ::in);
    // char t;

    for (int x = 0; x < 24; x++)
    {
        getline(file, line);
        for (int y = 0; y < 70; y++)
        {

            maze[x][y] = line[y];
        }
    }
    file.close();
}

void movePacmanLeft()
{
    if (maze[pR][pC - 1] == ' ' || maze[pR][pC - 1] == '.')
    {
        maze[pR][pC] = previousItem;
        maze[pR][pC - 1] = 'P';
        gotoxy(pC, pR);
        cout << ' ';
        pC = pC - 1;
    }

    if (maze[pR][pC - 1] == '.')
    {
        score = score + 1;
    }

    gotoxy(pC, pR);
    cout << 'P';
}

void movePacmanRight()
{
    if (maze[pR][pC + 1] == ' ' || maze[pR][pC + 1] == '.')
    {
        maze[pR][pC] = previousItem;
        maze[pR][pC + 1] = 'P';
        gotoxy(pC, pR);
        cout << ' ';
        pC = pC + 1;
    }

    if (maze[pR][pC + 1] == '.')
    {
        score = score + 1;
    }
    gotoxy(pC, pR);
    cout << 'P';
}

void movePacmanUp()
{
    if (maze[pR - 1][pC] == ' ' || maze[pR - 1][pC] == '.')
    {
        maze[pR][pC] = previousItem;
        maze[pR - 1][pC] = 'P';
        gotoxy(pC, pR);
        cout << ' ';
        pR = pR - 1;
    }

    else if (maze[pR - 1][pC] == '.')
    {
        score = score + 1;
    }
    gotoxy(pC, pR);
    cout << 'P';
}

void movePacmanDown()
{
    if (maze[pR + 1][pC] == ' ' || maze[pR + 1][pC] == '.')
    {
        maze[pR][pC] = previousItem;
        maze[pR + 1][pC] = 'P';
        gotoxy(pC, pR);
        cout << ' ';
        pR = pR + 1;
    }

    if (maze[pR + 1][pC] == '.')
    {
        score = score + 1;
    }
    gotoxy(pC, pR);
    cout << 'P';
}

int ghostDirection()
{
    srand(time(0));
    int result = 1 + (rand() % 4);
    return result;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

bool ghostMovement()
{
    int value = ghostDirection();
    if (value == 1)
    {
        if (maze[gR][gC - 1] == ' ' || maze[gR][gC - 1] == '.' || maze[gR][gC - 1] == 'P')
        {

            maze[gR][gC] = previousItem;
            gotoxy(gC, gR);
            cout << previousItem;
            gC = gC - 1;
            previousItem = maze[gR][gC];
            if (previousItem == 'P')
            {
                return 0;
            }
            maze[gR][gC] = 'G';
            gotoxy(gC, gR);
            cout << 'G';
        }
    }
    if (value == 2)
    {
        if (maze[gR][gC + 1] == ' ' || maze[gR][gC + 1] == '.' || maze[gR][gC + 1] == 'P')
        {
            maze[gR][gC] = previousItem;
            gotoxy(gC, gR);
            cout << previousItem;
            gC = gC + 1;
            previousItem = maze[gR][gC];
            if (previousItem == 'P')
            {
                return 0;
            }
            maze[gR][gC] = 'G';
            gotoxy(gC, gR);
            cout << 'G';
        }
    }

    if (value == 3)
    {
        if (maze[gR - 1][gC] == ' ' || maze[gR - 1][gC] == '.' || maze[gR - 1][gC] == 'P')
        {
            maze[gR][gC] = previousItem;
            gotoxy(gC, gR);
            cout << previousItem;
            gR = gR - 1;
            previousItem = maze[gR][gC];
            if (previousItem == 'P')
            {
                return 0;
            }
            maze[gR][gC] = 'G';
            gotoxy(gC, gR);
            cout << 'G';
        }
    }
    if (value == 4)
    {
        if (maze[gR + 1][gC] == ' ' || maze[gR + 1][gC] == '.' || maze[gR + 1][gC] == 'P')
        {

            maze[gR][gC] = previousItem;
            gotoxy(gC, gR);
            cout << previousItem;
            gR = gR + 1;
            previousItem = maze[gR][gC];
            if (previousItem == 'P')
            {
                return 0;
            }
            maze[gR][gC] = 'G';
            gotoxy(gC, gR);
            cout << 'G';
        }
    }
    return 1;
}

// void printScore()
// {
//     system("cls");
//     gotoxy(100, 10);
//     cout << "score :" << score << endl;
// }