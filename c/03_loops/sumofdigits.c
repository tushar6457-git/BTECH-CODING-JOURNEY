#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    int lstdgt = 0;
    while(n!=0){
        lstdgt = n%10;
        sum = sum + lstdgt;
        n = n/10;
      
    }

    printf("The sum of the digits is %d \n",sum);
    return 0;
}