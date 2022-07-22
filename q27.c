#include<stdio.h>
int main()
{
    int count=0,a,result=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a!= 0)
    {
        result=a&1;
        count++;
        if(result == 1)
        {
            break;
        }
        a=a>>1;
        
    }
    printf("%d",count);
       
}