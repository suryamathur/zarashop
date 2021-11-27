#ifndef CART
#define CART

#include"Product.h"
#include<list>

class Cart
{
    private:
    list<Product> items;
    int total;
    public:
    Cart()
    {
        total=0;
    }
    void add(Product p);
    void showCart();
    int getTotal();
};
void Cart:: add(Product p)
    {
        total=total+p.getPrice();
        items.push_back(p);
        
    }

void Cart::showCart()
    {
        list<Product> :: iterator iter;
        for(iter=items.begin(); iter!=items.end();iter++)
        {
            cout<<iter->getName()<<setw(5)<<iter->getPrice()<<endl;
        }
    }

int Cart::getTotal()
{
    return total;
}



#endif //CART