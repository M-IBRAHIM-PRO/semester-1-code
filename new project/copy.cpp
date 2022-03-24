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

void winner_header();

//______________________movement______________________________
bool moveright();
bool moveleft();
bool moveup();
bool movedown();

int enemyDirection();
bool enemyMovement();

bool move_E_right();

//_____________________file___________________________________
void load_file();
void store_in_file();
//______________________over__________________________________
void over_header();

//____________________fire____________________________________
void fire();
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
void display_board(char array[26][58]);

//-----------------------arrays-------------------------------------
char maze_1[26][58] = {
    {"|-------------------------------------------------------|"},
    {"|                                                       |"},
    {"#########################################################"},
    {"#     %       $                                         #"},
    {"########################################!__!#############"},
    {"#                                       !  !            #"},
    {"#####################!__!################################"},
    {"#>                   !  !  $                            #"},
    {"########################################!__!#############"},
    {"#                                       !  !            #"},
    {"###################################!__!##################"},
    {"#                                  !  !                 #"},
    {"##############################################!__!#######"},
    {"#        &                                    !  !      #"},
    {"#############!__!########################################"},
    {"#            !  !                                       #"},
    {"############################!__!#########################"},
    {"#                           !  !                 $      #"},
    {"#######!__!##############################################"},
    {"# &    !  !                                            <#"},
    {"###############!__!######################################"},
    {"#             &!  !                                $    #"},
    {"####################################!__!#################"},
    {"#               &                   !  !           $    #"},
    {"#########################################################"}};

string maze_1_d[26];
int score_players[20];
//-----------------------varaibles----------------------------------
//__________________position of player___________________________
int playerX = 30;
int playerY = 26;

//_________________position of enemy____________________________
int enemy_1X = 16;
int enemy_1Y = 23;

int enemy_2X = 14;
int enemy_2Y = 21;

int enemy_3X = 9;
int enemy_3Y = 15;

int enemy_4X = 9;
int enemy_4Y = 13;
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
        // add to array of score.
        score_players[score_entry_counter] = counter;
        score_entry_counter++;

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
void winner_header()
{
    system("cls");
    gotoxy(5, 5);
    cout << "__________________________" << endl;
    cout << "*    WINNWER!!!          *" << endl;
    cout << "*________________________*" << endl;
    counter = 0; // resett score;
    life = 3;    // reset life.
    system("pause");
    system("cls");
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
void display_board(char array[26][58])
{
    for (int i = 0; i < 26; i++)
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
    if (maze_1[playerX][playerY + 1] == ' ' || maze_1[playerX][playerY + 1] == '$' || maze_1[playerX][playerY + 1] == '&' || maze_1[playerX][playerY + 1] == '!' || maze_1[playerX][playerY + 1] == '<' || maze_1[playerX][playerY + 1] == '>')
    {
        if (maze_1[playerX][playerY + 1] == '$')
        {
            counter++;
            score1();
        }
        if (maze_1[playerX][playerY + 1] == '&' || maze_1[playerX][playerY + 1] == '>' || maze_1[playerX][playerY + 1] == '<')
        {
            move_end = 1;
            playerX = 30;
            playerY = 25;
            over_header();
        }
        if (maze_1[playerX][playerY] != '!')
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
            maze_1[playerX][playerY] = '!';
            gotoxy(playerY, playerX);
            cout << "!";
            playerY = playerY + 1;

            gotoxy(playerY, playerX);
            cout << "P";
        }
    }
    return move_end;
}
bool moveleft()
{
    bool move_end = 0;
    if (maze_1[playerX][playerY - 1] == ' ' || maze_1[playerX][playerY - 1] == '$' || maze_1[playerX][playerY - 1] == '&' || maze_1[playerX][playerY - 1] == '!' || maze_1[playerX][playerY - 1] == '<' || maze_1[playerX][playerY - 1] == '>')
    {
        if (maze_1[playerX][playerY - 1] == '$')
        {
            counter++;
            score1();
        }
        if (maze_1[playerX][playerY - 2] == '%' && counter == 5)
        {
            move_end = 1;
            playerX = 30;
            playerY = 25;
            winner_header();
        }
        else if (counter < 5)
        {
            gotoxy(60, 7);
            cout << "Left : " << 5 - counter;
        }
        if (maze_1[playerX][playerY - 1] == '&' || maze_1[playerX][playerY - 1] == '>' || maze_1[playerX][playerY - 1] == '<')
        {
            move_end = 1;
            playerX = 30;
            playerY = 25;
            over_header();
        }
        if (maze_1[playerX][playerY] != '!' || maze_1[playerX][playerY - 2] == '%')
        {
            maze_1[playerX][playerY] = ' ';
            gotoxy(playerY, playerX);
            cout << " ";
            playerY = playerY - 1;

            gotoxy(playerY, playerX);
            cout << "P";
        }
        else
        {
            maze_1[playerX][playerY] = '!';
            gotoxy(playerY, playerX);
            cout << "!";
            playerY = playerY - 1;

            gotoxy(playerY, playerX);
            cout << "P";
        }
    }
    return move_end;
}

bool moveup()
{
    bool move_end = 0;
    if (maze_1[playerX - 1][playerY] == '_' || maze_1[playerX - 1][playerY] == ' ' || maze_1[playerX - 1][playerY] == '&' || maze_1[playerX - 1][playerY] == '>' || maze_1[playerX - 1][playerY] == '<')
    {
        if (maze_1[playerX - 1][playerY] == '&' || maze_1[playerX - 1][playerY] == '>' || maze_1[playerX - 1][playerY] == '<')
        {
            move_end = 1;
            playerX = 30;
            playerY = 25;
            over_header();
        }
        if (maze_1[playerX - 1][playerY] != '_')
        {
            maze_1[playerX][playerY] = ' ';
            gotoxy(playerY, playerX);
            cout << " ";
            playerX = playerX - 1;

            gotoxy(playerY, playerX);
            cout << "P";
        }
        else
        {
            maze_1[playerX][playerY] = '_';
            maze_1[playerX][playerY] = ' ';
            gotoxy(playerY, playerX);
            cout << " ";
            playerX = playerX - 1;

            gotoxy(playerY, playerX);
            cout << "P";
        }
    }
    return move_end;
}
bool movedown()
{
    bool move_end = 0;
    if (maze_1[playerX + 1][playerY] == ' ' || maze_1[playerX + 1][playerY] == '>' || maze_1[playerX + 1][playerY] == '>' || maze_1[playerX + 1][playerY] == '_')
    {
        if (maze_1[playerX + 1][playerY] == '&' || maze_1[playerX + 1][playerY] == '<' || maze_1[playerX + 1][playerY] == '>')
        {
            move_end = 1;
            playerX = 30;
            playerY = 25;
            over_header();
        }
        if (maze_1[playerX + 1][playerY] != '_')
        {
            maze_1[playerX][playerY] = ' ';
            gotoxy(playerY, playerX);
            cout << " ";
            playerX = playerX + 1;

            gotoxy(playerY, playerX);
            cout << "P";
        }
        else
        {
            maze_1[playerX][playerY] = '_';
            gotoxy(playerY, playerX);
            cout << "_";
            playerX = playerX + 1;

            gotoxy(playerY, playerX);
            cout << "P";
        }
    }
    return move_end;
}

//______________________enemy movement________________________
bool move_E_right()
{
    bool move_end = 0;
    if (maze_1[enemy_1X][enemy_1Y + 1] == ' ' || maze_1[enemy_1X][enemy_1Y + 1] == '$' || maze_1[enemy_1X][enemy_1Y + 1] == '!' || maze_1[enemy_1X][enemy_1Y + 1] == '<' || maze_1[enemy_1X][enemy_1Y - 1] == '>')
    {
        if (maze_1[enemy_1X][enemy_1Y + 1] == 'P')
        {
            move_end = 1;
            playerX = 30;
            playerY = 25;
            over_header();
        }
        maze_1[enemy_1X][enemy_1Y] = ' ';
        gotoxy(enemy_1Y, enemy_1X);
        cout << " ";
        enemy_1Y = enemy_1Y + 1;

        gotoxy(enemy_1Y, enemy_1X);
        cout << "&";

        // maze_1[enemy_1X][enemy_1Y] = '!';
        // gotoxy(enemy_1Y, enemy_1X);
        // cout << "!";
        // enemy_1Y = enemy_1Y + 1;

        // gotoxy(enemy_1Y, enemy_1X);
        // cout << "&";
        return move_end;
    }
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
    gotoxy(2, 1);
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
    cout << "3.Press up arrow to move up." << endl;
    cout << "4.Press down arrow key to move down." << endl;
    cout << endl;
}

//______________________fire

//______________________play___________________________________
void play()
{
    system("cls");

    load_file();

    playerX = 23;
    playerY = 23;
    gotoxy(60, 7);
    cout << "Left : " << 5 - counter;
    gotoxy(playerX, playerY);
    cout << 'P';
    gotoxy(enemy_1X, enemy_1Y);
    cout << '&';

    // gotoxy(enemy_2X, enemy_2Y);
    // cout << '&';
    // gotoxy(enemy_3X, enemy_3Y);
    // cout << '&';
    // gotoxy(enemy_4X, enemy_4Y);
    // cout << '&';

    score1();
    gotoxy(18, 1);
    cout << "Life : " << life;
    health = 3;
    gotoxy(38, 1);
    cout << "Health : ";
    for (int i = 0; i < health; i++)
    {
        cout << "|";
    }
    bool e_1 = 0;
    bool result = 0;
    while (1)
    {
        for (int time = 0; time < 10; time++)
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < 58; j++)
                {
                    if (maze_1[i][j] == '<' && maze_1[i][j - 1] == ' ')
                    {
                        maze_1[i][j] = ' ';
                        maze_1[i][j - 1] = '<';
                        gotoxy(j - 1, i);
                        cout << "<";
                        gotoxy(j - 1, i);
                        cout << " ";
                    }
                    else if (maze_1[i][j] == '<' && maze_1[i][j - 1] == '!')
                    {
                        maze_1[i][j] = ' ';
                        gotoxy(55, 19);
                        cout << "<";
                        maze_1[19][55] = '<';
                    }
                }
            }
            if (e_1 == 1)
            {
                break;
            }
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
            if (GetAsyncKeyState(VK_UP))
            {
                result = moveup();
                if (result)
                {
                    break;
                }
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                result = movedown();
                if (result)
                {
                    break;
                }
            }
            if (kbhit)
            {
                char ch = getch();
            }
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                break;
            }
        }
    }

    e_1 = move_E_right();
}
void play_at_health_decrease()
{
    system("cls");
    display_maze(1);

    score1();
    gotoxy(18, 1);
    cout << "Life : " << life;
    gotoxy(38, 1);
    cout << "Health : ";
    for (int i = 0; i < health; i++)
    {
        cout << "|";
    }
    playerX = 23;
    playerY = 23;
    gotoxy(playerY, playerX);
    cout << 'P';
    bool result = 0;
    while (1)
    {
        // fire
        for (int time = 0; time < 10; time++)
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < 58; j++)
                {
                    if (maze_1[i][j] == '<' && maze_1[i][j - 1] == ' ')
                    {
                        maze_1[i][j] = ' ';
                        maze_1[i][j - 1] = '<';
                        gotoxy(j - 1, i);
                        cout << "<";
                        gotoxy(j - 1, i);
                        cout << " ";
                    }
                    else if (maze_1[i][j] == '<' && maze_1[i][j - 1] == '!')
                    {
                        maze_1[i][j] = ' ';
                        gotoxy(55, 19);
                        cout << "<";
                        maze_1[19][55] = '<';
                    }
                }
            }
        }
        result = move_E_right();
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
        if (GetAsyncKeyState(VK_UP))
        {
            result = moveup();
            if (result)
            {
                break;
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            result = movedown();
            if (result)
            {
                break;
            }
        }
        if (kbhit)
        {
            char ch = getch();
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
    }
}

//______________________enemy movement_______________
int enemyDirection()
{
    // srand(time(0));
    // int result = 1 + (rand() % 2);
    // return result;
    int result = 1;
    return result;
}
bool enemyMovement()
{
    int value = enemyDirection();
    if (value == 1)
    {
        if (maze_1[enemy_1X][enemy_1Y - 1] == ' ' || maze_1[enemy_1X][enemy_1Y - 1] == '$' || maze_1[enemy_1X][enemy_1Y - 1] == 'P' || maze_1[enemy_1X][enemy_1Y - 1] == '!')
        {
            if (maze_1[enemy_1X][enemy_1Y] == 'P')
            {
                return 1;
            }
            else if (maze_1[enemy_1X][enemy_1Y] == '$' || maze_1[enemy_1X][enemy_1Y] == '!')
            {
                gotoxy(enemy_1Y, enemy_1X);
                cout << maze_1[enemy_1X][enemy_1Y];
                enemy_1Y = enemy_1Y - 1;

                gotoxy(enemy_1Y, enemy_1X);
                cout << "&";
            }
            else
            {
                gotoxy(enemy_1Y, enemy_1X);
                cout << " ";
                enemy_1Y = enemy_1Y - 1;

                gotoxy(enemy_1Y, enemy_1X);
                cout << "&";
            }
        }
    }
    if (value == 2)
    {
        if (maze_1[enemy_1X][enemy_1Y + 1] == ' ' || maze_1[enemy_1X][enemy_1Y + 1] == '$' || maze_1[enemy_1X][enemy_1Y + 1] == 'P' || maze_1[enemy_1X][enemy_1Y + 1] == '!')
        {
            if (maze_1[enemy_1X][enemy_1Y] == 'P')
            {
                return 1;
            }
            else if (maze_1[enemy_1X][enemy_1Y] == '$' || maze_1[enemy_1X][enemy_1Y] == '!')
            {
                gotoxy(enemy_1Y, enemy_1X);
                cout << maze_1[enemy_1X][enemy_1Y];
                enemy_1Y = enemy_1Y + 1;

                gotoxy(enemy_1Y, enemy_1X);
                cout << "&";
            }
            else
            {
                gotoxy(enemy_1Y, enemy_1X);
                cout << " ";
                enemy_1Y = enemy_1Y + 1;

                gotoxy(enemy_1Y, enemy_1X);
                cout << "&";
            }
        }
    }
    return 0;
}
//_______________________file_____________________________________
void load_file()
{
    fstream file;
    string line;
    int i = 0;
    file.open("maze.txt", ios::in);
    for (int i = 0; i < 26; i++)
    {
        getline(file, line);
        for (int j = 0; j < 58; j++)
        {
            maze_1[i][j] = line[j];
        }
    }
    file.close();
    for (int i = 0; i < 26; i++)
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
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 58; j++)
        {
            file << maze_1[i][j];
        }
        file << endl;
    }
}
//-----------------------end of functions--------------------------