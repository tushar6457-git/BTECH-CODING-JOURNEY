#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fibo1 = 1;
    int fibo2 = 1;
    int sum = 1;
    for(int i = 1;i <=n-2;i++){
        sum = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = sum;
    }
    printf("The %dth Fibonacci of is %d ",n,sum);
    
    return 0;
}