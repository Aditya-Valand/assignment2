#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    a=a/10;
    printf("Number without his last digit is %d",a);
    return 0;
}