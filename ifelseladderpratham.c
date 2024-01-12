#include<stdio.h>
int main()
{
int a;
printf("Enter day Number");
scanf("%d",&a);
if(a==1)
{
printf("sunday \n");
}
else if(a==2)
{
printf("monday \n");
}
else if(a==3)
{
printf("tuesday \n");
}
else if(a==4)
{
printf("wednesday \n");
}
else if(a==5)
{
printf("thursday \n");
}
else if(a==6)
{
printf("friday \n");
}
else if(a==7)
{
printf("saturday \n");
}
else
{
printf("Invalid day \n");
}
return 0;
}
