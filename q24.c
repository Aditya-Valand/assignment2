#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a vlaue of a and b:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping a=%d and b=%d",a,b);
    return 0;

}