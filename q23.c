#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a vlaue of a: ");
    scanf("%d",&a);
    printf("Enter a vlaue of b: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swaping a=%d and b=%d",a,b);
    return 0;
}