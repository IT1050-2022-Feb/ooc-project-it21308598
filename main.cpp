#include <iostream>
#include "item.h"
#include "order.h"
#include "cart.h"
#include "deliver.h"
#include "customer.h"
#include "feedback.h"
#include "bill.h"
#include "payment.h"
#include "visacard.h"
#include "creditcard.h"
#include "Services.h"
#include "MailUs.h"
#include "ContactAgent.h"
using  namespace std;

int main()
{
  //objects for item class
    Item *item1 = new Item(11111,"Biscuit","Munchee",60.00);
    Item *item2 = new Item(22222,"Chocolate","Kandos",350.00);
    Item *item3 = new Item(33333,"Ice-Cream","Magic",1500.0);
    Item *item4 = new Item(44444,"Yougurt","Highland",50.00);

   //objects for order class
    Order *ord1 = new Order(01212,2500.00,"12.05.2022",2);
    Order *ord2 = new Order(01313,750.00,"08.05.2022",7);

    ord1->addItem(item1,item2);
    ord2->addItem(item3,item4);
    
    //objects for cart class
    Cart *crt1 = new Cart(0001);
    Cart *crt2 = new Cart(0002);
    Cart *crt3 = new Cart(0003);
    Cart *crt4 = new Cart(0004);

    crt1->addCart(5,item1);
    crt2->addCart(1,item2);
    crt3->addCart(9,item3);
    crt4->addCart(8,item4);

    //objects for Deliver class

   Deliver *deliver1 = new Deliver(11111,"24.01.2022","Gampaha","17.30");
   Deliver *deliver2 = new Deliver(11112,"05.12.2021","Matara","12.30");
   Deliver *deliver3 = new Deliver(11113,"09.03.2022","Kottawa","14.30");
   Deliver *deliver4 = new Deliver(11114,"04.05.2022","Ragama","13.30");

    //objects for customer class

    Customer *customer1 = new Customer(00001,"Uwani","22/A,Homagama","uwani@gmail.com","0711111189");
    Customer *customer2 = new Customer(00002,"Tharusha","1/5A,Gampaha","tharusha@gmail.com","0711111320");
    Customer *customer3 = new Customer(00003,"Sewmini","79/6A,Kegalle","sewmini@gmail.com","0711111450");
    Customer *customer4 = new Customer(00001,"Shamal","74A,Nittabuwa","shamal@gmail.com","07111111150");

    //objects for Feedback class
  
    Feedback *feedback1 = new Feedback(00111,"kamal123@gmail.com","Good service");
    Feedback *feedback2 = new Deliver(00222,"sunil123@gmail.com","excellent service");
    Feedback *feedback3 = new Deliver(00333,"Amara123@gmail.com","Good service");
    Feedback *feedback4 = new Deliver(00444,"meena123@gmail.com","excellent service");

   //objects for Bill class

   Bill *bill1 = new Bill(00011,4500.00,"WaterBill");
   Bill *bill2 = new Bill(00012,1500.00,"Electricity Bill");
   Bill *bill3 = new Bill(00013,750.00,"Insurance Bill");
   Bill *bill4 = new Bill(00014,5000.00,"Mobile Bill");

  
  //objects for visacard class

   Visacard *visacard1 = new Visacard(01111,7500.00,1234567891011213,"04.05.2025",485);
   Visacard *visacard2 = new Visacard(01112,3600.00,1234567891011895,"01.08.2024",120);
   Visacard *visacard3 = new Visacard(01113,950.00,1234567891011900,"31.12.2022",407);
   Visacard *visacard4 = new Visacard(01114,6100.00,1234567891011200,"14.05.2026",501);
  
  //objects for creditcard class

  Ceditcard *creditcard1 = new creditcard(00111,6900.00,1234567891896213,"28.05.2024",789);
  Ceditcard *creditcard2 =  new creditcard(00112,7200.00,1234567891256895,"16.01.2024",465);
  Ceditcard *creditcard3 = new creditcard(00113,8000.00,1234567891000900,"31.01.2023",123);
  Ceditcard *creditcard4 = new creditcard(00114,12000.00,123456789178200,"30.05.2024",741);

  //objects for Mailus class
  
   MailUs *mailus1 = new MailUs(00005,"28.05.2022","07.07.2023");
   MailUs *mailus2 = new MailUs(00006,"28.07.2023","07.08.2024");
   MailUs *mailus3 = new MailUs(00007,"28.10.2024","07.12.2025");
   MailUs *mailus4 = new MailUs(00008,"28.12.2025","07.01.2026");

  //objects for ContactAgent class

  ContactAgent *contctagent1  =new contactagent(00012,"01.01.2022","10.07.2023");
  ContactAgent *contctagent2  =new contactagent(00013,"02.02.2022","11.07.2023");
  ContactAgent *contctagent3  =new contactagent(00014,"03.03.2022","12.07.2023");
  ContactAgent *contctagent4 =new contactagent(00015,"04.04.2022","13.07.2023");

  item1-> displayItemDetails();
  item2-> displayItemDetails();
  item3-> displayItemDetails();
  item4-> displayItemDetails();
  cout << "" << endl;

  ord1-> displayDetails();
  ord2-> displayDetails();
  cout << "" << endl;

  crt1-> displayCartDetails();
  crt2-> displayCartDetails();
  crt3-> displayCartDetails();
  crt4-> displayCartDetails();
  cout << "" << endl;

  deliver1-> displayDeliverDetails();
  deliver2-> displayDeliverDetails();
  deliver3-> displayDeliverDetails();
  deliver4-> displayDeliverDetails();
  cout << "" << endl;

  customer1->displayCusDetails();
  customer2->displayCusDetails();
  customer3->displayCusDetails();
  customer4->displayCusDetails();
  cout << "" << endl;

  feedback1->displayFeedbackDetail();
  feedback2->displayFeedbackDetail();
  feedback3->displayFeedbackDetail();
  feedback4->displayFeedbackDetail();
  cout << "" << endl;

  bill1->displayBillDetails();
  bill2->displayBillDetails();
  bill3->displayBillDetails();
  bill4->displayBillDetails();
  cout << "" << endl;

  visacard1->displaycardDetails();
  visacard2->displaycardDetails();
  visacard3->displaycardDetails();
  visacard4->displaycardDetails();
  cout << "" << endl;

  creditcard1->displaycardDetails();
  creditcard2->displaycardDetails();
  creditcard3->displaycardDetails();
  creditcard4->displaycardDetails();
  cout << "" << endl;

  mailus1->displayDetails();
  mailus2->displayDetails();
  mailus3->displayDetails();
  mailus4->displayDetails();
  cout << "" << endl;

  contctagent1->displayContactDetails();
  contctagent2->displayContactDetails();
  contctagent3->displayContactDetails();
  contctagent4->displayContactDetails();
  cout << "" << endl;

  delete item1;
  delete item2;
  delete item3;
  delete item4;
  delete ord1;
  delete ord2;
  delete crt1;
  delete crt2;
  delete crt3;
  delete crt4;
  delete deliver1;
  delete deliver2;
  delete deliver3;
  delete deliver4;
  delete customer1;
  delete customer2;
  delete customer3;
  delete customer4;
  delete feedback1;
  delete feedback2;
  delete feedback3;
  delete feedback4;
  delete bill1;
  delete bill2;
  delete bill3;
  delete bill4;
  delete visacard1;
  delete visacard2;
  delete visacard3;
  delete visacard4;
  delete creditcard1;
  delete creditcard2;
  delete creditcard3;
  delete creditcard4;
  delete mailus1;
  delete mailus2;
  delete mailus3;
  delete mailus4;
  delete contactagent1;
  delete contactagent2;
  delete contactagent3;
  delete contactagent4;

  return 0;
  }
  



  

  

  


