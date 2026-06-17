#include<stdio.h>
int main(){
    
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    printf("The number of digits in the given number are %d\n ",count);
    return 0;
}