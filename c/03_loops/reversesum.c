#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int original = n;
    int rev = 0;
    while(n>0){
        rev = rev*10;
        rev = rev+(n%10);
        n = n/10;
    }
    int sum = original + rev;
    printf("The Reverse of the number is %d\n",rev);
    printf("The sum of the given number and its reverse is %d\n",sum);
    return 0;
}