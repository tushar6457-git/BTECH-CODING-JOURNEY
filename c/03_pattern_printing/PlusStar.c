#include<stdio.h>
int main(){
    // printf("  *  \n  *  \n*****\n  *  \n  *  ");
    int n;
    printf("Enter max row number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==3 || i==3){
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