#include<stdio.h>

int main()
{
    int a,b;
    printf("enter a number for a");
    scanf("%d",&a);

    printf("enter a number for b");
    scanf("%d",&b);

    if (b%a==0)
        printf("the number is divisible");

    else
        printf("the number is not divisible");
    return 0;

}