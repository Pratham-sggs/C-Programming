#include<stdio.h>
void main(){
int a,b;
printf("enter a number to generate a table");
scanf("%d",&a);
printf("\n table of %d is \n",a);
for (b=1;b<=10;++b){
printf("%d * %d = %d \n",a,b,a*b);
}
}
