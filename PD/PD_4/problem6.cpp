#include<iostream>
using namespace std;
main(){
 string day, fruit;
 float bill;
 int quantity;

    cout<<"Enter the name of day : ";
    cin>>day;
    cout<<"Enter the name of fruit : ";
    cin>>fruit;
    cout<<"Enter the quantity : ";
    cin>>quantity;

    if (day=="sunday")
    {
        if (fruit=="banana"){
            bill=quantity*2.50;
        }
        else if (fruit=="apple"){
            bill=quantity*1.20;
        }
        else if (fruit=="orange"){
            bill=quantity*0.85;
        }
        else if (fruit=="grapefruit"){
            bill=quantity*1.45;
        }
        else if (fruit=="kiwi"){
            bill=quantity*2.70;
        }
        else if (fruit=="pineapple"){
            bill=quantity*5.50;
        }
        else if (fruit=="grapes"){
            bill=quantity*3.85;
        }
    }
    else if (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday" || day=="saturday"){
        if (fruit=="banana"){
            bill=quantity*2.70;
        }
        else if (fruit=="apple"){
            bill=quantity*1.25;
        }
        else if (fruit=="orange"){
            bill=quantity*0.90;
        }
        else if (fruit=="grapefruit"){
            bill=quantity*1.60;
        }
        else if (fruit=="kiwi"){
            bill=quantity*3.0;
        }
        else if (fruit=="pineapple"){
            bill=quantity*5.60;
        }
        else if (fruit=="grapes"){
            bill=quantity*4.20;
        }

    }
    else{
        cout<<"Enter a valid input.";
    }

}