#include <stdio.h>

int power(int x, int n) {
    if (n==0)
        return 1;
    else
        return x*power(x,n-1);
}

int main() {
    int x=0,n=0;
    scanf("%d%d",&x,&n);
    printf("%d^%d = %d\n", x,n, power(x,n));

    return 0;
}
