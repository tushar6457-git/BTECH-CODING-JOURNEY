#include<stdio.h>
int main(){
    // printf("  *  \n  *  \n*****\n  *  \n  *  ");
    int n;
    printf("Enter max row number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n/2 || i==n/2){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}