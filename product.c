#include<stdio.h>
int main()
{
    int x=4,y=3,product=0;
    scanf("%d%d",&x,&y);
    for(int i=0;i<y;i++){
        product +=x;
    }
    printf("the product of %d and %d is: %d\n",x,y,product);
    return 0;
}