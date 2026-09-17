#include <iostream>
#include <string>
using namespace std;

class Ticket{

  public:
      string customerName;
      string ticketType;
      int price;
Ticket(string name, string type ,int pri){

customerName=name;
ticketType=type;
price=pri;
}
int calculatecost(int numticket){


return numticket*price;

}

};

int main(){

int ticketnum1,ticketnum2;

string name1,name2;
string type1,type2;


cout<<"Enter Your Name :";
     cin>>name1;
cout<<"Enter Your Ticket Type :";
     cin>>type1;
cout<<"Enter How Much Ticket You Need :";
     cin>>ticketnum1;

     cout<<endl<<"-------------For 2nd cutomer-----------"<<endl<<endl;

cout<<"Enter Your Name :";
     cin>>name2;
cout<<"Enter Your Ticket Type :";
     cin>>type2;
cout<<"Enter How Much Ticket You Need :";
     cin>>ticketnum2;


Ticket customer1(name1,type1,199);

Ticket customer2(name2,type2,99);

cout<<"------------1st customer------------"<<endl<<endl;

cout<<"Name :"<<customer1.customerName<<endl;
cout<<"Ticket Type :"<<customer1.ticketType<<endl;
cout<<"Total Ticket :"<<ticketnum1<<endl;
cout<<"Total Cost :"<<customer1.calculatecost(ticketnum1)<<" "<<"BDT"<<endl<<endl;

cout<<"------------2nd customer------------"<<endl<<endl;

cout<<"Name :"<<customer2.customerName<<endl;
cout<<"Ticket Type :"<<customer2.ticketType<<endl;
cout<<"Total Ticket :"<<ticketnum2<<endl;
cout<<"Total Cost :"<<customer2.calculatecost(ticketnum2)<<" "<<"BDT"<<endl;

return 0;
}
