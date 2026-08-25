#include <stdio.h>
int main(){
FILE *file;

char name[100];
printf("enter your name");
scanf("%s",name);

file=fopen("test.text","a");



if(file == NULL){
printf("not found file");
return 1;
}


fprintf(file,"%s/n",name);

fclose(file);
return 0;
}
