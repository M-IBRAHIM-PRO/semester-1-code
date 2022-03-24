#include <iostream>
using namespace std;
string tre(int pr)
{
    string tr;
    if(pr > 15)
    {
        tr="passed";
    }
    else
    {
        tr="fail";
    }
    return tr;
}
main()
{
    float num[3];
    for(int x=0; x < 3 ; x++ )
    {
        cout<<"Enter Number";
        cin>>num[x];
    }
    for(int y =0; y < 3 ; y++)
    { 
        string rew = tre(num[y]);
        cout<<"student "<<y+1<<"is "<<rew<<endl;
    }
}