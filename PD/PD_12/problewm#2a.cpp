#include <iostream>
using namespace std;
// prototypes
string parse(string array, int field);
void add_matrix(int martix_1[], int martix_2[]);
void subtract_matrix(int martix_1[], int martix_2[]);
void multiply_matrix(int martix_1[], int martix_2[]);
void transpose_of_matrix(int martix_1[]);
void display_matrix(int martix_1[]);
void scalar_multiplication(int martix_1[], int value);
void is_identity(int martix_1[]);
void is_diagonal(int martix_1[]);

// variables
string i_string;
int a_array[9] = {};
int b_array[9] = {};
main()
{
    string A, B, OP;
    char c;
    cout << "Enter nine elements for each matrix." << endl;
    cout << "Enter A : ";
    cin >> A;
    for (int i = 1; i <= 9; i++)
    {
        i_string = parse(A, i);
        int element = stoi(i_string);
        a_array[i - 1] = element;
        // cout << "element " << i << "= " << a_array[i - 1] << endl;
    }

    cout << "Enter B : ";
    cin >> B;
    for (int i = 1; i <= 9; i++)
    {
        i_string = parse(B, i);
        int element = stoi(i_string);
        b_array[i - 1] = element;
        // cout << "element " << i << "= " << b_array[i - 1] << endl;
    }
    cout << "Enter operation which you want to perform : ";
    cin >> OP;
    cout << "Do you want to perform more operations ? (press any key for more operations except n)" << endl;
    cin >> c;
    if (c != 'n')
    {
        while (true)
        {
            cout << "Enter operation which you want to perform : ";
            cin >> OP;
            cout << "Do you want to perform more operations ? (press any key for more operations except n)";
            cin >> c;
            if (c == 'n')
            {
                break;
            }
        }
    }
    if (OP == "A+B" || OP == "a+b")
    {
        add_matrix(a_array, b_array);
    }
    else if (OP == "A-B" || OP == "a-b")
    {
        subtract_matrix(a_array, b_array);
    }
    else if (OP == "B-A" || OP == "b-a")
    {
        subtract_matrix(b_array, a_array);
    }
    else if (OP == "A*B" || OP == "a*b")
    {
        multiply_matrix(a_array, b_array);
    }
    else if (OP == "B*A" || OP == "b*a")
    {
        multiply_matrix(b_array, a_array);
    }
    int index=0;
    else if(OP[index]=="scalar")
}

string parse(string array, int field)
{
    int commansCount = 1;
    string item;
    int index = 0;
    while (true)
    {

        char ch = array[index];
        if (ch == '\0')
            return item;
        if (ch == ',')
        {
            commansCount++;
        }
        else if (commansCount == field)
        {
            item = item + ch;
        }
        index++;
    }
    return item;
}
