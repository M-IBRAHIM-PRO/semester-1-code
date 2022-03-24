#include <iostream>
#include <stdlib.h>
using namespace std;
char current_marker;
int current_player;
char matrix[3][3] = {{' ', ' ', ' '},
                     {' ', ' ', ' '},
                     {' ', ' ', ' '}};

void board();
bool place_marker(int slot);
int checking();
void swap_turns();
void game();

main()
{
    system("color 03");
    game();
}
void board()
{
    cout << matrix[0][0] << " | " << matrix[0][1] << " | " << matrix[0][2] << endl;
    cout << "---------" << endl;
    cout << matrix[1][0] << " | " << matrix[1][1] << " | " << matrix[1][2] << endl;
    cout << "---------" << endl;
    cout << matrix[2][0] << " | " << matrix[2][1] << " | " << matrix[2][2] << endl;
}
bool place_marker(int slot)
{
    // for rows
    int row, column;
    if (slot % 3 == 0)
    {
        row = (slot / 3) - 1;
        column = 2;
    }
    else
    {
        row = slot / 3;
        column = slot % 3 - 1;
    }
    if (matrix[row][column] != 'O' || matrix[row][column] != 'X')
    {
        matrix[row][column] = current_marker;
        return true;
    }
    else
    {
        return false;
    }
}
bool checkRows(char symbol)
{
    int count = 0;
    for (int row = 0; row < gridSize; row = row + 1)
    {
        count = 0;
        for (int col = 0; col < gridSize; col = col + 1)
        {
            if (board[row][col] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == gridSize)
        {
            return 1;
        }
    }
    return 0;
}
bool checkColumns(char symbol)
{
    int count = 0;
    for (int col = 0; col < gridSize; col = col + 1)
    {
        count = 0;
        for (int row = 0; row < gridSize; row = row + 1)
        {
            if (matrix[row][col] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == gridSize)
        {
            return 1;
        }
    }
    return 0;
}
bool checkDiagonals(char symbol)
{
    int count = 0;
    for (int idx = 0; idx < 3; idx = idx + 1)
    {
        if (matrix[idx][idx] == symbol)
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
        if (matrix[row][col] == symbol)
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
bool isWinner(char symbol)
{
    if (checkRows(symbol) || checkColumns(symbol) || checkDiagonals(symbol))
    {
        return 1;
    }
    else
    {
        return 0;
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
void game()
{
    cout << "player 1, choose your marker: ";

    char marker_p1;
    cin >> marker_p1;
    current_player = 1;
    current_marker = marker_p1;
    board();
    int winner;
    for (int i = 0; i < 9; i++)
    {
        cout << "Player " << current_player << " turn." << endl;
        cout << "Enter your box number : ";
        int slot;
        cin >> slot;
        if (slot < 1 || slot > 9)
        {
            cout << "You can only select boxes from one to nine";
            i--;
            continue;
        }
        if (place_marker(slot) == false)
        {
            cout << "The box is already ocuppied choose any other";
            i--;
            continue;
        }

        winner = checking();
        if (winner == 1)
        {
            cout << "Player one won.";
            break;
        }
        if (winner == 2)
        {
            cout << "Player two won.";
            break;
        }
        board();
        swap_turns();
    }
    if (winner = 0)
    {
        cout << "Tie!";
    }
}