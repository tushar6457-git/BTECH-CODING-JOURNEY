#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    int lstdgt = 0;
    while(n!=0){
        lstdgt = n%10;
        if(lstdgt%2==0){
            sum = sum + lstdgt;

        }
        n = n/10;
    }
        printf("The sum of even digits in the number is %d\n",sum);
    
    return 0;
}