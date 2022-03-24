#include <iostream>
using namespace std;
main()
{
    int n1, n2, current, counter;
    int nth;
    cout << "Enter first two number you want to print fabonnachi series : ";
    cin >> n1 >> n2;
    cout << "First two terms of fabonnachi series : " << n1 << " " << n2 << endl;
    cout << "Enter  which term you want to print fabonnachi series : ";
    cin >> nth;
    if (nth == 1)
        current = n1;
    else if (nth == 2)
        current = n2;
    else
    {
        counter = 3;
        while (counter <= nth)
        {
            current = n2 + n1;
            n1 = n2;
            n2 = current;
            counter++;
        }
    }
    cout << "Number at n position : " << current;
}