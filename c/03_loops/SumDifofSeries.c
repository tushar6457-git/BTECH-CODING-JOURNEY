#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    // 1 - 2 + 3 - 4 + 5 ..... n terms
    // pattern ye h, odd -> Positive or even -> Negative
    for(int i=1;i<=n;i++){
        if(i%2!=0) sum = sum + i;
        else sum = sum - i;
    }
    printf("%d\n",sum);
    return 0;
}