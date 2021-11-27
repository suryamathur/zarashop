#ifndef MAINMENU
#define MAINMENU

#include"Customer.h"
#include"WomenClothing.h"
#include"MenClothing.h"
#include"KidClothing.h"
#include<iostream>

void mainMenu(Customer c)
{
    int choice;
    cout<<"1. Men's Clothing"<<endl;
    cout<<"2. Women's Clothing"<<endl;
    cout<<"3. Kids Clothing"<<endl;
    cout<<"4. Total"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        showMMenu(c);
        break;
        case 2:
        showWMenu(c);
        break;
        case 3:
        showKMenu(c);
        break;
        case 4:
        cout<<"Total: "<<c.cart.getTotal();
        break;
        default:
        cout<<"Wrong Input"<<endl;
        mainMenu(c);
        break;
    }

}






#endif  //MAINMENU