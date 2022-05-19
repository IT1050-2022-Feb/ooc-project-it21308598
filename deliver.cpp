#include<iostream>
#include<cstring>
#include"deliver.h"
using namespace std;

Deliver::Deliver()
{
  int deliverID=00;
  char deliverDate;
  char deliverArea;
  char deliverTime;
}

Deliver:: Deliver(int DID, char DDate[10],char DArea[20], char DTime[5],Order*pOrder)
{
  deliverID=DID;
  strcpy(deliverDate,DDate);
  strcpy(deliverArea,DArea);
  strcpy(deliverTime,DTime);
  order=pOrder;
}

void Deliver::setDeliverDetails(int dID, char dDate[10], char dArea[20],char dTime[5],Order*cOrder)
{
  deliverID=dID;
  strcpy(deliverDate,dDate);
  strcpy(deliverArea,dArea);
  strcpy(deliverTime,dTime);
  order=cOrder;
}

void Deliver::displayDeliverDetails()
{
  cout<<"Deliver ID:"<<deliverID<<endl;
  cout<<"Deliver Date:"<<deliverDate<<endl;
  cout<<"Deliver Area:"<<deliverArea<<endl;
  cout<<"Deliver Time:"<<deliverTime<<endl;
}

Deliver::~Deliver()
{
  cout<<endl;
  cout<<"Deliver Cancelled"<<endl;
}
