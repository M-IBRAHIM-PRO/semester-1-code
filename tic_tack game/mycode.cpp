#include <iostream>
#include <conio.h>
using namespace std;
//-------prototypes-------
void draw_board();
bool place_marker(int slot);
void game();
void swap_turns();
bool isWinner(int current_player);
int checkRows(int current_player);
int checkColumns(int current_player);
int checkDiagonals(int current_player);
void clear_screen();
void header();
void end();

//-------global variables----
char current_marker;
int current_player;

char game_board[3][3] = {{' ', ' ', ' '},
                         {' ', ' ', ' '},
                         {' ', ' ', ' '}};
main()
{
    game();
    // header();
    // cout << endl;
    // end();
}
void header()
{
    cout << " ______________________________________________________________________________" << endl;
    cout << "|%%%%%%   %%   %%%%%    %%%%%%      %%       %%%%%%   %%%%%%   %%%%%%   %%%%%% |" << endl;
    cout << "|  %%     %%   %%    ___  %%     %%     %%   %%    ___  %%     %%  %%   %%____ |" << endl;
    cout << "|  %%     %%   %%         %%     %%%%%%%%%   %%         %%     %%  %%   %%     |" << endl;
    cout << "|  %%     %%   %%%%%      %%     %%     %%   %%%%%%     %%     %%%%%%   %%%%%% |" << endl;
    cout << "|______________________________________________________________________________|" << endl;
}
void end()
{
    cout << " ________________________________________________" << endl;
    cout << "|     %%%%%%   %%     %%   %%%%%   %%%%%%        |" << endl;
    cout << "|     %%  %%    %%   %%    %%___   %%     %%     |" << endl;
    cout << "|     %%  %%     %% %%     %%      %%%%%%%       |" << endl;
    cout << "|     %%%%%%      %%       %%%%%   %%     %%     |" << endl;
    cout << "|________________________________________________|" << endl;
}
void draw_board()
{
    cout << " \t-------------" << endl;
    cout << " \t| " << game_board[0][0] << " | " << game_board[0][1] << " | " << game_board[0][2] << " | " << endl;
    cout << " \t-------------" << endl;
    cout << " \t| " << game_board[1][0] << " | " << game_board[1][1] << " | " << game_board[1][2] << " | " << endl;
    cout << " \t-------------" << endl;
    cout << " \t| " << game_board[2][0] << " | " << game_board[2][1] << " | " << game_board[2][2] << " | " << endl;
    cout << " \t-------------" << endl;
}
bool place_marker(int slot)
{
    bool result = false;
    int row, column;
    if (slot % 3 == 0)
    {
        row = (slot / 3) - 1; // 9/3-1
        column = 2;
    }
    else
    {
        row = slot / 3;        //
        column = slot % 3 - 1; //
    }
    if (game_board[row][column] != 'X' && game_board[row][column] != 'O')
    {
        game_board[row][column] = current_marker;
        result = true;
    }
    return result;
}
void game()
{
    header();
    cout << endl;
    cout << endl;
    cout << endl;
    draw_board();
    clear_screen();
    cout << "player 1, choose your marker: ";

    char marker_p1;
    cin >> marker_p1;
    // cout << endl;
    // clear_screen();
    if (marker_p1 != 'O' && marker_p1 != 'X')
    {
        while (marker_p1 != 'O' || marker_p1 != 'X')
        {
            cout << "You can only choose O or X as a marker" << endl;
            cout << "Choose again :" << endl;
            cin >> marker_p1;
            cout << endl;
            clear_screen();
            if (marker_p1 == 'O' || marker_p1 == 'X')
            {
                break;
            }
        }
    }
    current_player = 1;
    current_marker = marker_p1;

    bool winner;
    for (int i = 0; i < 9; i++)
    {
        cout << "Player " << current_player << " turn." << endl;
        cout << "Enter your box number : ";
        int slot;
        cin >> slot;
        cout << endl;
        clear_screen();
        if (slot < 1 || slot > 9)
        {
            cout << "You can only select boxes from one to nine";
            // cout << endl;
            // clear_screen();
            i--;
            continue;
        }
        if (place_marker(slot) == false)
        {
            cout << "The box is already ocuppied choose any other" << endl;
            // cout << endl;
            // clear_screen();
            i--;
            continue;
        }
        winner = isWinner(current_player);
        if (winner == 1)
        {
            draw_board();
            break;
        }
        draw_board();
        // cout << endl;
        // clear_screen();
        swap_turns();
    }
    if (winner != 1)
    {
        cout << "Tie" << endl;
    }
    cout << endl;
    clear_screen();
    end();
    cout << "Press A to play again or any other key to exit." << endl;
    char c;
    cin >> c;
    cout << endl;
    clear_screen();
    if (c == 'A')
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                game_board[i][j] = ' ';
            }
        }
        game();
    }
}
void swap_turns()
{
    if (current_player == 1)
    {
        current_player = 2;
    }
    else
    {
        current_player = 1;
    }
    if (current_marker == 'O')
    {
        current_marker = 'X';
    }
    else
    {
        current_marker = 'O';
    }
}
bool isWinner(int current_player)
{
    if (checkRows(current_player) == 1 || checkColumns(current_player) == 1 || checkDiagonals(current_player) == 1)
    {
        cout << "Player 1 won" << endl;
        return 1;
    }
    else if (checkRows(current_player) == 2 || checkColumns(current_player) == 2 || checkDiagonals(current_player) == 2)
    {
        cout << "Player 2 won" << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}
int checkRows(int current_player)
{
    int count = 0;
    for (int row = 0; row < 3; row = row + 1)
    {
        count = 0;
        for (int col = 0; col < 3; col = col + 1)
        {
            if (game_board[row][col] == current_marker)
            {
                count = count + 1;
            }
        }
        if (count == 3)
        {
            return current_player;
        }
    }
    return 0;
}
int checkColumns(int current_player)
{
    int count = 0;
    for (int col = 0; col < 3; col = col + 1)
    {
        count = 0;
        for (int row = 0; row < 3; row = row + 1)
        {
            if (game_board[row][col] == current_marker)
            {
                count = count + 1;
            }
        }
        if (count == 3)
        {
            return current_player;
        }
    }
    return 0;
}
int checkDiagonals(int current_player)
{
    int count = 0;
    for (int idx = 0; idx < 3; idx = idx + 1)
    {
        if (game_board[idx][idx] == current_marker)
        {
            count = count + 1;
        }
    }
    if (count == 3)
    {
        return 1;
    }
    count = 0;
    for (int row = 0, col = 2; row < 3; row++, col--)
    {
        if (game_board[row][col] == current_marker)
        {
            count = count + 1;
        }
    }
    if (count == 3)
    {
        return 1;
    }
    return 0;
}
void clear_screen()
{
    cout << "Press any key to continue.";
    getch();
    system("cls");
}