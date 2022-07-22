#include<stdio.h>
int main()
{
    int a;
    printf("ENter a number:");
    scanf("%d",&a);
    a=a%10;
    printf("THE UNIT DIGIT OF A NUMBER IS %d",a);
    return 0;
}