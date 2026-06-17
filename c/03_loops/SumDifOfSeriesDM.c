#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int sum;
    if(n%2==0){
        sum = -(n/2);
    }
    else{
        sum = (n+1)/2;
    }
    printf("%d\n", sum);
    return 0;
}