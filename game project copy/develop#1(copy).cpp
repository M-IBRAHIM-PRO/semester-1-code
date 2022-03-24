#include <iostream>
#include <conio.h>
#include <direct.h>
#include <windows.h>
#include <time.h>
#include <fstream>

//--------------measurements of screeen-------------
int const SCREEN_WIDTH = 90;
int const SCREEN_HEIGHT = 26 - 2;
int const WIN_WIDTH = 70;

using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

//--------------GLOBAL ARRAYS---------------
int enemyY[3];              // Y COORDINATE
int enemyX[3];              // X COORDINATE
int enemyFlag[3];           // NUMBER OF ENEMEIES
int score_players[20] = {}; // for leader board

//-----------------global variables-------------------
int game_count = 0;         // How many times game is played.
int carPos = WIN_WIDTH / 2; // POSITION OF CAR IN SCREEN
int score = 0;              // SCORE COUNTER

//-------------------for levels--------------------------
bool level_1 = true;
bool level_2 = false;
bool level_3 = false;

//___________prototypes________________________

//------------for file handling----------------
void load_score();
void store_score(int score_game);

//------for concole setting--------------------
void gotoxy(int x, int y);
void setcursor(bool visible, DWORD size);

//---------for structure of game--------------
void drawBorder();

//-------------------------ENEMY SECTION-------------------------------
void genEnemy(int ind);
void drawEnemy(int ind);
void eraseEnemy(int ind);
void resetEnemy(int ind);

//-----------------------CAR SECTION-----------------------------------
void drawCar();
void eraseCar();

//---------------------for collision and over--------------------------
int collision();
void gameover();

//-------------------instructions------------------------------
void instructions();

//-----------------for play--------------------------
void play1();

//-------for score display --------------------
bool updateScore();
void add_score_array(int score);
void Sort(int list[], int length);
void lar_num(int list[], int array_size);

////////////////////////////////////////////////////////////////
main()
{
    load_score();
    setcursor(0, 0);
    srand((unsigned)time(NULL));

    while (true)
    {

        // gotoxy(10, 5);//gotoxy(10, 6); //gotoxy(10, 7);//gotoxy(10, 9);
        SetConsoleTextAttribute(color, 10);
        system("cls");
        cout << " ___________________________________________________________________  " << endl;
        cout << " |  %%%%%    %%     %%%%%       %%%%%       %%     %%    %%  %%%%%  | " << endl;
        cout << " |  %%      %% %%   %%  %%      %%         %% %%   %% %% %%  %%___  | " << endl;
        cout << " |  %%     %%%%%%%  %%%%%   ___ %% %%%%%  %%%%%%%  %% %  %%  %%     | " << endl;
        cout << " |  %%%%% %%     %% %%  %%      %%%%% %% %%     %% %%    %%  %%%%%  | " << endl;
        cout << " |__________________________________________________________________|  " << endl;
        cout << endl;
        cout << endl;
        SetConsoleTextAttribute(color, 4);
        cout << "1. Play Game" << endl;
        // gotoxy(10, 10);
        cout << "2. Instructions" << endl;
        cout << "3. Score board" << endl;
        // gotoxy(10, 11);
        cout << "4. Quit" << endl;
        // gotoxy(10, 13);
        SetConsoleTextAttribute(color, 7);
        cout << endl;
        cout << "Your option: ";
        char op = getche();
        cout << endl;
        system("pause");

        if (op == '1')
        {
            play1();
        }
        else if (op == '2')
            instructions();
        else if (op == '3')
        {
            cout.setf(ios::left);
            system("cls");
            if (score_players[0] != NULL)
            {
                lar_num(score_players, game_count);
                cout << endl;
                cout << "Score Board (Desending Order) : " << endl;
                cout << endl;
                Sort(score_players, game_count);
                if (game_count < 20)
                {
                    for (int i = 0; i < game_count; i++)
                    {
                        cout.width(2);
                        cout << i + 1;
                        // cout.width(5);
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
                        // cout.width(5);
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
        else if (op == '4')
        {
            system("cls");
            cout << endl;
            gotoxy(10, 5);
            SetConsoleTextAttribute(color, 10);
            system("cls");
            cout << " _______________________________  " << endl;
            cout << " |  %%%%%  %%     %%  %%%%%     | " << endl;
            cout << " |  %%___  %% %%  %%  %%   %%   | " << endl;
            cout << " |  %%     %%% %% %%  %%   %%   | " << endl;
            cout << " |  %%%%%  %%     %%  %%%%%     | " << endl;
            cout << " |______________________________|  " << endl;
            cout << endl;
            cout << endl;
            SetConsoleTextAttribute(color, 15);
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
}
//-------------------body of functioms---------------------------
void gotoxy(int x, int y)
{
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}
void setcursor(bool visible, DWORD size)
{
    if (size == 0)
        size = 20;

    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, &lpCursor);
}

//-----------------for structure-----------------
void drawBorder()
{
    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        for (int j = 0; j < 17; j++) // C 17 IMP
        {
            gotoxy(0 + j, i);
            if (level_1 == true)
            {
                SetConsoleTextAttribute(color, 2);
                cout << "±";
                gotoxy(70 - j, i);
                SetConsoleTextAttribute(color, 2);
                cout << "±";
            }
            else if (level_2 == true)
            {
                SetConsoleTextAttribute(color, 3);
                cout << "±";
                gotoxy(70 - j, i);
                SetConsoleTextAttribute(color, 3);
                cout << "±";
            }
            else if (level_3 == true)
            {
                SetConsoleTextAttribute(color, 4);
                cout << "±";
                gotoxy(70 - j, i);
                SetConsoleTextAttribute(color, 4);
                cout << "±";
            }
        }
    }
    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(90, i);
        cout << "±";
    }
}

//-------------------------ENEMY SECTION-------------------------------
void genEnemy(int ind)
{
    enemyX[ind] = 17 + rand() % 33; // C 17 IMP
}
void drawEnemy(int ind)
{
    if (enemyFlag[ind] == true)
    {
        if (level_1 = true)
        {
            gotoxy(enemyX[ind], enemyY[ind]);
            SetConsoleTextAttribute(color, 4);
            cout << "****";
            gotoxy(enemyX[ind], enemyY[ind] + 1);
            SetConsoleTextAttribute(color, 4);
            cout << " ** ";
            gotoxy(enemyX[ind], enemyY[ind] + 2);
            SetConsoleTextAttribute(color, 4);
            cout << "****";
            gotoxy(enemyX[ind], enemyY[ind] + 3);
            SetConsoleTextAttribute(color, 4);
            cout << " ** ";
        }
        else if (level_2 = true)
        {
            gotoxy(enemyX[ind], enemyY[ind]);
            SetConsoleTextAttribute(color, 14);
            cout << "****";
            gotoxy(enemyX[ind], enemyY[ind] + 1);
            SetConsoleTextAttribute(color, 14);
            cout << " ** ";
            gotoxy(enemyX[ind], enemyY[ind] + 2);
            SetConsoleTextAttribute(color, 14);
            cout << "****";
            gotoxy(enemyX[ind], enemyY[ind] + 3);
            SetConsoleTextAttribute(color, 14);
            cout << " ** ";
        }
        else if (level_3 = true)
        {
            gotoxy(enemyX[ind], enemyY[ind]);
            SetConsoleTextAttribute(color, 15);
            cout << "****";
            gotoxy(enemyX[ind], enemyY[ind] + 1);
            SetConsoleTextAttribute(color, 15);
            cout << " ** ";
            gotoxy(enemyX[ind], enemyY[ind] + 2);
            SetConsoleTextAttribute(color, 15);
            cout << "****";
            gotoxy(enemyX[ind], enemyY[ind] + 3);
            SetConsoleTextAttribute(color, 15);
            cout << " ** ";
        }
    }
}
void eraseEnemy(int ind)
{
    if (enemyFlag[ind] == true)
    {
        gotoxy(enemyX[ind], enemyY[ind]);
        SetConsoleTextAttribute(color, 0);
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 1);
        SetConsoleTextAttribute(color, 0);
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 2);
        SetConsoleTextAttribute(color, 0);
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 3);
        SetConsoleTextAttribute(color, 0);
        cout << "    ";
    }
}
void resetEnemy(int ind)
{
    eraseEnemy(ind);
    enemyY[ind] = 1;
    genEnemy(ind);
}

//-------------------------car section----------------------------------
void drawCar()
{
    SetConsoleTextAttribute(color, 1);
    gotoxy(carPos, 22);
    cout << " ";
    gotoxy(1 + carPos, 22);
    cout << "C";
    gotoxy(2 + carPos, 22);
    cout << "C";
    gotoxy(3 + carPos, 22);
    cout << " ";
    // second line of car
    gotoxy(carPos, 23);
    cout << "C";
    gotoxy(1 + carPos, 23);
    cout << "C";
    gotoxy(2 + carPos, 23);
    cout << "C";
    gotoxy(3 + carPos, 23);
    cout << "C";
    SetConsoleTextAttribute(color, 15);
}
void eraseCar()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gotoxy(j + carPos, i + 22);
            SetConsoleTextAttribute(color, 0);
            cout << " ";
        }
    }
}

//------------------------FOR COLLISION AND OVER-----------------------
int collision()
{
    int result = 0;
    if (enemyY[0] + 4 >= 23)
    {
        if (enemyX[0] + 4 - carPos >= 0 && enemyX[0] + 4 - carPos < 9)
        {
            result = 1;
        }
    }
    return result;
}
void gameover()
{
    system("cls");
    cout << endl;
    SetConsoleTextAttribute(color, 6);
    cout << "\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "\t\t\t%%%%%%%%   Game Over  %%%%%%%" << endl;
    cout << "\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << endl;
    SetConsoleTextAttribute(color, 10);
    cout << "\t\t\tYour score : " << score << endl;
    add_score_array(score);
    store_score(score);
    // cout << "just for checking " << endl;
    // for (int i = 0; i < 1; i++)
    // {
    //     cout << score_players[i] << " ";
    // }
    cout << endl;
    cout << "\t\t\t________________________________" << endl;
    cout << "\t\t\tPress any key to go back to menu.";
    getch();
}
//------------------------SCORE PORTION--------------------------------
bool updateScore()
{
    gotoxy(70 + 7, 5);
    SetConsoleTextAttribute(color, 6);
    cout << "Score: " << score << endl;
    // static bool f = 1;
    if (score == 5)
    {
        system("cls");
        cout << "level 1 completed !" << endl;
        getch();
        system("cls");
        level_1 = false;
        level_2 = true;
        // f = 0;
        // return 1;
    }
    else if (15 > score > 5)
    {
        system("cls");
        cout << "level 2 completed !" << endl;
        level_2 = false;
        level_3 = true;
    }
    // return 1;
}
void add_score_array(int score)
{
    score_players[game_count] = score;
    game_count++;
}

//------------------------instructions----------------------------------
void instructions()
{
    system("cls");
    SetConsoleTextAttribute(color, 15);
    cout << "Instructions";
    cout << "\n----------------";
    SetConsoleTextAttribute(color, 10);
    cout << "\n Avoid Cars by moving left or right. ";
    cout << "\n\n Press 'a' to move left";
    cout << "\n Press 'd' to move right";
    cout << "\n Press 'escape' to exit";
    cout << "\n\nPress any key to go back to menu";
    getch();
}

//------------------------play logic------------------------------------
void play1()
{
    system("cls");
    // static bool f = 0;
    updateScore();

    // cout << "in f ";
    // system("pause");
    // drawBorder();

    carPos = -1 + WIN_WIDTH / 2;
    score = 0;
    enemyFlag[0] = 1;
    enemyFlag[1] = 0;
    enemyY[0] = enemyY[1] = 1;

    drawBorder();
    genEnemy(0);
    genEnemy(1);

    gotoxy(WIN_WIDTH + 7, 2);
    SetConsoleTextAttribute(color, 10);
    cout << "Car Game";
    gotoxy(WIN_WIDTH + 6, 4);
    cout << "----------";
    gotoxy(WIN_WIDTH + 6, 6);
    SetConsoleTextAttribute(color, 10);
    cout << "----------";
    gotoxy(WIN_WIDTH + 7, 12);
    cout << "Control ";
    gotoxy(WIN_WIDTH + 7, 13);
    cout << "-------- ";
    gotoxy(WIN_WIDTH + 2, 14);
    cout << " A Key - Left";
    gotoxy(WIN_WIDTH + 2, 15);
    cout << " D Key - Right";

    gotoxy(18, 5);
    SetConsoleTextAttribute(color, 7);
    cout << "Press any key to start";
    getch();
    gotoxy(18, 5);
    SetConsoleTextAttribute(color, 0);
    cout << "                      ";
    SetConsoleTextAttribute(color, 15);
    while (1)
    {
        if (kbhit())
        {
            char ch = getch();
            if (ch == 'a' || ch == 'A')
            {
                if (carPos > 18)
                    carPos -= 4;
            }
            if (ch == 'd' || ch == 'D')
            {
                if (carPos < 50)
                    carPos += 4;
            }
            if (ch == 27)
            {
                break;
            }
        }

        drawCar();
        drawEnemy(0);
        drawEnemy(1);
        if (collision() == 1)
        {
            gameover();
            return;
        }
        Sleep(40);
        eraseCar();
        eraseEnemy(0);
        eraseEnemy(1);

        if (enemyY[0] == 10)
            if (enemyFlag[1] == 0)
                enemyFlag[1] = 1;

        if (enemyFlag[0] == 1)
            enemyY[0] += 1;

        if (enemyFlag[1] == 1)
            enemyY[1] += 1;

        if (enemyY[0] > SCREEN_HEIGHT - 4)
        {
            resetEnemy(0);
            score++;
            updateScore();
        }
        if (enemyY[1] > SCREEN_HEIGHT - 4)
        {
            resetEnemy(1);
            score++;
            updateScore();
        }
    }
}

//------------------------file handling----------------------------------
void store_score(int score_game)
{
    fstream file;
    file.open("score.txt", ios::app);
    file << score_game << endl;
}
void load_score()
{
    int score_file;
    fstream file;
    file.open("score.txt", ios::in);
    while (!file.eof())
    {
        file >> score_file;
        if (file.eof())
        {
            break;
        }
        add_score_array(score_file);
    }
    file.close();
}

//------------------------others--------------------------------
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
