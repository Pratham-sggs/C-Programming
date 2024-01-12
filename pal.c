#include<stdio.h>
int main()
{
int N,d,rev=0,num;
printf("Enter Number \n");
scanf("%d",&N);
num=N;
while(N!=0)
{
d=N%10;
rev=rev*10+d;
N=N/10;
}
if(rev==num)
{
printf("The Number Is Palindrom \n");
}
else
{
printf("Number is Not Palindrom \n");
}
return 0;
}
