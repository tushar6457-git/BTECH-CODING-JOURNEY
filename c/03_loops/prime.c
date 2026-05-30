#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Not prime\n");
        return 0;
    }
    
    int isPrime = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
             isPrime = 0;
             break;
        }
    }
    
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");
    
    return 0;
}