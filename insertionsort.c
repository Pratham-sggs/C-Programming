#include<stdio.h>
int main()
{
int i,j,n,key,a[20];
printf("Enter number of elements in array \n");
scanf("%d",&n);
printf("Enter array elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
key=a[i];
j=i-1;
while((key<a[j])&&(j>=0))
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
printf("sorted array \n");
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
return 0;
}
