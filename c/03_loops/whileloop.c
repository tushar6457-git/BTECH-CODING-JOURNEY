#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i = 1;
    while(i<n){     //condition only
        printf("%d ",i);
        i++;
    }
    return 0;
}