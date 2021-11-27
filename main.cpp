#include<iostream>
#include<iomanip>

#include"MainMenu.h"
#include"Product.h"
#include"Customer.h"
#include"Cart.h"
using namespace std;

//ABOUT THE MAIN FUNCTION
int main()
{
    Customer c;
    c.createCustomer();
    mainMenu(c);
    return 0;
}

