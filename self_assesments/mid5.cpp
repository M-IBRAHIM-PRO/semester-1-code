#include <iostream>
using namespace std;
main()
{
    int n = 5;
    for (int i = 10; i > 0; i--)
    {
        int result = 0;
        result = n * i;
        cout << "5 * " << i << " = " << result;
        cout << endl;
    }
}
