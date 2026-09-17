#include <iostream>
#include<string>
using namespace std;

class Product{

public:
    string productName;
    int price,quantity;

//discount apply hobe total cost er sthe
//discount minus korle
//10% mane 10/100 ata minus hobe
//total cost er sthe

float calculateCost(float d){

         return quantity*price-d;

    }
};

int main(){

 Product ob;

 cout<<"Enter product name :";
        cin>>ob.productName;

 cout<<"Enter your price :";
        cin>>ob.price;

 cout<<"Enter your product quantity :";
        cin>>ob.quantity;

float discount;
 cout<<"Enter your discount :";
        cin>>discount;

        discount=discount/100;

        cout<<endl<<"---------------------";
        cout<<endl<<endl<<"Product name:"<<ob.productName<<endl;
        cout<<"Your final cost :"<<ob.calculateCost(discount);

return 0;

}
