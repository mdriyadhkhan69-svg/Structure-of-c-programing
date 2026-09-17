#include <iostream>
#include <string>
using namespace std;

class Book{

public:
    int price,quantity;
    string title;

Book(int a ,int b,string c){

price=a;
quantity=b;
title=c;

}
int calculateCost(){

return price*quantity;

}
};

int main(){

int p,q;
string n;

cout<<"Enter your book name:";
  cin>>n;

  cout<<"Enter your book price:";
     cin>>p;

     cout<<"Enter your book quantity:";
        cin>>q;
    Book ob1(p,q,n);

cout<<endl<<"---------------------------"<<endl<<endl;

              cout<<"Book Name:"<<ob1.title<<endl;
       cout<<"Total cost :"<<ob1.calculateCost();

return 0;
}
