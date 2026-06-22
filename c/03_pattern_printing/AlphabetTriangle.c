#include<stdio.h>
int main(){
    char n;
    printf("Enter: : ");
    scanf("%c",&n);
    for(int i=65;i<=n;i++){
        for(int j=65;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}