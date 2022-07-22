#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    if(a&1)
    {
        printf("Odd number");
    }
    else
    {
        printf("Even number");
    }
}