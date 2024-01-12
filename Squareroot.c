#include<stdio.h>
#include<math.h>
    void square(float n)
    {
        if (n<0)
        {
            printf("Number is Negative \n");
        }
        else
        {
            float squareroot=sqrt(n);
            if (squareroot==sqrt(n))
            {
                 printf("%f is a Perfect square \n",n);
            }
            else
            {
                printf("%f is a Perfect square \n",n);
            }
        }
    }
    int main()
    {
        float n;
        printf("Enter the Number :");
        scanf("%f",&n);
        square(n);
        return 0;
    }
