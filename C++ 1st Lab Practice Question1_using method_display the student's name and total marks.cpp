#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    int mark1,mark2;
    string name;

int calculateTotal(int a){

return mark1+mark2+a;

}

};

int main(){

Student ob;
int mark3;
//ob.name="Riyadh";
//ob.mark1=20;
//ob.mark2=30;

cout<<"Enter your name :";
       cin>>ob.name;
cout<<"Enter your mark1 :";
       cin>>ob.mark1;
cout<<"Enter your mark2 :";
       cin>>ob.mark2;
cout<<"Enter your mark3 :";
       cin>>mark3;

cout<<"Md."<<ob.name<<endl;
cout<<"Your total mark :"<<ob.calculateTotal(mark3);

return 0;
}
