#include <iostream>
using namespace std;

class Rectangle{
public:
    int lenght;
    int width;

Rectangle(int a,int b){

lenght=a;
width=b;
cout<<endl<<"------------------"<<endl<<endl;
cout<<"total area:"<<lenght*width;
}


};


int main(){
int le,wi;

cout<<"Enter your length:";
   cin>>le;

cout<<"Enter your width:";
   cin>>wi;


Rectangle ob(le,wi);

return 0;
}
