#include <iostream>
#include <stdlib.h>
using namespace std;
const int size = 3;
int Aarray[size][size];
int Barray[size][size];
int Carray[size][size];
void takeinput()
{
    while (true)
    {
        system("cls");
        cout << "Main Menu" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << endl;
        cout << "1 ENTER value of A matrix " << endl;
        cout << "2 ENTER value of B matrix " << endl;
        cout << "3 Calculations " << endl;
        cout << endl;
        cout << "Your Option-------" << endl;
        char option;
        cin >> option;
        system("pause");
        system("cls");
        int count = 1;
        if (option == '1')
        {
            cout << "matrix A " << endl;
            for (int Arow = 0; Arow < size; Arow++)
            {
                for (int Acol = 0; Acol < size; Acol++)
                {
                    cout << count << "value " << endl;
                    cin >> Aarray[Arow][Acol];
                    count++;
                    // system("cls");
                }
            }
            // ______________input a___________________
            cout << "matrix A " << endl;
            for (int Arow = 0; Arow < size; Arow++)
            {
                for (int Acol = 0; Acol < size; Acol++)
                {
                    if (Arow == 0 && Acol == 0)
                    {
                        cout << "{";
                    }
                    cout << Aarray[Arow][Acol] << ",";
                    if (Arow == size - 1 && Acol == size - 1)
                    {
                        cout << "\b";
                        cout << "}";
                    }
                }
            }
            cout << endl;
            system("pause");
        }
        else if (option == '2')
        {
            count = 1;
            cout << "matrix B " << endl;
            for (int Brow = 0; Brow < size; Brow++)
            {
                for (int Bcol = 0; Bcol < size; Bcol++)
                {
                    cout << count << " value " << endl;
                    cin >> Barray[Brow][Bcol];
                    count++;
                }
            }
            cout << "matrix B " << endl;
            for (int Brow = 0; Brow < size; Brow++)
            {
                for (int Bcol = 0; Bcol < size; Bcol++)
                {
                    if (Brow == 0 && Bcol == 0)
                    {
                        cout << "{";
                    }
                    cout << Barray[Brow][Bcol] << ",";
                    if (Brow == size - 1 && Bcol == size - 1)
                    {
                        cout << "\b";
                        cout << "}";
                    }
                }
            }
            cout << endl;
            system("pause");
        }
        else if (option == '3')
        {
            break;
        }
        else
        {
            cout << "Enter valid input" << endl;
            system("pause");
            system("cls");
        }
    }
}
void addition()
{
    cout.setf(ios::left);
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            Carray[row][col] = Aarray[row][col] + Barray[row][col];
            cout.width(5);
            cout << Carray[row][col];
        }
        cout << endl;
    }
    // cout << "C MATRIX " << endl;
    // for (int row = 0; row < size; row++)
    // {
    //     for (int col = 0; col < size; col++)
    //     {
    //         if (row == 0 && col == 0)
    //         {
    //             cout << "{";
    //         }
    //         cout << Carray[row][col] << ",";
    //         if (row == size - 1 && col == size - 1)
    //         {
    //             cout << "\b";
    //             cout << "}";
    //         }
    //     }
    // }
    cout << endl;
    system("pause");
}
void subtraction()
{
    cout.setf(ios::left);
    cout << "C MATRIX " << endl;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            Carray[row][col] = Aarray[row][col] - Barray[row][col];
            cout.width(5);
            cout << Carray[row][col];
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
}
void mulicpicationmatrices()
{
    cout.setf(ios::left);
    cout << "C MATRIX" << endl;
    int x = 0, sum = 0;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            //   Aarray[row][col]*Barray[col][row];
            for (int a = 0; a < size; a++)
            {
                Carray[row][col] = Aarray[row][a] * Barray[a][col];
                x = Carray[row][col] + sum;
                sum = x;
            }
            cout.width(5);
            cout << x;
            x = 0;
            sum = 0;
            // if (row == size - 1 && col == size - 1)
            // {
            //     cout << "\b";
            //     cout << "}";
            // }
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
}
void Identitya()
{
    int check = 0, yes = 0;
    for (int Arow = 0; Arow < size; Arow++)
    {
        for (int Acol = 0; Acol < size; Acol++)
        {
            if (Arow == Acol && Aarray[Arow][Acol] != 1)
            {
                check++;
                cout << "NOT an identity matrix" << endl;
                cout << endl;
                system("pause");
                system("cls");
                break;
            }
            if (Arow != Acol && Aarray[Arow][Acol] != 0)
            {
                cout << "Identity Matrix" << endl;
                check++;
                cout << endl;
                system("pause");
                system("cls");
                break;
            }
        }
        if (check != 0)
        {
            break;
        }
        else if (Arow == size - 1)
        {
            cout << "Identity Matrix" << endl;
            cout << endl;
            system("pause");
            system("cls");
        }
    }
}
void Identityb()
{
    int check = 0;
    for (int Brow = 0; Brow < size; Brow++)
    {
        for (int Bcol = 0; Bcol < size; Bcol++)
        {
            if (Brow == Bcol && Aarray[Brow][Bcol] != 1)
            {
                check++;
                cout << "NOT an Identity Matrix" << endl;
                cout << endl;
                system("pause");
                system("cls");
                break;
            }
            if (Brow != Bcol && Aarray[Brow][Bcol] != 0)
            {
                cout << "NOT an Identity Matrix" << endl;
                check++;
                cout << endl;
                system("pause");
                system("cls");
                break;
            }
        }
        if (check != 0)
        {
            break;
        }
        else if (Brow == size - 1)
        {
            cout << "Identity Matrix" << endl;
            cout << endl;
            system("pause");
            system("cls");
        }
    }
}
void transpose1()
{
    cout.setf(ios::left);
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {

            Carray[row][col] = Aarray[col][row];
            cout.width(5);
            cout << Carray[row][col];
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
}
void transpose2()
{
    cout.setf(ios::left);
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {

            Carray[row][col] = Barray[col][row];
            cout.width(5);
            cout << Carray[row][col];
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
}
void amatrixscalar()
{
    cout.setf(ios::left);
    cout << "Enter the scalar value" << endl;
    int value;
    cin >> value;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {

            Carray[row][col] = value * Aarray[row][col];
            cout.width(5);
            cout << Carray[row][col];
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
}
void bmatrixscalar()
{
    cout.setf(ios::left);
    cout << "Enter the scalar value" << endl;
    int value;
    cin >> value;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {

            Carray[row][col] = value * Barray[row][col];
            cout.width(5);
            cout << Carray[row][col];
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
}
void amatrixdiagonal()
{
    cout.setf(ios::left);
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (row == col)
            {
                Carray[row][col] = Aarray[row][col];
                cout.width(5);
                cout << Carray[row][col];
            }
            // if (row == size - 1 && col == size - 1)
            // {
            //     cout << "\b";
            //     cout << "}";
            // }
        }
    }
    cout << endl;
    system("pause");
    system("cls");
}
void bmatrixdiagonal()
{
    cout.setf(ios::left);
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            // if (row == 0 && col == 0)
            // {
            //     cout << "{";
            // }
            if (row == col)
            {
                Carray[row][col] = Barray[row][col];
                cout.width(5);
                cout << Carray[row][col];
            }
            // if (row == size - 1 && col == size - 1)
            // {
            //     cout << "\b";
            //     cout << "}";
            // }
        }
    }
    cout << endl;
    system("pause");
    system("cls");
}
void symmetrymatrixa()
{
    cout << "Transpose of matrix A" << endl;
    transpose1();
    int count = 0;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {

            if (Carray[row][col] != Aarray[row][col])
            {
                count++;
                cout << "NOT a Symmetric Matrix" << endl;
                cout << endl;
                system("pause");
                system("cls");
                break;
            }
        }
        if (count != 0)
        {
            break;
        }
        cout << endl;
    }
    if (count == 0)
    {
        cout << "Symmetric Matrix" << endl;
        cout << endl;
        system("pause");
        system("cls");
    }
}
void symmetrymatrixb()
{
    cout << "Transpose of matrix B" << endl;
    transpose2();
    int count = 0;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {

            if (Carray[row][col] != Barray[row][col])
            {
                count++;
                cout << "NOT a Symmetric Matrix" << endl;
                cout << endl;
                system("pause");
                system("cls");
                break;
            }
        }
        if (count != 0)
        {
            break;
        }
        cout << endl;
    }
    if (count == 0)
    {
        cout << "Symmetric Matrix" << endl;
        cout << endl;
        system("pause");
        system("cls");
    }
}

void performfunction()
{
    while (true)
    {
        system("cls");
        cout << "Operations" << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "1-Addition OF Matrices" << endl;
        cout << "2-Subtraction OF Matrices" << endl;
        cout << "3-Multiplication OF Matrices" << endl;
        cout << "4-Checking OF Identity" << endl;
        cout << "5-Scalar Multiplication OF Matrix" << endl;
        cout << "6-Transpose OF Matrix" << endl;
        cout << "7-Diagonal OF Matrix" << endl;
        cout << "8-Symmetric OF Matix" << endl;
        cout << "9-Exit" << endl;
        cout << endl;
        cout << "Your Option-------" << endl;
        char option;
        cin >> option;
        cout << endl;
        system("pause");
        if (option == '1')
        {
            system("cls");
            cout << "C=A+B" << endl;
            addition();
        }
        else if (option == '2')
        {
            system("cls");
            cout << "C=A-B" << endl;
            subtraction();
        }
        else if (option == '3')
        {
            system("cls");
            cout << "C=A*B" << endl;
            mulicpicationmatrices();
        }
        else if (option == '4')
        {
            system("cls");
            char matrix;
            cout << "1-MATRIX A" << endl;
            cout << "2-MATRIX B" << endl;
            cout << endl;
            cout << "Your Option-------" << endl;
            cin >> matrix;

            if (matrix == '1')
            {
                system("cls");
                Identitya();
            }
            else if (matrix == '2')
            {
                system("cls");
                Identityb();
            }
            else
            {
                system("cls");
                cout << "wrong option" << endl;
                system("pause");
            }
        }
        else if (option == '6')
        {
            system("cls");
            cout << "Transpose of matrix" << endl;
            char matrix;
            cout << "1-MATRIX A" << endl;
            cout << "2-MATRIX B" << endl;
            cout << endl;
            cout << "Your Option-------" << endl;
            cin >> matrix;
            if (matrix == '1')
            {
                system("cls");
                transpose1();
            }
            else if (matrix == '2')
            {
                system("cls");
                transpose2();
            }
            else
            {
                cout << "wrong option" << endl;
                system("pause");
            }
        }
        else if (option == '5')
        {
            system("cls");
            cout << "Scalar muliplication of matrix" << endl;
            char matrix;
            cout << "1-MATRIX A" << endl;
            cout << "2-MATRIX B" << endl;
            cout << endl;
            cout << "Your Option-------" << endl;
            cin >> matrix;
            cout << endl;
            system("pause");
            if (matrix == '1')
            {
                system("cls");
                amatrixscalar();
            }
            if (matrix == '2')
            {
                system("cls");
                bmatrixscalar();
            }
        }
        else if (option == '7')
        {
            system("cls");
            cout << "Daigonal of matrix" << endl;
            char matrix;
            cout << "1-MATRIX A" << endl;
            cout << "2-MATRIX B" << endl;
            cout << endl;
            cout << "Your Option-------" << endl;
            cin >> matrix;
            system("pause");
            if (matrix == '1')
            {
                system("cls");
                amatrixdiagonal();
            }
            else if (matrix == '2')
            {
                system("cls");
                bmatrixdiagonal();
            }
        }
        else if (option == '8')
        {
            system("cls");
            cout << "Symmetry of matrix" << endl;
            char matrix;
            cout << "1-MATRIX A" << endl;
            cout << "2-MATRIX B" << endl;
            cout << endl;
            cout << "Your Option-------" << endl;
            cin >> matrix;
            system("pause");
            if (matrix == '1')
            {
                system("cls");
                symmetrymatrixa();
            }
            else if (matrix == '2')
            {
                system("cls");
                symmetrymatrixb();
            }
        }
        else if (option == '9')
        {
            break;
        }
        else
        {
            cout << "Enter valid option" << endl;
            system("pause");
        }
    }
}
int main()
{
    takeinput();
    performfunction();
}