#include<cstring>
#include"order.h"


class Deliver{
  private:
    int deliverID;
    char deliverDate[10];
    char deliverArea[20];
    char deliverTime[5];
    Order*order;

  public:
    Deliver();
    Deliver (int DID, char DDate[10],char DArea[20], char DTime[5],Order*pOrder);
    void setDeliverDetails(int dID, char dDate[10], char dArea[20],char dTime[5],Order*cOrder);
    void displayDeliverDetails();
    ~Deliver();
};
