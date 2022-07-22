#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    a=b%10;
    b=b/10;    
    printf("The new number is %d%d%d",c,a,b);
    return 0;
}