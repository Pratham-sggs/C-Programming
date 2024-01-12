#include<stdio.h>
int main()
{
    int a[20],n,i,beg,end,mid,item,found=0;
    printf("Enter Number of Elements & item to be search \n");
    scanf("%d %d",&n,&item);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    printf("Input elements \n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(item==a[mid])
        {
            found=1;
            printf("%d item found %d position \n",item,mid+1);
            break;
        }
        else if(item<a[mid])
        {
            end=mid-1;
        }
        else if(item>a[mid])
        {
            beg=mid+1;
            mid=(beg+end)/2;
        }
    }
    if(found=0)
    {
        printf("search unsuccessful");
    }
    }
