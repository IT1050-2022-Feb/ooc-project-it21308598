#include<iomanip>
#include"item.h"

class Cart{
  private:
    int cartID;
    float cartPrice;

  public:
    Cart();
    Cart(int CartID);
    void addCart(int qty, Item*item);
    void displayCartDetails();
    ~Cart();
};
