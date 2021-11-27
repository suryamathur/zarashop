#ifndef WOMENCLOTHING
#define WOMENCLOTHING

#include"Product.h"
#include"Customer.h"
#include"MainMenu.h"
#include<iostream>
#include<iomanip>
using namespace std;



void showWMenu(Customer cus)
{
    int choice;
    Product a("Salwar",2000,10);
    Product b("Joggings",500,10);
    Product c("Mozitos",1000,10);


    cout<<"1. "<<a.getName()<<endl;
    cout<<"2."<<b.getName()<<endl;
    cout<<"3."<<c.getName()<<endl;
    cout<<"4. Total"<<endl;
   // cout<<"*. Back"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cus.cart.add(a);
        showWMenu(cus);
        break;
        case 2:
        cus.cart.add(b);
        showWMenu(cus);
        break;
        case 3:
        cus.cart.add(c);
        showWMenu(cus);
        break;
        case 4:
        cout<<cus.cart.getTotal()<<endl;
        showWMenu(cus);
        break;
        default:
        showWMenu(cus);
        break;
    }
}




#endif  //WOMENCLOTHING