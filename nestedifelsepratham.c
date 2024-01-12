#include<stdio.h>
int main(){
int a,b;
printf("Input the Values of two numbers");
scanf("%d %d",&a,&b);
if(a!=b){
printf("%d is not equal to %d \n",a,b);
if(a>b){
printf("%d is greater than %d \n",a,b);
}
else{
printf("%d is greater than %d \n",b,a);
}
}
else{
printf("%d is equal to %d \n",a,b);
}
return 0;
}
