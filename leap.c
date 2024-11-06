#include<stdio.h>

int main()

{
    int y=0;
    scanf("%d",&y);
    if(y%4==0&&y%100!=0)
    printf("it is a leap year");
    else if(y%100==0&&y%400==0)
    printf("it is a leap year");
    else
    printf("it is not a leap year");
    return 0;

}