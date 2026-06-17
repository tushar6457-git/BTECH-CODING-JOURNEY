#include<stdio.h>
int main(){
    int n;
    printf("Enter a 3 digit Integer: ");
    scanf("%d",&n);
    if(n>99 && n<1000){                                                     //and is written as && in C
        printf("Its a three digit number\n");
    }
    else{
        printf("Its not a three digit number\n");
    }
    return 0;
}