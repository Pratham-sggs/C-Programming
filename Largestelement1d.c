#include<stdio.h>
int main()
{
int a[10],n,large=0,i;
printf("Enter Number of elements \n");
scanf("%d",&n);
printf("Enter elements in 1d array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
for(i=1;i<n;i++)
{
if(large<a[i])
{
large=a[i];//...
}
}
printf("large=%d \n",large);
}
