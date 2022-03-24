#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); // for gotoxy
COORD CursorPosition;

HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE); // for colour

//_________________PROTOTYPES_______________________
//-------------main menu & gotoxy
char main_menu();
void header();
void gotoxy(int x, int y);

//-----------------display
void display_board(char array[27][58]);

//----------------file load store
void load_from_file();
void store_in_file();

//----------------play
void play();

//----------------score
void calculateScore();
void score_display();

//----------------player movement
bool move_player_left();
void move_player_right();
void move_player_up();
void move_player_down();

//----------------enemy movement
void enemy_direction();
bool move_l_1();
bool move_r_1();

//----------------end of game
void over();

//------------instructions
void instructions();

//-------------------end
void end_header();

//--------------------------------------------------

//_________________VARIABLES _______________________
//-----------for break
bool result = 0;
//-----------postition of player
int playerX = 30;
int playerY = 25;

//----------position of enemy1
int enemy1_X = 2;
int enemy1_Y = 25;

//----------position of enemy2
int enemy2_X = 2;
int enemy2_Y = 23;

//----------position of enemy3
int enemy3_X = 26;
int enemy3_Y = 19;

//----------score
int score_counter = 0;

//--------------------------------------------------

//_________________ARRAYS    _______________________
char maze_1[27][58] = {
    {"#########################################################"},
    {"#  * % *      $                                         #"},
    {"########################################!_!           <<#"},
    {"#                                       !_!             #"},
    {"#                                       ! !             #"},
    {"#####################!_!#################################"},
    {"#>>                  ! !  $                             #"},
    {"########################################!_!##############"},
    {"#                                       ! !             #"},
    {"###########-^-^-^-^-^-^-^-^-^-^-^-#!_!####^-^-^-^-^-^-^-#"},
    {"#                                  ! !                  #"},
    {"#####################################################!_!#"},
    {"#                                                    ! !#"},
    {"#______________________________________________!_!#######"},
    {"#                                              ! !      #"},
    {"#############!_!#########################################"},
    {"#            !_!                                        #"},
    {"#            ! !                                        #"},
    {"#############################!_!#########################"},
    {"#                            ! !                 $      #"},
    {"#######!_!###############################################"},
    {"#      ! !                                            <<#"},
    {"################!_!######################################"},
    {"#               ! !                                $    #"},
    {"#####################################################!_!#"},
    {"# &      $                                           ! !#"},
    {"#########################################################"}};

//--------------------------------------------------

/////////////////////////// main ///////////////////////////
main()
{
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
            // score_board();
            system("pause");
        }
        else if (op == '4')
        {
            end_header();
            system("pause");
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

//_______________________functions__________________________________

//-------------main menu & gotoxy
void header()
{
    cout << endl;
    gotoxy(10, 5);
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

//-----------------display
void display_board(char array[27][58])
{
    for (int i = 0; i < 27; i++)
    {
        for (int j = 0; j < 58; j++)
        {
            cout << array[i][j];
        }
        cout << endl;
    }
}

//----------------file load store
void load_from_file()
{
    fstream file;
    string line;
    int i = 0;
    file.open("maze.txt", ios::in);
    for (int i = 0; i < 27; i++)
    {
        getline(file, line);
        for (int j = 0; j < 58; j++)
        {
            maze_1[i][j] = line[j];
        }
    }
    file.close();
    for (int i = 0; i < 27; i++)
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
    for (int i = 0; i < 27; i++)
    {
        for (int j = 0; j < 58; j++)
        {
            file << maze_1[i][j];
        }
        file << endl;
    }
}
//----------------play
void score_display()
{
    gotoxy(62, 5);
    cout << "score : " << score_counter;
}
void play()
{
    system("cls");

    load_from_file();
    score_display();
    gotoxy(playerX, playerY);
    cout << 'P';
    gotoxy(enemy1_X, enemy1_Y);
    cout << '&';
    // gotoxy(enemy2_X, enemy2_Y);
    // cout << '&';
    // gotoxy(enemy3_X, enemy3_Y);
    // cout << '&';
    enemy_direction();

    // display_board(maze_1);
    // score1();
    gotoxy(60, 7);
    // cout << "Life : " << life;
    // health = 3;
    gotoxy(60, 9);
    // cout << "Health : " << health;
    bool result = 1;
    while (1)
    {
        // result = move_l_1;
        // result = move_r_1;
        // enemy_direction();
        if (GetAsyncKeyState(VK_LEFT))
        {
            result = move_player_left();
            if (result == 0)
            {
                break;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            move_player_right();
            // if (result == 0)
            // {
            //     break;
            // }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            // result = moveup();
            if (result == 0)
            {
                break;
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            // put condition to move only in case of starirs
            // result = movedown();
            if (result == 0)
            {
                break;
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
        // if (kbhit)
        // {
        //     char ch = getch();
        //     if (ch == 'l' || ch == 'L')
        //     {
        //         result = jump_left();
        //         if (result)
        //         {
        //             break;
        //         }
        //     }
        //     if (ch == 'r' || ch == 'R')
        //     {
        //         result = jump_right();
        //         if (result)
        //         {
        //             break;
        //         }
        //     }
        // }
    }
}

//---------------score
void calculateScore()
{
    score_counter++;
}
bool move_player_left()
{
    bool move_end = 0;
    if (maze_1[playerX][playerY - 1] == ' ' || maze_1[playerX][playerY - 1] == '$' || maze_1[playerX][playerY - 1] == '&')
    {
        if (maze_1[playerX][playerY - 1] == '$')
        {
            calculateScore();
        }
        if (maze_1[playerX][playerY - 1] == '&')
        {
            move_end = 1;
            playerX = 30;
            playerY = 25;
            // over_header();
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

void move_player_right()
{
    if (maze_1[playerX][playerY + 1] == ' ' || maze_1[playerX][playerY + 1] == '$' || maze_1[playerX][playerY + 1] == '!')
    {
        if (maze_1[playerX][playerY + 1] == '$')
        {
            calculateScore();
        }
        if (maze_1[playerX][playerY - 1] != '!')
        {
            maze_1[playerX][playerY] = ' ';
            gotoxy(playerY, playerX);
            cout << " ";
            playerY = playerY + 1;
            gotoxy(playerY, playerX);
            cout << "P";
        }
        else
        {
            maze_1[playerX][playerY] = ' ';
            gotoxy(playerY, playerX);
            cout << "!";
            playerY = playerY + 1;
            gotoxy(playerY, playerX);
            cout << "P";
        }
    }
}

void move_player_up()
{
    //     if (maze[playerX - 1][playerY] == ' ' || maze[playerX - 1][playerY] == '.')
    //     {
    //         if (maze[playerX - 1][playerY] == '.')
    //         {
    //             calculateScore();
    //         }
    //         maze[playerX][playerY] = ' ';
    //         gotoxy(playerY, playerX);
    //         cout << " ";
    //         playerX = playerX - 1;

    //         gotoxy(playerY, playerX);
    //         cout << "P";
    // }
}

void move_player_down()
{
    // if (maze[playerX + 1][playerY] == ' ' || maze[playerX + 1][playerY] == '.')
    // {
    //     if (maze[playerX + 1][playerY] == '.')
    //     {
    //         calculateScore();
    //     }
    //     maze[playerX][playerY] = ' ';
    //     gotoxy(playerY, playerX);
    //     cout << " ";
    //     playerX = playerX + 1;

    //     gotoxy(playerY, playerX);
    //     cout << "P";
    // }
}
//---------------------enemy movement
void enemy_direction()
{
    bool value = 0;
    bool value_1 = 0;
    if (value == 0)
    {
        value_1 = move_l_1();
        if (value_1 == 1)
        {
            value = 1;
        }
    }
    else if (value == 1)
    {
        value_1 = move_r_1();
        if (value_1 == 0)
        {
            value = 0;
        }
    }
}
bool move_l_1()
{
    if (maze_1[enemy1_X - 1][enemy1_Y] == ' ' || maze_1[enemy1_X - 1][enemy1_Y] == '$' || maze_1[enemy1_X - 1][enemy1_Y] == 'P')
    {
        if (maze_1[enemy1_X][enemy1_Y] == 'P')
        {
            result = 0;
        }
        else if (maze_1[enemy1_X][enemy1_Y] == '$')
        {
            gotoxy(enemy1_Y, enemy1_X);
            cout << maze_1[enemy1_X][enemy1_Y];
            enemy1_X = enemy1_X - 1;

            gotoxy(enemy1_Y, enemy1_X);
            cout << "&";
        }
        else
        {
            gotoxy(enemy1_Y, enemy1_X);
            cout << " ";
            enemy1_X = enemy1_X - 1;

            gotoxy(enemy1_Y, enemy1_X);
            cout << "&";
        }
    }
}
bool move_r_1()
{
    char pre;
    bool direction_complete = 1;
    if (maze_1[enemy1_X + 1][enemy1_Y] == ' ' || maze_1[enemy1_X + 1][enemy1_Y] == '$' || maze_1[enemy1_X + 1][enemy1_Y] == 'P')
    {
        maze_1[enemy1_X][enemy1_Y] = pre;
        gotoxy(enemy1_X, enemy1_Y);
        if (maze_1[enemy1_X][enemy1_X] == '$')
        {
            cout << '$';
        }
        else
        {
            cout << ' ';
        }
        enemy1_X++;
        pre = maze_1[enemy1_X][enemy1_Y];
        if (maze_1[enemy1_X][enemy1_Y] == 'P')
        {
            result = 1;
        }
        if (maze_1[enemy1_X + 1][enemy1_Y] == '#')
        {
            direction_complete = 0;
            return direction_complete;
        }
        maze_1[enemy1_X][enemy1_Y] = 'G';
        gotoxy(enemy1_X, enemy1_Y);
        cout << 'G';
    }
}
//---------------------instructions
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

//-------------------score update and score board

//-------------------end
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
}
