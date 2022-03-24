#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <fstream>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); // for gotoxy
COORD CursorPosition;

HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE); // for colour

//-----------------------prototypes---------------------------------
//______________________headers_____________________________
void header();
void end_header();

//______________________movement______________________________
bool moveright();
bool moveleft();
bool jump_right();
bool jump_left();

bool move_E_left();
bool move_E_right();

//_____________________file___________________________________
void load_file();
void store_in_file();
//______________________over__________________________________
void gameover();
void over_header();

//_____________________play_________________________________
void play();

//_____________________instructions_________________________
void instructions();

//_____________________score________________________________
void score1();
void score_board();
void lar_num(int list[], int array_size);
void Sort(int list[], int length);

//_____________________life&health__________________________
int life = 3;
int health = 3;
void play_at_health_decrease();

//_____________________ main_menu___________________________
char main_menu();
void gotoxy(int x, int y);

//_____________________for display of levels________________
void display_maze(int level);
void display_board(char array[25][58]);

//-----------------------arrays-------------------------------------
char maze_1[25][58] = {
    {"#########################################################"},
    {"#  * % *      $                                         #"},
    {"#%%%%%%%%%%%%%%%                                        #"},
    {"#                        $                              #"},
    {"#                 %%%%%%%%%%%%%%%                       #"},
    {"#                                          $            #"},
    {"#>>                                 %%%%%%%%%%%%%%      #"},
    {"#                                                       #"},
    {"#                                                       #"},
    {"#               %%%%%%%%%%%%%%%                         #"},
    {"#                                                       #"},
    {"#      $                                                #"},
    {"#%%%%%%%%%%%%%%%                                      <<#"},
    {"#                                                       #"},
    {"#        &                               $              #"},
    {"#        %%%%%%%%%%%%%%%           %%%%%%%%%%%%%%%      #"},
    {"#                                                       #"},
    {"#                          $                            #"},
    {"#                    %%%%%%%%%%%%%%%                    #"},
    {"#                                                       #"},
    {"# &         $                                       $   #"},
    {"#%%%%%%%%%%%%%%%                         %%%%%%%%%%%%%%%#"},
    {"#                                                       #"},
    {"# &      $                                              #"},
    {"#########################################################"}};

string maze_1_d[25];
int score_players[20];
//-----------------------varaibles----------------------------------
//__________________position of player___________________________
int playerX = 23;
int playerY = 23;

//_________________position of enemy____________________________
int enemy_1X = 2;
int enemy_1Y = 23;

int enemy_2X = 2;
int enemy_2Y = 20;

int enemy_3X = 9;
int enemy_3Y = 14;

// int enemy_2X=
//_________________for scores____________________________________
int counter = 0;
int score_entry_counter = 0;

//------------------------main--------------------------------------
main()
{
    //----------------local variables--------------------------
    char op;

    store_in_file();
    while (1)
    {
        op = main_menu();
        if (op == '1')
        {
            play();
        }
        else if (op == '2')
        {
            system("cls");
            instructions();
            system("pause");
        }
        else if (op == '3')
        {
            system("cls");
            score_board();
        }
        else if (op == '4')
        {
            end_header();
            break;
        }
        else
        {
            system("cls");
            cout << "Enter a valid input." << endl;
            cout << endl;
            system("pause");
        }
    }
} //---------------------end of main--------------------------------

//-----------------------body of functions-------------------------

//_______________________headers___________________________________
void header()
{
    cout << endl;
    gotoxy(10, 5);
    // SetConsoleTextAttribute(color, 10);
    system("cls");
    cout << "  ____________________________________  " << endl;
    cout << " |  %%%%%     %%     %%    %%  %%%%%  | " << endl;
    cout << " |  %%      %%  %%   %% %% %%  %%___  | " << endl;
    cout << " |  %%  %%  %%%%%%%  %% %% %%  %%     | " << endl;
    cout << " |  %%%%%   %%   %%  %%    %%  %%%%%  | " << endl;
    cout << " |____________________________________| " << endl;
    cout << endl;
    cout << endl;
}
void end_header()
{
    system("cls");
    cout << endl;
    gotoxy(10, 5);
    // SetConsoleTextAttribute(color, 10);
    system("cls");
    cout << "  ______________________________  " << endl;
    cout << " |  %%%%%  %%     %%  %%%%%     | " << endl;
    cout << " |  %%___  %% %%  %%  %%   %%   | " << endl;
    cout << " |  %%     %%% %% %%  %%   %%   | " << endl;
    cout << " |  %%%%%  %%     %%  %%%%%     | " << endl;
    cout << " |______________________________| " << endl;
    cout << endl;
    cout << endl;
    // SetConsoleTextAttribute(color, 15);
    system("pause");
}
void over_header()
{
    if (life == 1 && health == 1)
    {
        system("cls");
        gotoxy(5, 5);
        // SetConsoleTextAttribute(color, 10);
        // system("cls");
        cout << endl;
        cout << "  ____________________________________________" << endl;
        cout << " |  %%%%%  %%      %%  %%%%%  %%%%%    %%%%%  | " << endl;
        cout << " |  %% %%   %%    %%   %%__   %%   %%  %%___  | " << endl;
        cout << " |  %% %%    %%  %%    %%     %% %%    %%     | " << endl;
        cout << " |  %%%%%      %%      %%%%%  %%   %%  %%%%%  | " << endl;
        cout << " |____________________________________________| " << endl;
        cout << endl;
        cout << endl;

        cout << " SCORE : " << counter;
        cout << endl;

        counter = 0; // resett score;
        life = 3;    // reset life.
        system("pause");
        system("cls");
    }
    else
    {
        if (health == 1)
        {
            life--;
            health = 4;
        }
        health--;
        play_at_health_decrease();
    }
}

//_____________________main_menu & gotoxy______________________________
char main_menu()
{
    char option;
    header();
    cout << "1.PLAY GAME" << endl;
    cout << "2.INSTRUCTIONS" << endl;
    cout << "3.SCORE BOARD" << endl;
    cout << "4.EXIT" << endl
         << endl;
    cout << "Your Option-------" << endl;
    cin >> option;
    return option;
}
void gotoxy(int x, int y)
{
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

//_____________________display levels_________________________________
void display_maze(int level)
{
    if (level == 1)
    {
        display_board(maze_1);
    }
}
void display_board(char array[25][58])
{
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 58; j++)
        {
            cout << array[i][j];
        }
        cout << endl;
    }
}

//______________________movement______________________________
bool moveright()
{
    bool move_end = 0;
    if (maze_1[playerX][playerY + 1] == ' ' || maze_1[playerX][playerY + 1] == '$' || maze_1[playerX][playerY - 1] == '&')
    {
        if (maze_1[playerX][playerY + 1] == '$')
        {
            counter++;
            score1();
        }
        if (maze_1[playerX][playerY + 1] == '&')
        {
            move_end = 1;
            playerX = 23;
            playerY = 23;
            over_header();
        }
        maze_1[playerX][playerY] = ' ';
        gotoxy(playerY, playerX);
        cout << " ";
        playerY = playerY + 1;

        gotoxy(playerY, playerX);
        cout << "P";
    }
    return move_end;
}
bool moveleft()
{
    bool move_end = 0;
    if (maze_1[playerX][playerY - 1] == ' ' || maze_1[playerX][playerY - 1] == '$' || maze_1[playerX][playerY - 1] == '&')
    {
        if (maze_1[playerX][playerY - 1] == '$')
        {
            counter++;
            score1();
        }
        if (maze_1[playerX][playerY - 1] == '&')
        {
            move_end = 1;
            playerX = 23;
            playerY = 23;
            over_header();
        }
        maze_1[playerX][playerY] = ' ';
        gotoxy(playerY, playerX);
        cout << " ";
        playerY = playerY - 1;

        gotoxy(playerY, playerX);
        cout << "P";
    }
    return move_end;
}
bool jump_left()
{
    bool move_end = 0;
    if (maze_1[playerX][playerY - 2] != '#' || maze_1[playerX][playerY - 1] != '#' && maze_1[playerX][playerY] != '%' || maze_1[playerX][playerY - 1] != '%')
    {
        if (maze_1[playerX - 3][playerY - 3] == ' ' || maze_1[playerX - 3][playerY - 3] == '$' || maze_1[playerX - 3][playerY - 3] == '&' || maze_1[playerX - 3][playerY - 3] == '>' || maze_1[playerX - 3][playerY - 3] == '<')
        {
            if (maze_1[playerX - 3][playerY - 3] == '$' || maze_1[playerX - 1][playerY] == '$' || maze_1[playerX + 1][playerY] == '$')
            {
                counter++;
            }
            if (maze_1[playerX - 3][playerY - 3] == '&' || maze_1[playerX - 1][playerY] == '&' || maze_1[playerX + 1][playerY] == '&')
            {
                move_end = 1;
                playerX = 23;
                playerY = 23;
                over_header();
            }

            maze_1[playerX][playerY] = ' ';
            gotoxy(playerX, playerY);
            cout << " ";
            char previous_loc = maze_1[playerX][playerY];

            playerX = playerX - 3;
            playerY = playerY - 3;

            char previous_loc_1 = maze_1[playerX][playerY];

            gotoxy(playerY, playerX);
            cout << "P";

            previous_loc = ' ';
        }
    }
    return move_end;
}
bool jump_right()
{
}

//______________________enemy movement________________________
bool move_E_right()
{
    bool move_end = 0;
    if (maze_1[playerX][playerY + 1] == ' ' || maze_1[playerX][playerY + 1] == '$' || maze_1[playerX][playerY - 1] == '&')
    {
        if (maze_1[playerX][playerY + 1] == '$')
        {
            counter++;
        }
        if (maze_1[playerX][playerY + 1] == '&')
        {
            move_end = 1;
            playerX = 23;
            playerY = 23;
            over_header();
        }
        maze_1[playerX][playerY] = ' ';
        gotoxy(playerY, playerX);
        cout << " ";
        playerY = playerY + 1;

        gotoxy(playerY, playerX);
        cout << "P";
    }
    return move_end;
}
bool move_E_left()
{
    bool move_end = 0;
    if (maze_1[playerX][playerY - 1] == ' ' || maze_1[playerX][playerY - 1] == '$' || maze_1[playerX][playerY - 1] == '&')
    {
        if (maze_1[playerX][playerY - 1] == '$')
        {
            counter++;
        }
        if (maze_1[playerX][playerY - 1] == '&')
        {
            move_end = 1;
            playerX = 23;
            playerY = 23;
            over_header();
        }
        maze_1[playerX][playerY] = ' ';
        gotoxy(playerY, playerX);
        cout << " ";
        playerY = playerY - 1;

        gotoxy(playerY, playerX);
        cout << "P";
    }
    return move_end;
}
//______________________score_________________________________
void score1()
{
    gotoxy(60, 5);
    cout << "Score :" << counter << "  ";
}
void score_board()
{
    cout.setf(ios::left);
    cout << "SCORE BOARD " << endl;
    cout << "___________________________________________________" << endl;
    cout << endl;
    cout << endl;
    if (score_players[0] != NULL)
    {
        lar_num(score_players, score_entry_counter);
        cout << endl;
        cout << endl;
        Sort(score_players, score_entry_counter);
        if (0 < score_entry_counter < 20)
        {
            for (int i = 0; i < score_entry_counter; i++)
            {
                cout.width(2);
                cout << i + 1;
                cout << ". ";
                cout.width(5);
                cout << score_players[i] << endl;
            }
        }
        else
        {
            for (int i = 0; i < 20; i++)
            {
                cout.width(2);
                cout << i + 1;
                cout << ". ";
                cout.width(5);
                cout << score_players[i] << endl;
            }
        }
    }
    else
    {
        cout << "No one has played game yet." << endl;
        cout << endl;
    }
    system("pause");
}
void lar_num(int list[], int array_size)
{
    int max_index = 0;
    for (int i = 0; i < array_size; i++)
    {
        if (list[i] > list[max_index])
        {
            max_index = i;
        }
    }
    SetConsoleTextAttribute(color, 1);
    cout << "Highest Score : " << list[max_index];
    SetConsoleTextAttribute(color, 15);
}
void Sort(int list[], int length)
{
    int index;
    int smallestIndex;
    int location;
    int temp;
    for (index = 0; index < length - 1; index++)
    {
        // Step a
        smallestIndex = index;
        for (location = index + 1; location < length; location++)
        {
            if (list[location] > list[smallestIndex])
            {
                smallestIndex = location;
            }
        }
        // Step b
        temp = list[smallestIndex];
        list[smallestIndex] = list[index];
        list[index] = temp;
    }
}

//_____________________instructions____________________________
void instructions()
{
    cout << "INSTRUCTIONS " << endl;
    cout << "___________________________________________________" << endl;
    cout << endl;
    cout << endl;
    cout << "1.Press right arrow key to move right." << endl;
    cout << "2.Press left arrow key to move left." << endl;
    cout << "3.Press (R) to jump right." << endl;
    cout << "4.Press (L) to jump left." << endl;
    cout << endl;
}

//______________________play___________________________________
void play()
{
    system("cls");

    load_file();

    playerX = 23;
    playerY = 23;
    gotoxy(playerX, playerY);
    cout << 'P';
    gotoxy(enemy_1X, enemy_1Y);
    cout << '&';
    gotoxy(enemy_2X, enemy_2Y);
    cout << '&';
    gotoxy(enemy_3X, enemy_3Y);
    cout << '&';

    // display_board(maze_1);
    score1();
    gotoxy(60, 7);
    cout << "Life : " << life;
    health = 3;
    gotoxy(60, 9);
    cout << "Health : " << health;
    bool result = 0;
    while (1)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            result = moveleft();
            if (result)
            {
                break;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            result = moveright();
            if (result)
            {
                break;
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
        if (kbhit)
        {
            char ch = getch();
            if (ch == 'l' || ch == 'L')
            {
                result = jump_left();
                if (result)
                {
                    break;
                }
            }
            if (ch == 'r' || ch == 'R')
            {
                result = jump_right();
                if (result)
                {
                    break;
                }
            }
        }
    }
}
void play_at_health_decrease()
{
    system("cls");
    display_maze(1);

    score1();
    gotoxy(60, 7);
    cout << "Life : " << life;
    gotoxy(60, 9);
    cout << "Health : " << health;
    playerX = 23;
    playerY = 23;
    gotoxy(playerY, playerX);
    cout << 'P';
    bool result = 0;
    while (1)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            result = moveleft();
            if (result)
            {
                break;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            result = moveright();
            if (result)
            {
                break;
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
        if (kbhit)
        {
            char ch = getch();
            if (ch == 'l' || ch == 'L')
            {
                jump_left();
            }
            if (ch == 'r' || ch == 'R')
            {
                jump_right();
            }
        }
    }
}

//_______________________file_____________________________________
void load_file()
{
    fstream file;
    string line;
    int i = 0;
    file.open("maze.txt", ios::in);
    for (int i = 0; i < 25; i++)
    {
        getline(file, line);
        for (int j = 0; j < 58; j++)
        {
            maze_1[i][j] = line[j];
        }
    }
    file.close();
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 58; j++)
        {
            cout << maze_1[i][j];
        }
        cout << endl;
    }
}
void store_in_file()
{
    fstream file;
    file.open("maze.txt", ios::out);
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 58; j++)
        {
            file << maze_1[i][j];
        }
        file << endl;
    }
}
//-----------------------end of functions--------------------------