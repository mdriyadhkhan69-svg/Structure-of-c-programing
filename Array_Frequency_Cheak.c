#include <stdio.h>

int main() {

int n;
printf("Enter number:");
scanf("%d",&n);

    int arr[n];
 for (int i = 0; i < n; i++) {
        printf("Enter number%d:",i+1);
scanf("%d",&arr[i]);
 }

    for (int i = 0; i < n; i++) {

        int count = 0;


        for (int j = 0; j < n; j++) {


            if (arr[i] == arr[j]) {

                count++;
            }
        }
   printf("%d occurs %d times\n", arr[i],count);
    }

    return 0;
}
