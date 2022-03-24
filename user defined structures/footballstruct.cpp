#include<iostream>
using namespace std;
int count=0;
struct first
{
    string name;
    string position;
    int num_of_touch_downs;
    int num_of_catches;
    int num_of_passing_yards;
    int num_of_recieving_yards;
    int num_of_rushing_yards;
};
first array[10];
void input()
{
    system("cls");
    cout<<"Main Menu > Input > "<<endl<<endl;
    cin.ignore();
    cout<<"Enter the name : ";
    getline(cin,array[count].name);
    cout<<"Enter the position : ";
    getline(cin,array[count].position);
    cout<<"Enter the number of touch downs :";
    cin>>array[count].num_of_touch_downs;
    cout<<"Enter the number of catches :";
    cin>>array[count].num_of_catches;
    cout<<"Enter the number of passing yards :";
    cin>>array[count].num_of_passing_yards;
    cout<<"Enter the number of recieving yards :";
    cin>>array[count].num_of_recieving_yards;
    cout<<"Enter the number of rushing yards :";
    cin>>array[count].num_of_rushing_yards;
    count++;
}
void display()
{
    system("cls");
    cout<<"Main Menu > Records > "<<endl<<endl;
    for(int x=0;x<count;x++)
    {
        cout<<"Name of Player "<<x+1<<" : "<<array[x].name<<endl;
        cout<<"Position "<<x+1<<" : "<<array[x].position<<endl;
        cout<<"Number of touchdowns "<<x+1<<" : "<<array[x].num_of_touch_downs<<endl;
        cout<<"Number of catches "<<x+1<<" : "<<array[x].num_of_catches<<endl;
        cout<<"Number of passing Yards "<<x+1<<" : "<<array[x].num_of_passing_yards<<endl;
        cout<<"Number of recieving Yards "<<x+1<<" : "<<array[x].num_of_recieving_yards<<endl;
        cout<<"Number of rushing Yards "<<x+1<<" : "<<array[x].num_of_rushing_yards<<endl;
        system("pause");
    }
    if(count==0)
    {
        cout<<"There is no record to display ..."<<endl;
        system("pause");
    }
}
main()
{
    int op;
    while (1)
    {
        system("cls");
        cout<<"Main Menu > "<<endl<<endl;
        cout << "Press 1 to input" << endl;
        cout << "Press 2 to display" << endl;
        cout << "Press 3 to Search" << endl;
        cout << "Press 4 to Update" << endl;
        cin >> op;
        system("cls");
        if (op == 1)
        {
            input();
        }
        else if (op == 2)
        {
            display();
        }
        else if (op == 3)
        {
            cout<<"Main Menu > Search > "<<endl<<endl;
            string pname;
            int index=-1;
            cin.ignore();
            cout<<"Enter the name of Player : ";
            getline(cin,pname);
            for(int x=0;x<count;x++)
            {
                if(pname==array[x].name)
                {
                    index=x;
                }
            }
            if(index != -1 )
            {
                cout<<"Name of Player   : "<<array[index].name<<endl;
                cout<<"Position   : "<<array[index].position<<endl;
                cout<<"Number of touchdowns   : "<<array[index].num_of_touch_downs<<endl;
                cout<<"Number of catches   : "<<array[index].num_of_catches<<endl;
                cout<<"Number of passing Yards   : "<<array[index].num_of_passing_yards<<endl;
                cout<<"Number of recieving Yards   : "<<array[index].num_of_recieving_yards<<endl;
                cout<<"Number of rushing Yards   : "<<array[index].num_of_rushing_yards<<endl;
            }
            else
            {
                cout<<"There is no such PLayer....."<<endl;
            }
            system("pause");
        }
        else if(op == 4)
        {
            cout<<"Main Menu > Update > "<<endl<<endl;
            string pname;
            int index=-1;
            cin.ignore();
            cout<<"Enter the name of Player : ";
            getline(cin,pname);
            for(int x=0;x<count;x++)
            {
                if(pname==array[x].name)
                {
                    index=x;
                }
            }
            if(index != -1 )
            {
                cout<<"Enter the name : ";
                getline(cin,array [index].name);
                cout<<"Enter the position : ";
                getline(cin,array [index].position);
                cout<<"Enter the number of touch downs :";
                cin>>array [index].num_of_touch_downs;
                cout<<"Enter the number of catches :";
                cin>>array [index].num_of_catches;
                cout<<"Enter the number of passing yards :";
                cin>>array [index].num_of_passing_yards;
                cout<<"Enter the number of recieving yards :";
                cin>>array [index].num_of_recieving_yards;
                cout<<"Enter the number of rushing yards :";
                cin>>array [index].num_of_rushing_yards;
            }
            else
            {
                cout<<"There is no such PLayer....."<<endl;
            }
            system("pause");
        }
    }
}