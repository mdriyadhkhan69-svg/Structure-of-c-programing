#include <stdio.h>

int main(){

 int n;

int flag= -1;
int target;
 printf("Enter number:");
 scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++){
printf("enter number:",i+1);
    scanf("%d",&arr[i]);
}

printf("enter targert elements:");
scanf("%d",&target);
 for(int i=0;i<n;i++){

    if(arr[i]==target){
        flag=i;
        break;
    }
 }
if(flag != -1){
    printf("found the elements: %d",flag);
}else{
printf("not found");
}

return 0;
}
