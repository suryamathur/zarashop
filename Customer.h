#ifndef CUSTOMER
#define CUSTOMER

#include<iostream>
#include "Cart.h"

using namespace std;
//ABOUT CUSOTMERS
class Customer
{
    private:
    string name, address;
    int bill,phone;
    
    public:
    Cart cart;
    void addItem(Product p);
    void displayCart();
    void createCustomer();
};

void Customer::addItem(Product p)
{
    cart.add(p);
}
void Customer::displayCart()
{
    cart.showCart();
}
void Customer::createCustomer()
{
    cout<<"Enter Customer's Name: ";
    cin>>name;
    cout<<"Enter Customer's Phone: ";
    cin>>phone;
    cout<<"Enter Customer's Address: ";
    cin>>address;
    bill=0;
}


#endif //CUSTOMER