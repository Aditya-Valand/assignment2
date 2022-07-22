#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a three digit number: ");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    c=c%10;
    a=a/100;
    printf("Sum of three digit is %d",a+b+c);
    return 0;
}