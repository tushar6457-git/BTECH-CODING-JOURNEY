#include<stdio.h>
int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    // if(n%5==0 || n%3==0){
    //     if(n%15==0){
    //         printf("Divisible by 15\n");
    //     }
    //     else{
    //         printf("Condition satisfied\n");
    //     }
        
    // }
    // else{
    //     printf("Not divisible by 3 or 5\n");
    // }
    if((n%5==0 || n%3==0) && n%15!=0){
    printf("The number is divisible by 3 or 5 but not 15\n");
    }
    else{
        printf("The number is either not divible by 3 or 5 OR is divisible by 15\n");
    }

    return 0;

}