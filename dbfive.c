#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%5==0){
        printf("Divisible by 5\n");
    }
    
    // if(n%2!=0){
    //     printf("Odd Number\n");
    // }
    else{
        printf("Not Divisible by 5\n");
    }
    return 0;
}