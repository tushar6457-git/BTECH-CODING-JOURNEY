#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%2==0){
        printf("Even Number\n");
    }
    
    // if(n%2!=0){
    //     printf("Odd Number\n");
    // }
    else{
        printf("Odd Number\n");
    }
    return 0;
}