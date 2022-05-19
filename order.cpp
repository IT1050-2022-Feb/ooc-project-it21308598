#include<iostream>
#include<iomanip>
#include<cstring>
#include"order.h"
#include"item.h"
#define SIZE 2
using namespace std;

Order::Order()
{
  int orderId=0;
  float Total=0.00;
  char date=0;
  int noOfItem=0;
}

Order::Order(int oid, float total, char Date[10], int Nitems, Deliver*dev)
{
  orderId=oid;
  Total=total;
  strcpy(date,Date);
  noOfItems=Nitems;
  deliver=dev;
}

void Order::setOrderDetails(int OID,float Ototal, char Odate[10],int nItems,Deliver*cDev)
{
	orderId=OID;
  	Total=Ototal;
  	strcpy(date,ODate);
  	noOfItems=nItems;
  	deliver=cDev;
}

void Order::addItem(Item*item1,Item*item2)
{
  item[0]=item1;
  item[1]=item2;
}

void Order::displayItem()
{
  for(int r=0; r<SIZE;r++)
    {
      item[r]->getItemDetails();
    }
}

void Order::displayDetails()
{
  cout<<"Order Id="<<orderId<<endl;
  cout<<"Total="<<Total<<endl;
  cout<<"Date="<<date<<endl;
  cout<<"No Of Items="<<noOfItems<<endl;
}

Order::~Order()
{
  cout<<endl;
  cout<<"Order Cancelled"<<endl;
}
