#include<stdio.h>

int main()
{
    int n=0,a[100],sum=0;
    float avg;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
    }
    avg=(float)sum/n;

    printf("the average is %2.f\n",avg);




    return 0;
}