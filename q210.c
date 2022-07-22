#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    b=a%10;
    a=a-b;
    printf("The new number is %d",a);
    return 0;
}