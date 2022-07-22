#include<stdio.h>
int main()
{
    int count=1,x,a;
    printf("Enter a number: ");
    scanf("%d",&a);
    x=a&1;
    if(x)
    {
        printf("%d",count);
    }
    else
    {
        while(a != 0)
        {
            a=a>>1;
            count++;
            x=a&1;
            if(x)
            {
                break;
            }    
        }
        printf("%d",count);
    }
}    