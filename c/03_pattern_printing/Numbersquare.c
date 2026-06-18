#include<stdio.h>
int main(){
    // printf("1234\n1234\n1234\n1234\n");
    int n;
    printf("Enter the max num: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf(" %d ",j);
        }
        printf("\n");
    }
    
    return 0;
}