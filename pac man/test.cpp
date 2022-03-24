#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <fstream>

using namespace std;
char maze[24][71] = {
    {"#####################################################################"},
    {"||.. .....................................................  ......  ||"},
    {"||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||"},
    {"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"},
    {"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||"},
    {"||..        %%%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||"},
    {"||..        |%|       . . |%|...    ............... |%| ..       .  ||"},
    {"||..        %%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||"},
    {"||..               |%|.             |%|......       |%| ..    |%|.  ||"},
    {"||..     ......... |%|.             |%|......|%|        ..    |%|.  ||"},
    {"||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.  ||"},
    {"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||"},
    {"||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||"},
    {"||..|%|            .           ...|%|               |%| ..|%|.      ||"},
    {"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
    {"||...............................................   |%| ..........  ||"},
    {"||   ............................................          .......  ||"},
    {"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.      ||"},
    {"||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.      ||"},
    {"||..|%|            .           ...|%|               |%| ..|%|.      ||"},
    {"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
    {"||...............................................   |%| ..........  ||"},
    {"||  .............................................          .......  ||"},
    "#####################################################################"};
//------------prototypes------------

//------game section------
void printMaze();
void end_game();
void printScore();
void calculateScore();

//---------file------------
void store_maze();
void load_maze();

//------pacman section------
void movePacmanLeft();
void movePacmanRight();
void movePacmanUp();
void movePacmanDown();

//------gost section------
bool ghostMovement();
int ghostDirection();
bool vertical_movement();
bool horizontal_movement();
int ghost_one_Direction();

void gotoxy(int x, int y);

//------------variables-------------
int pacmanX = 10;
int pacmanY = 31;
bool over = 0;
char previousItem = ' ';
int score = 0;

int ghostX = 19;   // X Coordinate of Ghost
int ghostY = 25;   // Y Coordinate of Ghost
int ghostX_V = 14; // for vertical  Ghost
int ghostY_V = 3;
int ghostX_H = 22; // for horizontal  Ghost
int ghostY_H = 3;

int ghostX_S = 15; // for specific  Ghost
int ghostY_S = 13;
main()
{

    bool gameRunning = true;
    system("CLS");

    // score = 0;
    //
    printMaze();

    gotoxy(pacmanY, pacmanX);
    cout << "P";
    gotoxy(ghostY, ghostX);
    cout << "G";
    gotoxy(ghostY_V, ghostX_V);
    cout << "G";
    gotoxy(ghostY_H, ghostX_H);
    cout << "G";

    while (gameRunning)
    {
        bool gameRunning = true;
        // printScore();
        while (gameRunning)
        {
            Sleep(100);
            printScore();
            // system("CLS");
            // printMaze();
            gameRunning = ghostMovement();
            gameRunning = vertical_movement();
            gameRunning = horizontal_movement();
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
            // cout << "                                                             Score : " << score << endl;
        }
    }
}
void printMaze()
{
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 71; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
}
void movePacmanLeft()
{
    if (maze[pacmanX][pacmanY - 1] == ' ' || maze[pacmanX][pacmanY - 1] == '.')
    {
        if (maze[pacmanX][pacmanY - 1] == '.')
        {
            calculateScore();
        }
        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanY = pacmanY - 1;

        gotoxy(pacmanY, pacmanX);
        cout << "P";
    }
}
void movePacmanRight()
{
    if (maze[pacmanX][pacmanY + 1] == ' ' || maze[pacmanX][pacmanY + 1] == '.')
    {
        if (maze[pacmanX][pacmanY + 1] == '.')
        {
            calculateScore();
        }
        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanY = pacmanY + 1;

        gotoxy(pacmanY, pacmanX);
        cout << "P";
    }
}
void movePacmanUp()
{
    if (maze[pacmanX - 1][pacmanY] == ' ' || maze[pacmanX - 1][pacmanY] == '.')
    {
        if (maze[pacmanX - 1][pacmanY] == '.')
        {
            calculateScore();
        }
        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanX = pacmanX - 1;

        gotoxy(pacmanY, pacmanX);
        cout << "P";
    }
}
void movePacmanDown()
{
    if (maze[pacmanX + 1][pacmanY] == ' ' || maze[pacmanX + 1][pacmanY] == '.')
    {
        if (maze[pacmanX + 1][pacmanY] == '.')
        {
            calculateScore();
        }
        maze[pacmanX][pacmanY] = ' ';
        gotoxy(pacmanY, pacmanX);
        cout << " ";
        pacmanX = pacmanX + 1;

        gotoxy(pacmanY, pacmanX);
        cout << "P";
    }
}

int ghostDirection()
{
    srand(time(0));
    int result = 1 + (rand() % 4);
    return result;
}

bool ghostMovement()
{
    int value = ghostDirection();
    if (value == 1)
    {
        if (maze[ghostX][ghostY - 1] == ' ' || maze[ghostX][ghostY - 1] == '.' || maze[ghostX][ghostY - 1] == 'P')
        {
            if (maze[ghostX][ghostY] == 'P')
            {
                return 0;
            }
            else if (maze[ghostX][ghostY] == '.')
            {
                gotoxy(ghostY, ghostX);
                cout << maze[ghostX][ghostY];
                ghostY = ghostY - 1;

                gotoxy(ghostY, ghostX);
                cout << "G";
            }
            else
            {
                gotoxy(ghostY, ghostX);
                cout << " ";
                ghostY = ghostY - 1;

                gotoxy(ghostY, ghostX);
                cout << "G";
            }
        }
    }
    if (value == 2)
    {
        if (maze[ghostX][ghostY + 1] == ' ' || maze[ghostX][ghostY + 1] == '.' || maze[ghostX][ghostY + 1] == 'P')
        {
            if (maze[ghostX][ghostY] == 'P')
            {
                return 0;
            }
            else if (maze[ghostX][ghostY] == '.')
            {
                gotoxy(ghostY, ghostX);
                cout << maze[ghostX][ghostY];
                ghostY = ghostY + 1;

                gotoxy(ghostY, ghostX);
                cout << "G";
            }
            else
            {
                gotoxy(ghostY, ghostX);
                cout << " ";
                ghostY = ghostY + 1;

                gotoxy(ghostY, ghostX);
                cout << "G";
            }
        }
    }
    if (value == 3)
    {
        if (maze[ghostX - 1][ghostY] == ' ' || maze[ghostX - 1][ghostY] == '.' || maze[ghostX - 1][ghostY] == 'P')
        {
            if (maze[ghostX][ghostY] == 'P')
            {
                return 0;
            }
            else if (maze[ghostX][ghostY] == '.')
            {
                gotoxy(ghostY, ghostX);
                cout << maze[ghostX][ghostY];
                ghostX = ghostX - 1;

                gotoxy(ghostY, ghostX);
                cout << "G";
            }
            else
            {
                gotoxy(ghostY, ghostX);
                cout << " ";
                ghostX = ghostX - 1;

                gotoxy(ghostY, ghostX);
                cout << "G";
            }
        }
    }
    if (value == 4)
    {
        if (maze[ghostX + 1][ghostY] == ' ' || maze[ghostX + 1][ghostY] == '.' || maze[ghostX + 1][ghostY] == 'P')
        {
            if (maze[ghostX][ghostY] == 'P')
            {
                return 0;
            }
            else if (maze[ghostX][ghostY] == '.')
            {
                gotoxy(ghostY, ghostX);
                cout << maze[ghostX][ghostY];
                ghostX = ghostX + 1;

                gotoxy(ghostY, ghostX);
                cout << "G";
            }
            else
            {
                gotoxy(ghostY, ghostX);
                cout << " ";
                ghostX = ghostX + 1;

                gotoxy(ghostY, ghostX);
                cout << "G";
            }
        }
    }
    return 1;
}
int ghost_one_Direction()
{
    srand(time(0));
    int result = 1 + (rand() % 2);
    return result;
}
bool vertical_movement()
{
    int value = ghost_one_Direction();

    if (maze[ghostX_V - 1][ghostY_V] != '#' && value == 1)
    {
        if (maze[ghostX][ghostY] == 'P')
        {
            return 0;
        }
        else if (maze[ghostX_V - 1][ghostY_V] == ' ' || maze[ghostX_V - 1][ghostY_V] == '.' || maze[ghostX_V - 1][ghostY_V] == 'P')
        {
            if (maze[ghostX_V][ghostY_V] == '.')
            {
                gotoxy(ghostY_V, ghostX_V);
                cout << maze[ghostX_V][ghostY_V];
                ghostX_V = ghostX_V - 1;

                gotoxy(ghostY_V, ghostX_V);
                cout << "G";
            }
            else
            {
                gotoxy(ghostY_V, ghostX_V);
                cout << " ";
                ghostX_V = ghostX_V - 1;

                gotoxy(ghostY_V, ghostX_V);
                cout << "G";
            }
        }
    }
    else
    {
        if (maze[ghostX_V + 1][ghostY_V] == ' ' || maze[ghostX_V + 1][ghostY_V] == '.' || maze[ghostX_V + 1][ghostY_V] == 'P')
        {
            if (maze[ghostX][ghostY] == 'P')
            {
                return 0;
            }
            else if (maze[ghostX_V][ghostY_V] == '.')
            {
                gotoxy(ghostY_V, ghostX_V);
                cout << maze[ghostX_V][ghostY_V];
                ghostX_V = ghostX_V + 1;

                gotoxy(ghostY_V, ghostX_V);
                cout << "G";
            }
            else
            {
                gotoxy(ghostY_V, ghostX_V);
                cout << " ";
                ghostX_V = ghostX_V + 1;

                gotoxy(ghostY_V, ghostX_V);
                cout << "G";
            }
        }
    }

    return 1;
}
bool horizontal_movement()
{
    int value = ghost_one_Direction();

    if (maze[ghostX_H][ghostY_H - 1] != '#' && value == 1)
    {
        if (maze[ghostX_H][ghostY_H - 1] == ' ' || maze[ghostX_H][ghostY_H - 1] == '.' || maze[ghostX_H][ghostY_H - 1] == 'P')
        {
            if (maze[ghostX][ghostY] == 'P')
            {
                return 0;
            }
            else if (maze[ghostX_H][ghostY_H] == '.')
            {
                gotoxy(ghostY_H, ghostX_H);
                cout << maze[ghostX_H][ghostY_H];
                ghostY_H = ghostY_H - 1;

                gotoxy(ghostY_H, ghostX_H);
                cout << "G";
            }
            else
            {
                gotoxy(ghostY_H, ghostX_H);
                cout << " ";
                ghostY_H = ghostY_H - 1;

                gotoxy(ghostY_H, ghostX_H);
                cout << "G";
            }
        }
    }
    else
    {
        if (maze[ghostX_H][ghostY_H + 1] == ' ' || maze[ghostX_H][ghostY_H + 1] == '.' || maze[ghostX_H][ghostY_H + 1] == 'P')
        {
            if (maze[ghostX][ghostY] == 'P')
            {
                return 0;
            }
            else if (maze[ghostX_H][ghostY_H] == '.')
            {
                gotoxy(ghostY_H, ghostX_H);
                cout << maze[ghostX_H][ghostY_H];
                ghostY_H = ghostY_H + 1;

                gotoxy(ghostY_H, ghostX_H);
                cout << "G";
            }
            else
            {
                gotoxy(ghostY_H, ghostX_H);
                cout << " ";
                ghostY_H = ghostY_H + 1;

                gotoxy(ghostY_H, ghostX_H);
                cout << "G";
            }
        }
    }

    return 1;
}
bool specific_movement()
{
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
//----------------file--------------------------
void store_maze()
{
    fstream file;
    file.open("maze_store.txt", ios::out);
    {
        for (int i = 0; i < 24; i++)
        {
            for (int j = 0; j < 71; j++)
            {
                file << maze[i][j];
            }
            file << endl;
        }
    }
    file.close();
}
void load_maze()
{
    fstream file;
    string line;
    file.open("maze.txt", ios::in);
    for (int rows = 0; rows < 24; rows++)
    {
        getline(file, line);
        for (int col = 0; col < 71; col++)
        {
            file >> maze[rows][col];
        }
    }
}
void printScore()
{
    gotoxy(75, 0);
    cout << "score: " << score;
}

void calculateScore()
{
    score = score + 1;
}
