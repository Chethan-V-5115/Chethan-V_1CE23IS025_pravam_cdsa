#include<stdio.h>

int main()
{
    int n;
    long fact=1;
    scanf("%d",&n);
    for(int i=2;i<=n;fact*=i++);

    printf("%ld\n",fact);
    return 0;
}