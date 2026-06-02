#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a = 0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }   
    if(a==0){
        printf("The given number is prime\n");
    }
    else{
        printf("The given Composite \n");
    }
    return 0;
}