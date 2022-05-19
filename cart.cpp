#include<iostream>
#include<iomanip>
#include"cart.h"
#include"item.h"
using namespace std;

Cart::Cart(){}

Cart::Cart(int CartID)
{
  cartID=CartID;
  cartPrice=0;
}

void addCart(int qty, Item*item)
{
   cartPrice=qty*item->getPrice(); 
}

void Cart::displayCartDetails()
{
  cout<<"Cart ID:"<<cartID<<endl
  cout<<"Cart Price:"<<setiosflags(ios::fixed)<<setprecision(2)<<cartPrice<<endl;
}

Cart::~Cart()
{
  cout<<endl;
  cout<<"Cancel"<<endl;
}
