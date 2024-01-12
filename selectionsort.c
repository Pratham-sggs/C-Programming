#include<stdio.h>
int main()
{
int i,j,n,min,a[20],temp;
printf("Enter Number of element in array \n");
scanf("%d",&n);
printf("Enter array elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<(n-1);i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
{
min=j;
}
}
if(min!=i)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
printf("sorted array \n");
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
return 0;
}
