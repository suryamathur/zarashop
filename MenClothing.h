#ifndef MENCLOTHING
#define MENCLOTHING

#include"Product.h"
#include"MainMenu.h"
#include"Customer.h"
#include<iostream>
#include<iomanip>
//#include "Customer.cpp"
using namespace std;



void showMMenu(Customer cus)
{
    Product a("Salwar",2000,10);
    Product b("Joggings",500,10);
    Product c("Mozitos",1000,10);


    int choice;
    cout<<"1. "<<a.getName()<<endl;
    cout<<"2."<<b.getName()<<endl;
    cout<<"3."<<c.getName()<<endl;
    cout<<"4. Total"<<endl;
  //  cout<<"*. For Back"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cus.cart.add(a);
        showMMenu(cus);
        break;
        case 2:
        cus.cart.add(b);
        showMMenu(cus);
        break;
        case 3:
        cus.cart.add(c);
        showMMenu(cus);
        break;
        case 4:
        cout<<"Total: "<<cus.cart.getTotal()<<endl;
        showMMenu(cus);
        break;
      //  case '*':
      //  mainMenu(cus);
      //  break;
        default:
        showMMenu(cus);
        break;
    }
}



#endif //End of MENCLOTHING