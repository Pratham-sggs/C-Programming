#include<stdio.h>
int main()
{
int a[20],n,i,j,temp;
printf("Enter number of elements \n");
scanf("%d",&n);
printf("Input Elements in array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array \n");
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
return 0;
}
