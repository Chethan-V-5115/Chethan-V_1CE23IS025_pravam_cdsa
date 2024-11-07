#include<stdio.h>
int main()
{
    int m=32,n=56;
    scanf("%d%i", &m,&n);
    printf("Before swap m=%d n=%i",m,n);
    m=m+n;
    n=m-n;
    m=m-n;
    printf("Before swap m=%d n=%i",m,n);
    return 0;
}