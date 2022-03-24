#include <iostream>
using namespace std;
main()
{
    // int calBurnedInADay;
    // int calBurnedInAWeek;
    // int day;
    // day = 1;
    // calBurnedInAWeek = 0;
    // while (day <= 7)
    // {
    //     cout << "Enter calories burned day " << day << ": ";
    //     cin >> calBurnedInADay;
    //     cout << endl;

    //     calBurnedInAWeek = calBurnedInAWeek + calBurnedInADay;
    //     day = day + 1;
    // }
    // cout << "Average number of calories burned each day: "
    //      << calBurnedInAWeek / 7 << endl;

    // int i = 0;            // Line 1
    // while (i <= 20)       // Line 2
    // {                     // Line 3
    //     cout << i << " "; // Line 4
    //     i = i + 5;        // Line 5
    // }                     // Line 6
    // cout << endl;
    // for (int i = 1; i <= 5; i++)

    //     cout << "Hello!" << endl;
    // cout << "*" << endl;
    // for (int i = 1; i <= 20; i = i + 2)
    //     cout << " " << i;
    // cout << endl;
    // int i;
    // for (i = 1; i <= 10; i++)
    //     ;             // Line 1
    // cout << i << " "; // Line 2
    // cout << endl;
    // for (int i = 3; i < 102; i = i * 3)
    //     cout << i << " ";
    // int new_number;
    // int sum = 0;
    // for (int i = 1; i <= 5; i++)
    // {
    //     cin >> new_number;
    //     sum = sum + new_number;
    // }
    // cout << "Sum of numbers : " << sum << endl;
    // cout << "Ave : " << sum / 5;
    // int counter; // loop control variable Line 5
    // int sum;     // variable to store the sum of numbers Line 6
    // int N;       // variable to store the number of
    // // first positive integers to be added Line 7
    // cout << "Line 8: Enter the number of positive "
    //      << "integers to be added: ";          // Line 8
    // cin >> N;                                  // Line 9
    // sum = 0;                                   // Line 10
    // cout << endl;                              // Line 11
    // for (counter = 1; counter <= N; counter++) // Line 12
    //     sum = sum + counter;                   // Line 13
    // cout << "Line 14: The sum of the first " << N
    //      << " positive integers is " << sum
    //      << endl;
    // int i, j;
    // for (i = 5; i >= 1; i--)     // Line 1
    // {                            // Line 2
    //     for (j = 1; j <= i; j++) // Line 3
    //         cout << "*";         // Line 4
    //     cout << endl;            // Line 5
    // }
    // int num = 0;
    // int sum = 0;
    // cin >> num;
    // sum = num;
    // cout << "Out of loop";
    // while (num != -1)
    // {
    //     sum = sum + num * (num - 1);
    //     cin >> num;
    //     cout << "In loop sum : " << sum;
    // }
    // cout << "Sum = " << sum << endl;
    // int num1, num2;
    // int temp = 0;
    // cout << "Enter two integers: ";
    // cin >> num1 >> num2;
    // cout << endl;
    // while ((num1 + num2) % 2 != (num1 + num2) % 3)
    // {
    //     temp = num1 + num2;
    //     num1 = num2;
    //     num2 = temp;
    //     cout << temp << " ";
    // }
    // cout << " *" << endl;
    // int num;
    // int count = 0;
    // cin >> num;
    // while (num != -999)
    // {
    //     cout << num % (count + 1) << " ";
    //     cin >> num;
    //     count++;
    // }
    // cout << endl;
    // int count = 0;
    // cout << "Out loop";
    // int count = 0;
    // while (count < 5)
    // {
    //     cout << "Before" << count;
    //     cout << count + 1 << " ";
    //     count++;
    // }
    // cout << endl;
    // // int count = 5;
    // while (--count > 0)
    // {
    //     cout << "Before" << count;
    //     cout << 2 * count << " ";
    // }
    // cout << endl;
    // int count = 0;
    // while (count++ < 5)
    //     cout << (count - 1) * (count - 2) << " ";
    // cout << endl;
    // long long num = 5;
    // int i;
    // for (i = 1; i < 3; i++)
    // {
    //     cout << "Before" << num << endl;
    //     num = num + num * (num - i);
    //     cout << num << " ";
    // }
    // cout << endl;
    // int x = 19683;
    // int i;
    // int y = 0;
    // for (i = x; i >= 1; i = i / 3)
    // {
    //     y++;
    //     cout << "x = " << x << ", y = " << y << endl;
    // }
    // for (int k = 2; k <= 10000; k = k * k)
    // {
    //     cout << "Value of k after update : " << k << endl;
    //     cout << k << " " << endl;
    //     cout << "Value of k before update : " << k << endl;
    // }
    // cout << endl;
    // int j;
    // for (j = 0; j < 8; j++)
    // {
    //     cout << j * 25 << " - ";
    //     if (j != 7)
    //         cout << (j + 1) * 25 - 1 << endl;
    //     else
    //         cout << (j + 1) * 25 << endl;
    // }
    // int i, j;
    // for (i = 1; i <= 9; i++)
    // {
    //     for (j = 1; j <= (9 - i); j++)
    //     {
    //         cout << " ";
    //         cout << "Value of j after first inner loop " << endl;
    //     }
    //     for (j = 1; j <= i; j++)
    //         cout << j;
    //     for (j = (i - 1); j >= 1; j--)
    //         cout << j;
    //     cout << endl;
    // }
    int num = 12;
    while (num >= 0)
    {
        if (num % 5 == 0)
        {
            num++;
            continue;
        }
        cout << num << " ";
        num = num - 2;
    }
    cout << endl;
}