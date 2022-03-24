#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
// function prototype
void header();
string login_menu();
char adminMenu();
void clearScreen();
void addproducts_into_array(string name , int price , int quantity);
void addProducts();
void view_products();
void del_product();
void update_product();
char cust_menu();
void products_info();
void add_order_into_array(string name,int price,int quantity);
void order_product();
void billing();
void storeInFile();
void LoadFromFile();
void order_storeInFile();
void order_LoadFromFile();



//data structures
string loginusername = " ";
const int MAX_RECORDS = 50;
string usernameA[MAX_RECORDS] = {"admin" , "customer"};
string passwordsA[MAX_RECORDS] = {"11512" , "123"};
string rolesA[MAX_RECORDS]={"admin" , "customer"};
string products[MAX_RECORDS];
int product_prices[MAX_RECORDS];
int quantity_of_products[MAX_RECORDS];
int product_count = 0;
bool entered = false;
string order;
int order_count =0;
string cust_orders_products[50];
int cust_order_prices[50];
int cust_order_quantity[50];
int quantity;



main()
{
    LoadFromFile();
    order_LoadFromFile();

    while(true)
    {

            
        string who = login_menu();
        if(who=="admin")
        {
            char option = ' ';
            while(true)
            {
                
                system("cls");
                option=adminMenu();
                
                if(option == '1')
                {
                    addProducts();    
                }
                else if(option == '2')
                {
                    view_products();        
                }
                else if(option == '3')
                {
                    // delete a product
                    del_product();
                }
                else if(option == '4')
                {
                    update_product();    
                }

                else if(option == '5')
                {
                    int electricity_bill=0, shop_rent=0, worker_salary=0, purchased_products=0, foodbill=0,total=0;

                    cout << "Monthly Expenses...." << endl;
                    cout << " " << endl;
                    cout << "Enter your Electricity bill : ";
                    cin >> electricity_bill;
                    cout << "Enter your Shop Rent : ";
                    cin >> shop_rent;
                    cout << "Enter your Worker Salary : ";
                    cin >> worker_salary;
                    cout << "Enter the price of products you purchased : ";
                    cin >> purchased_products;
                    cout << "Enter your Food Bill : ";
                    cin >> foodbill;
                    total = electricity_bill + shop_rent + worker_salary + purchased_products + foodbill;
                    cout << "Your total expenses are " << total << " Rupees...." << endl;
                    clearScreen();    
                }

                else if(option == '6')
                {
                    int income_sold=0, income_repairing=0, income_access=0, tot_sale=0, tot_profit=0,mon_expenses;

                    cout << "Total Sale and Profit....." << endl;
                    cout << "  " << endl;
                    cout << "Enter the income from your total products sold : ";
                    cin >> income_sold;
                    cout << "Enter the income from mobile repairing : ";
                    cin >> income_repairing;
                    cout << "Enter the income from other mobile accessories sold : ";
                    cin >> income_access;
                    cout<<"Enter your total monthly expenses :"<<endl;
                    cin>>mon_expenses;
                    tot_sale = income_sold + income_repairing + income_access;
                    tot_profit = tot_sale - mon_expenses;
                    
                    cout << "Total Sale  : " << tot_sale << endl;
                    cout << "Total Profit : " << tot_profit << endl;
                    clearScreen();
                }
                else if(option == '7')
                {
                    clearScreen();
                    break;               
                }
                else
                {
                    cout << "You Chose Wrong option " << endl;
                }
                clearScreen();
            } //end of admin loop
        }

        /// start of customer options 

        else if (who == "customer")
        {
            char cust_Option = ' ';
            while(true)
            {
                system("cls");
                cust_Option = cust_menu();
                if(cust_Option == '1')
                {
                    if(entered == true)
                    {
                        products_info();
                    }
                    else
                    {
                        cout<<"Products are not entered yet by the Admin..";
                    }
                }

                else if(cust_Option == '2')
                {
                    if(entered == true)
                    {
                        order_product();
                    }
                    else{
                        cout<<"no record yet";
                    }
                    clearScreen();    
                }
                else if(cust_Option == '3')
                {
                    if(entered == true)
                    {
                        billing();
                    }
                    else{
                        cout<<"no record yet";
                        clearScreen();
                    }
                            
                }
                else if(cust_Option == '4')
                {
                    string repair;
                    cout << "Mobile Repairing" << endl;
                    cout << " " << endl;
                    cout << "Write your issue : ";
                    getline(cin ,repair);
                    cin.ignore();
                    cout << "It's ok. Please give us your contact number and we will contact you in 7 days ...." << endl;
                    string mob_number;
                    cout << "Write your Contact Number : ";
                    //cin >> mob_number;
                    // int cnt=mob_number.lentgh();
                    // while(if(cnt!==11))
                    // {
                    //     cout<<"Plz enter the valid number :";
                    //     cin>>mob_number;
                    // }
                    
                    clearScreen();        
                }
                else if(cust_Option == '5')
                {
                    cout << "Sell your mobile in a good price here......" << endl;
                    cout << "  " << endl;
                    string ph_name;
                    int cus_price, cutting, my_price;
                    cout << "Which mobile do you want to sell : ";
                    cin >> ph_name;
                    cout << "Enter the price of your mobile : ";
                    cin >> cus_price;
                    cutting = (cus_price / 100) * 20;
                    my_price = cus_price - cutting;
                    cout << "According to mobile condition I will buy it in " << my_price << " Rupees";
                    clearScreen();
                }
                else if(cust_Option == '6')
                {
                    cout<<"Email : AwanmblShop@gmail.com "<<endl;
                    cout<<"Contact number = xxxx xxxxxxx";   
                }
                else if(cust_Option == '7')
                {
                    cout<<"Exiting";
                    clearScreen();        
                    break;
                }
            }
        }
        else if(who == "exit")
        {
            storeInFile();
            order_storeInFile();
            break;
        }
        else{
            cout<<"Wrong username or password..."<<endl;
            clearScreen();
        }
    }
}
void header()
{
    //user interface
    cout << "             ***********************************************************" << endl;
    cout << "             **             MOBILE SHOP MANAGEMENT SYSTEM             **" << endl;
    cout << "             ***********************************************************" << endl;
    cout << "            " << endl;
    cout << "Welcome to Awan's Mobile Shop ......... " << endl;
    cout << "_____________________________ " << endl;
    cout << "        " << endl;
}
string login_menu()
{
    header();
    int login_option;
    cout<<" "<<endl;
    cout<<"1. Admin"<<endl;
    cout<<"2. Customer"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<" "<<endl;
    cout<<"Your option..";
    cin>>login_option;
    if(login_option == 1 || login_option == 2)
    {
        string username;
        cout << "Enter Username :";
        cin >> username;
        string password;
        cout << "Enter password :";
        cin >> password;
    
        for (int i = 0; i < MAX_RECORDS; i++)
        {
            if (usernameA[i] == username && passwordsA[i] == password)
            {
                loginusername = username;
                return rolesA[i];
            }
        }
    
    }
    
    loginusername = " ";
    if(login_option == 3)
    {
        return "exit";
    }
    else{
        return "wrong";
    }          
}
void clearScreen()
{ //____clear screen_____
  cout << "Press any key to continue " << endl;
  getch();
  system("CLS");
}

char adminMenu()
{ //_______Administrator level menu goes here__________
    header();
    cout << "Admin Main Menu > " << endl;
    cout << "Main Menu :" << endl;
    cout << "  1. Add Products" << endl;
    cout << "  2. View record of Products" << endl;
    cout << "  3. Delete record of Products" << endl;
    cout << "  4. Update Product records" << endl;
    cout << "  5. Monthly Expenses" << endl;
    cout << "  6. Total sale and profit" << endl;
    cout << "  7. exit" << endl;
    cout << "  Your option....";
    char option;
    cin >> option;
    return option;
    clearScreen();
}

void addproducts_into_array(string name , int price , int quantity)
{
    products[product_count] = name;
    product_prices[product_count] = price;
    quantity_of_products[product_count] = quantity;
    product_count = product_count + 1;
}

void addProducts()
{
    string name;
    int price,quantity;
    char op;
    while(op!='e')
    {
        cout<<"Press any key to continue and e to exit ";
        cin>>op;
        system("cls");
        if(op!='e')
        {
            cout << " Enter the name of the product :";
            cin >> name;
            cout << "Enter the price of the product :";
            cin >> price;
            cout << "Enter the total quantity of product available :";
            cin >> quantity;

            addproducts_into_array(name , price , quantity);
            entered = true;
        }
        else{
            break;
        }    
    }
}

void view_products()
{
    int count=0;

    for(int x=0 ; x<MAX_RECORDS ; x++)
    {
        for(int y=x+1 ; y<MAX_RECORDS ; y++)
        {
            if(product_prices[x]>0)
            {
                if(product_prices[x]>product_prices[y])
                {
                    swap(product_prices[x] , product_prices[y]);
                    swap(products[x] , products[y]);
                    swap(quantity_of_products[x] , quantity_of_products[y]);
                }
            }
            
        }
        count++;
    }
    cout<<"Product\tPrice\tQuantity"<<endl;
    for(int x=0 ; x<count ; x++)
    {
        if(product_prices[x]>0)
        {
            cout<<products[x]<<"\t"<<product_prices[x]<<"\t"<<quantity_of_products[x]<<endl;
        }
        
    }    
}

void del_product()
{
    string name;
    cout<<"Enter the name of the product you want to delete :";
    cin>>name;
    for(int e=0 ; e<MAX_RECORDS ; e++)
    {
        if(product_prices[e] > 0)
        {
            if(name == products[e])
            {
                cout<<"Are you sure to delete "<<products[e]<<endl;
                cout<<"Press Y for yes or any other key to cancel";
                char op;
                cin>>op;
                if(op=='y' || op=='Y')
                {
                    products[e] = " ";
                    product_prices[e] = 0;
                    quantity_of_products[e] = 0;
                    cout<<"You have successfully deleted the record "<<endl;
                }
                else
                {
                    cout<<"Wrong input";
                    break;
                }
            }
        }    
    }
}

// void update_product()
// {
//     string p_name;
//     int op;
//     cout<<"Enter the name of the product you want to update :";
//     cin>>p_name;
//     for(int a=0 ; a<MAX_RECORDS ; a++)
//     {
//             if(products[a] == p_name)
//             {
//                 cout<<"Enter the change in product you want to made :"<<endl;
//                 cout<<"1. Name"<<endl<<"2. Price"<<endl<<"3. Quantity"<<endl;
//                 cout<<"Your option...";
//                 cin>>op;
//                 if(op == 1)
//                 {
//                     string newname;
//                     cout<<"Enter the new name for product :";
//                     cin>>newname;
//                     products[a]=newname;
//                     cout<<"You have successfully updated the record..";
//                     break;
//                 }
//                 if(op == 2)
//                 {
//                     int newprice;
//                     cout<<"Enter the new price :";
//                     cin>>newprice;
//                     product_prices[a]=newprice;
//                     break;
//                 }
//                 if(op == 3)
//                 {
//                     int newquantity;
//                     cout<<"Enter the change in quantity :";
//                     cin>>newquantity;
//                     quantity_of_products[a]=newquantity;
//                     break;
//                 }
//                 else{
//                     cout<<"Wrong input ...";
//                 }
//             }
            
        
//     }
// }
void update_product()
{
    string p_name;
    char op;
    cout<<"Enter the name of the product you want to update :";
    cin>>p_name;
    for(int a=0 ; a<MAX_RECORDS ; a++)
    {
            if(products[a] == p_name)
            {
                cout<<"Update the name of the product :"<<endl;
                cout<<"(Press Y for yes and any other key to cancel)";
                cin>>op;
                if(op == 'Y' || op == 'y')
                {
                    string newname;
                    cout<<"Enter the new name for product :";
                    cin>>newname;
                    products[a]=newname;                   
                }
                
                cout<<"Update the price :"<<endl;
                cout<<"(Press Y for yes and any other key to cancel)";
                cin>>op;
                if(op == 'Y' || op == 'y')
                {
                    int newprice;
                    cout<<"Enter the new price :";
                    cin>>newprice;
                    product_prices[a]=newprice; 
                }

                cout<<"Update the quantity :"<<endl;
                cout<<"(Press Y for yes and any other key to cancel)";
                cin>>op;
                if(op == 'Y' || op == 'y')
                {
                    int newquantity;
                    cout<<"Enter the change in quantity :"<<endl;
                    cin>>newquantity;
                    quantity_of_products[a]=newquantity;
                }
        
            }               
        
    }
}

char cust_menu()
{
    // options for customer
    header();
    cout <<"..Customer Main Menu......"<<endl;
    cout <<" "<<endl;
    cout << " 1. View Products" << endl;
    cout << " 2. Order a Product" << endl;
    cout << " 3. Your Bill" << endl;
    cout << " 4. Mobile Repairing" << endl;
    cout << " 5. Sell Your Phone" << endl;
    cout << " 6. Contact Information.."<<endl;
    cout << " 7. Exit "<<endl;
    char option;
    cout << "Your Option.....";
    cin >> option;
    return option;
    clearScreen();
}

void products_info()
{
    cout<<"Product\tPrice\tQuantity"<<endl;
    for(int x=0 ; x<MAX_RECORDS ; x++)
    {
        if(product_prices[x]>0)
        {
            cout<<products[x]<<"\t"<<product_prices[x]<<"\t"<<quantity_of_products[x]<<endl;
        }
        
    }
    clearScreen();
}

void add_order_into_array(string name,int price,int quantity)
{
    cust_orders_products[order_count]=name;
    cust_order_prices[order_count]=price;
    cust_order_quantity[order_count]=quantity;
    order_count++;
}

void order_product()
{ 
    cout<<"What do you want to buy :";
    cin>>order;
    cout<<"Enter the quantity :";
    cin>>quantity;
    for(int x=0 ; x<MAX_RECORDS ; x++)
    {
        if(products[x]==order)
        {
            if(product_prices[x]>0)
            {
                if(quantity_of_products[x]>0 && quantity<quantity_of_products[x])
                {
                    add_order_into_array(order,product_prices[x],quantity);
                    order_count++;
                    quantity_of_products[x]=quantity_of_products[x]-quantity;
                    cout<<"Your order has been placed ..."<<endl;
                }
                else{
                    cout<<"Please enter less quantity ";
                }
            }
        }        
    }
}

void billing()
{
    bool bill=false;
    int total_price=0;
    cout<<"Ordered Product \t Quantity \t Price"<<endl;
    for(int x=0 ; x<order_count ; x++)
    {
        if (cust_order_prices[x] != 0)
        {
            cout << cust_orders_products[x] << "\t\t\t" << cust_order_quantity[x] << "\t\t" << cust_order_prices[x] << endl;
            total_price = total_price + (cust_order_quantity[x] * cust_order_prices[x]);
            bill=true;
        }
    }
    while(bill!=false)
    {
        cout<<"You have to pay "<<total_price<<" Rupees"<<endl;
        int cust_amount;
        cout<<"Enter your cash :";
        cin>>cust_amount;
        int left_amount;
        left_amount=cust_amount-total_price;
        if(left_amount > 0)
        {
            cout<<"Your change is "<<left_amount<<endl;
            bill=false;
        }
        else
        {
            left_amount=-1*left_amount;
            cout<<"You have to pay "<<left_amount<<" more."<<endl;
        }
    }
    if(bill==false){
        cout<<"No order yet";
    }
        int s=0;
        for(int x=0 ;x<MAX_RECORDS ; x++)
        {
            cust_orders_products[x]=s;
            cust_order_prices[x]=s;
            cust_order_quantity[x]=s;
        }
    clearScreen();
}

void storeInFile()
{
    fstream file;
    file.open("Myshop.txt", ios::out);
    for (int i = 0; i < MAX_RECORDS; i++)
    {
        if(product_prices[i] > 0){

        file << products[i] << " " << product_prices[i] << " " << quantity_of_products[i]  << endl;
        }
    }
    file.close();
}

void LoadFromFile()
{

    fstream file;
    string name;
    int price,quantity;
    char op;
    int count = 0;
    file.open("Myshop.txt", ios::in);
    while (!file.eof())
    {
        getline(file, name);
        count++;
    }
    file.close();
    file.open("Myshop.txt", ios::in);

    for (int i = 0; i < count - 1; i++)
    {
        file >> name;
        file >> price;
        file >> quantity;
        addproducts_into_array(name , price , quantity);
        entered=true;
    }

    file.close();
}

void order_storeInFile()
{
    fstream file;
    file.open("cust_orders.txt", ios::out);
    for (int i = 0; i < MAX_RECORDS; i++)
    {
        if(product_prices[i] > 0){

        file << cust_orders_products[i] << " " << cust_order_prices[i] << " " << cust_order_quantity[i]  << endl;
        }
    }
    file.close();
}

void order_LoadFromFile()
{

    fstream file;
    string name;
    int price,quantity;
    char op;
    int count = 0;
    file.open("cust_orders.txt", ios::in);
    while (!file.eof())
    {
        getline(file, name);
        count++;
    }
    file.close();
    file.open("cust_orders.txt", ios::in);

    for (int i = 0; i < count - 1; i++)
    {
        file >> name;
        file >> price;
        file >> quantity;
        add_order_into_array(name , price , quantity);
    }

    file.close();
}
