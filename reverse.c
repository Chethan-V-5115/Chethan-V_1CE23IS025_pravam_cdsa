#include<stdio.h>
int main()
{
    int x=2,s=0,t=0;
    printf("Enter the number of revere ");
    scanf("%i",&x);
    t=x;
    while(x>0)
    {
      s=(s*10)+(x%10);
      x/=10;
    }
    printf("%d --- %d",t,s);
    return 0;
}