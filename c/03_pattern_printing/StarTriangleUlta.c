#include<stdio.h>
int main(){
    int n;
    printf("Enter: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){      //rows
        for(int j=1;j<=n+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}