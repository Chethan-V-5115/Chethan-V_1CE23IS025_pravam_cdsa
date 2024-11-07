#include<stdio.h>

int cpr(int n1) {
    static int i; 
    if (i == 0) {
        i = n1 / 2;
    }
    if (i == 1) {
        return 1;
    } else if (n1 % i == 0) {
        return 0;
    } else {
        i--;
        return cpr(n1); 
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (cpr(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
