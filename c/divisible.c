#include<stdio.h>
int main(){
    int n;
    printf("ENter your number: ");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("The number is divisible by both 3 and 5\n");
    }
    // if(n%15==0){
    //     printf("The number is divisible by both 3 and 5.");
    // }
    else{
        printf("Its not divisible by both 3 and 5.\n");
    }
    return 0;
}