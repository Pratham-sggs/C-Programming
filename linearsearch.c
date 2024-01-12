#include<stdio.h>
int main()
{
    int a[20],n,item,pos=0,i,found=0;
    printf("Enter number of elements & item to be search \n");
    scanf("%d %d",&n,&item);
    printf("enter elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(item==a[i])
        {
            pos=i;
            printf("%d item found at %d position \n",item,pos+1);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("search unsuccessful \n");
    }
}
