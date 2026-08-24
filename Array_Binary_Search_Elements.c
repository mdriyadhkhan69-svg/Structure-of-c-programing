#include <stdio.h>

int main(){
int n;

printf("enter how much array index you need:");
scanf("%d",&n);
int arr[n];
 for(int i=0;i<n;i++){
 printf("enter your number:%d",i+1);
 scanf("%d",&arr[i]);

 }
int target;

printf("enter your target elements:");
scanf("%d",&target);

int high= n-1;
int low= 0;
int flag= -1;

while(low<=high){

int mid= (high+low)/2;

if(arr[mid]== target){
flag=mid;
break;
}
if(arr[mid]<target){
low=mid+1;
}else{
high=mid-1;
}

}

if(flag!=-1){
printf("the index of your target number is:%d",flag);
}else{
printf("not found");
}
return 0;
}
