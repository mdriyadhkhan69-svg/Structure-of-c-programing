#include <stdio.h>

int totalsumcalculate(int arr[],int n){
int sum=0;
for(int i=0;i<n;i++){

sum= sum+arr[i];

}

return sum;
}

float totalavgcalculate(int sum,int n){
float avg;
avg= (float)sum/n;

return avg;
}
int main(){

int n;
printf("enter how much array index you need:");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
printf("enter your numbers%d:",i+1);
scanf("%d",&arr[i]);

}

int total= totalsumcalculate(arr,n);

float avarage= totalavgcalculate(total,n);

printf("Total sum of your number:%d\nAvarage of your numbers:%.2f\n",total,avarage);

return 0;
}
