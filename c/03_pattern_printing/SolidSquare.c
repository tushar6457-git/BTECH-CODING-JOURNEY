#include<stdio.h>
int main(){
    int m;
    printf("Enter number to make solid square: ");
    scanf("%d",&m);
    
    for(int i=1;i<=m;i++){
         for(int i=1;i<=m;i++){
        printf(" * ");
      }
    
    printf("\n");
    }
    return 0;
}