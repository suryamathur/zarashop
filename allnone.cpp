#include<iostream>
#include<iomanip>
#include<list>
#include<iterator>
using namespace std;


//ABOUT ALL THE PRODUCT
class Product
{
    private:
    string name;
    int price,cost,count;

    public:
    Product(string na, int pr,int co=1)
    {
        name=na;
        price=pr;
        count=co;
        cost=0;
    }
    void setPrice(int pr){price=pr;}
    void setName(string n){name=n;}
    int getPrice(){return price;}
    string getName(){return name;}
    
};



class Cart
{
    private:
    list<Product> items;
    public:
    void add(Product p)
    {
        items.push_back(p);
    }

    void showCart()
    {
        list<Product> :: iterator iter;
        for(iter=items.begin(); iter!=items.end();iter++)
        {
            cout<<iter->getName();
        }
    }
};




//ABOUT CUSOTMERS
class Customer
{
    private:
    string name, address;
    int bill,phone;
    Cart cart;
    

    public:
    void addItem(Product p)
    {
        cart.add(p);
    }
    void displayCart()
    {
        cart.showCart();
    }
    void createCustomer()
    {
        cout<<"Enter Customer's Name: ";
        cin>>name;
        cout<<"Enter Customer's Phone: ";
        cin>>phone;
        cout<<"Enter Customer's Address: ";
        cin>>address;
        bill=0;
    }

};




//ABOUT THE MAIN FUNCTION
int main()
{
    Product p1("sdfs",2300);
    Product p2("mathu",212);
    Customer a;
    a.addItem(p1);
    a.addItem(p2);
    a.displayCart();
    return 0;
}

