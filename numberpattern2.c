#include<stdio.h>
int main()
{
    int i,k=1,j,n;
    printf("Number of Lines \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k=k+1;
        }
        printf("\n");
    }
}
