#include <iostream>
using namespace std;
void display(int *pr)
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Value of array[ " << i << " ] = " << *(pr + i) << endl;

        // *(pr + i)
        // if *pr ,put //*pr++; on nex line.
    }
}
main()
{
    int array[4] = {1, 2, 3, 4};
    display(array);
}