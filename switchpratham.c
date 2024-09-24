#include<stdio.h> //.....
int main()
{
char op;
int a,b;
printf("\n Enter an operator(+,-,*,/) \n");
scanf("%c",&op);
printf("\n Enter two operands:");
scanf("%d %d",&a,&b);
switch(op)
{
case'+':
printf("%d + %d = %d \n",a,b,a+b);
break;
case'-':
printf("%d - %d = %d \n",a,b,a-b);
break;
case'*':
printf("%d * %d = %d \n",a,b,a*b);
break;
case'/':
printf("%d / %d = %d \n",a,b,a/b);
break;
default:
printf("Error ! operator is not correct \n");
}
return 0;
}
