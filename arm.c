#include<stdio.h>
int main()
{
int num=1,n,rem,sum;
printf("Armstrong number are: \n");
for(num=100;num<=999;num++)
{
n=num;
sum=0;
while(n>0)
{
rem=n%10;
n=n/10;
sum=sum+(rem*rem*rem);
}
if(num==sum)
{
printf("%d\n",num);
}
}
}
