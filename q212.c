#include<stdio.h>
int main()
{
    float INR,USD;
    printf("Enter INR:");
    scanf("%f",&INR);
    USD=INR*76.23;
    printf("The %f INR in the USD is %f",INR,USD);
    return 0;
}