#include<stdio.h>
int main() // pratham
{
int N,i,c=0;
printf("Enter The Number \n");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
if(N%i==0)
{
c++;
}
}
if(c==2)
{
printf("Number is Prime \n");
}
else
{
printf("Number is Not Prime \n");
}
return 0;
}
