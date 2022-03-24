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
    {"||..|%|            .     G     ...|%|               |%| ..|%|.      ||"},
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
void ghost_movement();
bool ghost_move_left();
bool ghost_move_right();
bool ghost_move_up();
bool ghost_move_down();
char previousItem;

int ghostDirection();
void gotoxy(int x, int y);
int ghostX = 19; // X Coordinate of Ghost
int ghostY = 25; // Y Coordinate of Ghost
bool over = 0;
main()
{
    while (true)
    {
        ghost_movement();
    }
}
void ghost_movement()
{
    int result;
    // srand(time(0));
    // result = 1 + (rand() % 4);
    result = 1;
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
bool ghost_move_left()
{
    if (maze[ghostX][ghostY - 1] == ' ' || maze[ghostX][ghostY - 1] == '.')
    {
        maze[ghostX][ghostY] = previousItem;
        ghostY = ghostY - 1;
        previousItem = maze[ghostX][ghostY];
        // if (previousItem == 'P')
        // {
        //     // return 0;
        // }
        maze[ghostX][ghostY] = 'G';
    }
}
bool ghost_move_right()
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
bool ghost_move_up()
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
bool ghost_move_down()
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