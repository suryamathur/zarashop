#ifndef PRODUCT
#define PRODUCT


#include<string>
using namespace std;

//ABOUT ALL THE PRODUCT
class Product
{
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


#endif   //PRODUCT
