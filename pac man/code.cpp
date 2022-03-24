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
    {"||..     ......... |%|.        P    |%|......|%|        ..    |%|.  ||"},
    {"||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.  ||"},
    {"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||"},
    {"||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||"},
    {"||..|%|            .           ...|%|               |%| ..|%|.      ||"},
    {"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
    {"||...............................................   |%| ..........  ||"},
    {"||   ............................................          .......  ||"},
    {"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.      ||"},
    {"||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.      ||"},
    {"||..|%|            .     G     ...|%|               |%| ..|%|.      ||"},
    {"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||"},
    {"||...............................................   |%| ..........  ||"},
    {"||  .............................................          .......  ||"},
    "#####################################################################"};
//------------prototypes------------

//------game section------
void display_maze();
void end_game();

//---------file------------
void store_maze();
void load_maze();

//------pacman section------
void move_left();
void move_right();
void move_up();
void move_down();

//------gost section------
void ghost_movement();
void ghost_move_left();
void ghost_move_right();
void ghost_move_up();
void ghost_move_down();
void gotoxy(int x, int y);

//------------variables-------------
int pacmanX = 9;
int pacmanY = 31;
bool over = 0;

int score = 0;

int ghostX = 19; // X Coordinate of Ghost
int ghostY = 25; // Y Coordinate of Ghost
main()
{
    // load_maze();
    while (true)
    {
        Sleep(0);
        system("cls");
        cout << "                                                             Score : " << score << endl;
        cout << endl;
        display_maze();
        ghost_movement();
        if (over == 1)
        {
            cout << "Score : " << score << endl;
            cout << " over " << endl;
            // store_maze();
            break;
        }
        else
        {
            if (GetAsyncKeyState(VK_LEFT))
            {
                move_left();
            }
            else if (GetAsyncKeyState(VK_RIGHT))
            {
                move_right();
            }
            else if (GetAsyncKeyState(VK_UP))
            {
                move_up();
            }
            else if (GetAsyncKeyState(VK_DOWN))
            {
                move_down();
            }
        }
        // else if (GetAsyncKeyState(VK_ESCAPE))
        // {
        //     end_game();
        // }
    }

    // display_maze();
}
void display_maze()
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
void move_left()
{
    if (maze[pacmanX][pacmanY - 1] != '|' && maze[pacmanX][pacmanY - 1] != '#' && maze[pacmanX][pacmanY - 1] != '%')
    {
        if (maze[pacmanX][pacmanY - 1] == '.')
        {
            maze[pacmanX][pacmanY - 1] = ' ';
            score++;
        }
        swap(maze[pacmanX][pacmanY - 1], maze[pacmanX][pacmanY]);
        pacmanY = pacmanY - 1;
    }
}
void move_right()
{
    if (maze[pacmanX][pacmanY + 1] != '|' && maze[pacmanX][pacmanY + 1] != '#' && maze[pacmanX][pacmanY + 1] != '%')
    {
        if (maze[pacmanX][pacmanY + 1] == '.')
        {
            maze[pacmanX][pacmanY + 1] = ' ';
            score++;
        }
        swap(maze[pacmanX][pacmanY + 1], maze[pacmanX][pacmanY]);
        pacmanY = pacmanY + 1;
    }
}
void move_up()
{
    if (maze[pacmanX - 1][pacmanY] != '|' && maze[pacmanX - 1][pacmanY] != '#' && maze[pacmanX - 1][pacmanY] != '%')
    {
        if (maze[pacmanX - 1][pacmanY] == '.')
        {
            maze[pacmanX - 1][pacmanY] = ' ';
            score++;
        }
        swap(maze[pacmanX - 1][pacmanY], maze[pacmanX][pacmanY]);
        pacmanX = pacmanX - 1;
    }
}
void move_down()
{
    if (maze[pacmanX + 1][pacmanY] != '|' && maze[pacmanX + 1][pacmanY] != '#' && maze[pacmanX + 1][pacmanY] != '%')
    {
        if (maze[pacmanX + 1][pacmanY] == '.')
        {
            maze[pacmanX + 1][pacmanY] = ' ';
            score++;
        }
        swap(maze[pacmanX + 1][pacmanY], maze[pacmanX][pacmanY]);
        pacmanX = pacmanX + 1;
    }
}

void ghost_movement()
{
    int result;
    srand(time(0));
    result = 1 + (rand() % 4);
    if (result == 1)
    {
        if (maze[ghostX][ghostY] != 'P')
        {
            ghost_move_left();
        }
        else
        {
            over = 1;
        }
    }
    else if (result == 2)
    {
        if (maze[ghostX][ghostY] != 'P')
        {
            ghost_move_right();
        }
        else
        {
            over = 1;
        }
    }
    else if (result == 3)
    {
        if (maze[ghostX][ghostY] != 'P')
        {
            ghost_move_up();
        }
        else
        {
            over = 1;
        }
    }
    else if (result == 4)
    {
        if (maze[ghostX][ghostY] != 'P')
        {
            ghost_move_down();
        }
        else
        {
            over = 1;
        }
    }
}
void ghost_move_left()
{
    if (maze[ghostX][ghostY - 1] != '|' && maze[ghostX][ghostY - 1] != '#' && maze[ghostX][ghostY - 1] != '%')
    {
        // if (maze[ghostX][ghostY - 1] == '.')
        // {
        //     maze[ghostX][ghostY - 1] = ' ';
        // }
        swap(maze[ghostX][ghostY - 1], maze[ghostX][ghostY]);
        ghostY = ghostY - 1;
    }
}
void ghost_move_right()
{
    if (maze[ghostX][ghostY + 1] != '|' && maze[ghostX][ghostY + 1] != '#' && maze[ghostX][ghostY + 1] != '%')
    {
        // if (maze[ghostX][ghostY + 1] == '.')
        // {
        //     maze[ghostX][ghostY + 1] = ' ';
        // }
        swap(maze[ghostX][ghostY + 1], maze[ghostX][ghostY]);
        ghostY = ghostY + 1;
    }
}
void ghost_move_up()
{
    if (maze[ghostX - 1][ghostY] != '|' && maze[ghostX - 1][ghostY] != '#' && maze[ghostX - 1][ghostY] != '%')
    {
        // if (maze[ghostX - 1][ghostY] == '.')
        // {
        //     maze[ghostX - 1][ghostY] = ' ';
        // }
        swap(maze[ghostX - 1][ghostY], maze[ghostX][ghostY]);
        ghostX = ghostX - 1;
    }
}
void ghost_move_down()
{
    if (maze[ghostX + 1][ghostY] != '|' && maze[ghostX + 1][ghostY] != '#' && maze[ghostX + 1][ghostY] != '%')
    {
        // if (maze[ghostX + 1][ghostY] == '.')
        // {
        //     maze[ghostX + 1][ghostY] = ' ';
        // }
        swap(maze[ghostX + 1][ghostY], maze[ghostX][ghostY]);
        ghostX = ghostX + 1;
    }
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
