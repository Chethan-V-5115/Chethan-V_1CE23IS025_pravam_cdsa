#include<stdio.h>
int main()
{
    int no=0,s=0;
    scanf("%i",&no);
    while(no>0)
    {
        s+=(no%10);
        no/=10;
    }
    printf("sum digit %d",s);
    return 0;
}