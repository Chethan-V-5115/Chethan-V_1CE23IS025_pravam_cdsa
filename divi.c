#include<stdio.h>

int main()
{
    int n=0,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    {
        if(a[i]%5==0)
            printf("\n %d",a[i]);
    }
    

    
    return 0;
}