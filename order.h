#include<cstring>
#include"deliver.h"
#include"item.h"
#define SIZE 2

using namespace std;

class Order{
  private: 
    int orderId;
    double Total;
    char date[10];
    int noOfItems;
    Deliver*deliver;
    Item*item[SIZE];

  public:
    Order();
    Order(int oid, float total, char Date[10], int Nitems,Deliver*dev);
    void addItem(Item*item1, Item*item2);
    void displayItem();
    void setOrderDetails(int OID,float Ototal, char Odate[10], int nItems,Deliver*cDev);
    void displayDetails();
    ~Order();
};
